// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPASSSNAPSHOTTER_H
#define PKPASSSNAPSHOTTER_H

@class PKPassLibrary, UIWindow, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface PKPassSnapshotter : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    PKPassLibrary *_passLibrary;
    NSObject<OS_dispatch_semaphore> *_snapshotSem;
    UIWindow *_snapshotWindow;
    CGFloat _scale;
    NSMutableArray *_currentSnapshotKeys;
}


@property (nonatomic) BOOL runsInBackgroundProcess;


+(id)sharedInstance;
+(void)purgeCache;
+(void)purgeCacheOfPassSnapshotsWithUinqueID:(id)arg0 ;
-(BOOL)_cachedImageWithKey:(id)arg0 completion:(id)arg1 ;
-(id)init;
-(id)passLibrary;
-(void)_cacheItem:(id)arg0 withKey:(id)arg1 ;
-(void)_performSnapshot:(id)arg0 size:(struct CGSize )arg1 cacheKey:(id)arg2 completion:(id)arg3 ;
-(void)_prepareSnapshotViewWithPass:(id)arg0 size:(struct CGSize )arg1 suppressedContent:(NSUInteger)arg2 cacheKey:(id)arg3 completion:(id)arg4 ;
-(void)_snapshotWithPass:(id)arg0 size:(struct CGSize )arg1 suppressedContent:(NSUInteger)arg2 withCache:(BOOL)arg3 completion:(id)arg4 ;
-(void)dealloc;
-(void)snapshotWithPass:(id)arg0 completion:(id)arg1 ;
-(void)snapshotWithPass:(id)arg0 size:(struct CGSize )arg1 completion:(id)arg2 ;
-(void)snapshotWithPass:(id)arg0 size:(struct CGSize )arg1 suppressedContent:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)snapshotWithUniqueID:(id)arg0 completion:(id)arg1 ;
-(void)snapshotWithUniqueID:(id)arg0 manifestHash:(id)arg1 size:(struct CGSize )arg2 completion:(id)arg3 ;
-(void)snapshotWithUniqueID:(id)arg0 size:(struct CGSize )arg1 completion:(id)arg2 ;
-(void)snapshotWithUniqueID:(id)arg0 size:(struct CGSize )arg1 suppressedContent:(NSUInteger)arg2 completion:(id)arg3 ;


@end


#endif