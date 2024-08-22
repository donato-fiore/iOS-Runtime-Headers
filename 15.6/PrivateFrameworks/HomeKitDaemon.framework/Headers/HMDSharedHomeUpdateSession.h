// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDSHAREDHOMEUPDATESESSION_H
#define HMDSHAREDHOMEUPDATESESSION_H

@class NSDictionary, HMFMessageDispatcher, HMFTimer, NSString, NSUUID;
@protocol HMFLogging, HMFTimerDelegate, HMFDumpState, OS_dispatch_queue, HMDSharedHomeUpdateSessionDelegate;

#import <Foundation/Foundation.h>

#import "HMDHome.h"

@interface HMDSharedHomeUpdateSession : NSObject <HMFLogging, HMFTimerDelegate, HMFDumpState>

 {
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDHome *_home;
    NSDictionary *_messagePayload;
    HMFMessageDispatcher *_messageDispatcher;
    HMFTimer *_timer;
    NSUInteger _retryCount;
    CGFloat _currentTimerValue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<HMDSharedHomeUpdateSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *homeIdentifier;
@property (readonly, nonatomic) NSUUID *sessionID; // ivar: _sessionID
@property (readonly) Class superclass;


+(id)logCategory;
-(id)dumpState;
-(id)initWithHome:(id)arg0 delegate:(id)arg1 workQueue:(id)arg2 messagePayload:(id)arg3 messageDispatcher:(id)arg4 ;
-(id)logIdentifier;
-(void)dealloc;
-(void)requestDataSync;
-(void)timerDidFire:(id)arg0 ;


@end


#endif