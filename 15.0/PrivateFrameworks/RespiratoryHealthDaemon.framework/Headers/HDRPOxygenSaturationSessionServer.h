// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDRPOXYGENSATURATIONSESSIONSERVER_H
#define HDRPOXYGENSATURATIONSESSIONSERVER_H

@class HDStandardTaskServer, NSString, NSDate;
@protocol HKRPOxygenSaturationSessionServerInterface, HLOxygenSaturationSessionDelegate, OS_dispatch_queue;


#import "HLOxygenSaturationSession.h"

@interface HDRPOxygenSaturationSessionServer : HDStandardTaskServer <HKRPOxygenSaturationSessionServerInterface, HLOxygenSaturationSessionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat expectedDuration; // ivar: _expectedDuration
@property (retain, nonatomic) NSDate *expectedEndDate; // ivar: _expectedEndDate
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) HLOxygenSaturationSession *sensorSession; // ivar: _sensorSession
@property (nonatomic) NSInteger sessionState; // ivar: _sessionState
@property (nonatomic) CGFloat startTime; // ivar: _startTime
@property (readonly) Class superclass;


+(id)requiredEntitlements;
+(id)taskIdentifier;
-(id)exportedInterface;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 ;
-(id)remoteInterface;
-(void)_queue_abortWithCompletion:(id)arg0 ;
-(void)_queue_notifyClientDidEndWithReason:(NSInteger)arg0 saturation:(id)arg1 barometricPressure:(id)arg2 averageHeartRate:(id)arg3 averageHeartRateUUID:(id)arg4 error:(id)arg5 ;
-(void)_queue_notifyClientDidSendFeedback:(NSUInteger)arg0 ;
-(void)_queue_notifyClientDidStartWithStartTime:(CGFloat)arg0 expectedDuration:(CGFloat)arg1 ;
-(void)_queue_startWithCompletion:(id)arg0 ;
-(void)connectionInterrupted;
-(void)connectionInvalidated;
-(void)oxygenSaturationSession:(id)arg0 didBeginWithStartTime:(CGFloat)arg1 expectedDuration:(CGFloat)arg2 ;
-(void)oxygenSaturationSession:(id)arg0 didEndForReason:(NSUInteger)arg1 measurement:(id)arg2 ;
-(void)oxygenSaturationSession:(id)arg0 feedbackDidChange:(NSUInteger)arg1 ;
-(void)remote_abortWithCompletion:(id)arg0 ;
-(void)remote_startWithCompletion:(id)arg0 ;


@end


#endif