// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDTIMEEVENT_H
#define HMDTIMEEVENT_H

@class NSString, NSSet, NSUUID;
@protocol NSSecureCoding, HMFDumpState, HMFLogging, HMDHomeMessageReceiver, OS_dispatch_queue;


#import "HMDEvent.h"

@interface HMDTimeEvent : HMDEvent <NSSecureCoding, HMFDumpState, HMFLogging, HMDHomeMessageReceiver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) BOOL repetitive; // ivar: _repetitive
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *timerID; // ivar: _timerID


+(BOOL)isValidAbsoluteDateComponents:(id)arg0 ;
+(BOOL)isValidOffsetDateComponents:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(BOOL)_activate:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(BOOL)isActive;
-(id)_nextTimerDate;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithModel:(id)arg0 home:(id)arg1 ;
-(void)_initialize;
-(void)_reactivateTriggerAfterDelay;
-(void)_updateRepetitive;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleTimerFiredNotification:(id)arg0 ;
-(void)invalidate;


@end


#endif