// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUCAPACKAGEICONMANAGER_H
#define HUCAPACKAGEICONMANAGER_H

@class NSCache, HFMutablePriorityQueue;
@protocol OS_dispatch_group, NAScheduler;

#import <Foundation/Foundation.h>


@interface HUCAPackageIconManager : NSObject {
    os_unfair_lock_s _queueLock;
    NSObject<OS_dispatch_group> *_prefetchDispatchGroup;
}


@property (retain, nonatomic) NSCache *packageDataCache; // ivar: _packageDataCache
@property (retain, nonatomic) NSCache *packageReuseQueue; // ivar: _packageReuseQueue
@property (retain, nonatomic) HFMutablePriorityQueue *prefetchPriorityQueue; // ivar: _prefetchPriorityQueue
@property (retain, nonatomic) NSObject<NAScheduler> *prefetchScheduler; // ivar: _prefetchScheduler
@property (nonatomic) NSUInteger signpostID; // ivar: _signpostID


+(id)sharedInstance;
-(id)_loadPackageWithIconDescriptor:(id)arg0 ;
-(id)_packageDataForIconDescriptor:(id)arg0 ;
-(id)_prefetchIcons:(id)arg0 ;
-(id)_queueForIconDescriptorIdentifier:(id)arg0 ;
-(id)init;
-(id)packageForIconDescriptor:(id)arg0 ;
-(id)prefetchIconDescriptors:(id)arg0 ;
-(id)tryReclaimPackage:(id)arg0 forIconDescriptor:(id)arg1 ;
-(void)_startPrefetchIfNecessary;
-(void)prioritizeIconDescriptors:(id)arg0 ;
-(void)returnPackageToCache:(id)arg0 forIconDescriptor:(id)arg1 ;


@end


#endif