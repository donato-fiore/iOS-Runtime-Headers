// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RBTHROTTLEBESTEFFORTNETWORKINGMANAGER_H
#define RBTHROTTLEBESTEFFORTNETWORKINGMANAGER_H

@class NSString;
@protocol RBThrottleBestEffortNetworkingManaging, RBStateCapturing, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "RBProcessIndex.h"
#import "RBProcessMap.h"

@interface RBThrottleBestEffortNetworkingManager : NSObject <RBThrottleBestEffortNetworkingManaging, RBStateCapturing>

 {
    NSObject<OS_dispatch_queue> *_queue;
    RBProcessIndex *_processIndex;
    RBProcessMap *_stateMap;
    BOOL _throttleBestEffortNetworking;
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *stateCaptureTitle;
@property (readonly) Class superclass;


-(BOOL)isThrottleBestEffortNetworkingEnabled;
-(id)captureState;
-(id)init;
-(void)addProcess:(id)arg0 ;
-(void)didUpdateProcessStates:(id)arg0 ;
-(void)removeProcess:(id)arg0 ;


@end


#endif