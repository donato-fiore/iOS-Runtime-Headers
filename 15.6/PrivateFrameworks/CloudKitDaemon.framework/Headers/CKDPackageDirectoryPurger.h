// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDPACKAGEDIRECTORYPURGER_H
#define CKDPACKAGEDIRECTORYPURGER_H

@class NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CKDPackageDirectoryPurger : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) NSMutableArray *rootDirectories; // ivar: _rootDirectories


+(id)sharedPurger;
+(void)schedulePeriodicPurgesInDirectory:(id)arg0 ;
-(id)init;
-(void)addRootDirectory:(id)arg0 ;
-(void)purgeAll;
-(void)purgeDirectory:(id)arg0 ;
-(void)purgeRootDirectory:(id)arg0 ;
-(void)registerXPCActivity;


@end


#endif