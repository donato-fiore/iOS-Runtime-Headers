// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SOSCOREANALYTICSREPORTER_H
#define SOSCOREANALYTICSREPORTER_H

@class NSString;
@protocol SOSCoreAnalyticsReporting;

#import <Foundation/Foundation.h>


@interface SOSCoreAnalyticsReporter : NSObject <SOSCoreAnalyticsReporting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_firstPartyEnablementForTrigger:(NSInteger)arg0 ;
+(BOOL)_thirdPartyEnablementForTrigger:(NSInteger)arg0 ;
+(BOOL)isSensitiveTrigger:(NSInteger)arg0 ;
+(id)SOSCoordinationDeviceString:(NSInteger)arg0 ;
+(id)sharedInstance;
+(void)_AnalyticsSendEventLazy:(id)arg0 data:(id)arg1 ;
-(void)reportSOSCancelationTimeout:(NSInteger)arg0 ;
-(void)reportSOSEvent:(id)arg0 callDuration:(NSInteger)arg1 isHandoffTrigger:(BOOL)arg2 onWristState:(NSInteger)arg3 ;
-(void)reportSOSRejectedWithTrigger:(NSInteger)arg0 currentTriggerMechanism:(NSInteger)arg1 ;
-(void)reportSOSRestingResponse:(NSInteger)arg0 restingResponse:(NSInteger)arg1 hasMedicalID:(BOOL)arg2 ;
-(void)reportSOSTriggerHandoff:(NSInteger)arg0 source:(NSInteger)arg1 destination:(NSInteger)arg2 result:(NSInteger)arg3 ;
-(void)reportSOSTriggered:(NSInteger)arg0 ;
-(void)reportSOSUserCancelled:(NSInteger)arg0 lastFlowState:(NSInteger)arg1 countdownValue:(NSInteger)arg2 ;


@end


#endif