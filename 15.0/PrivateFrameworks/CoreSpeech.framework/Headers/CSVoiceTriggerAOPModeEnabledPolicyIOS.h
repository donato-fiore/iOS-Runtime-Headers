// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSVOICETRIGGERAOPMODEENABLEDPOLICYIOS_H
#define CSVOICETRIGGERAOPMODEENABLEDPOLICYIOS_H

@class CSPolicy, NSString;
@protocol CSSiriClientBehaviorMonitorDelegate, OS_dispatch_queue;



@interface CSVoiceTriggerAOPModeEnabledPolicyIOS : CSPolicy <CSSiriClientBehaviorMonitorDelegate>

 {
    NSObject<OS_dispatch_queue> *_recordStateQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isSiriClientConsideredAsRecord; // ivar: _isSiriClientConsideredAsRecord
@property (retain, nonatomic) NSString *pendingRecordingStopUUID; // ivar: _pendingRecordingStopUUID
@property (readonly) Class superclass;


-(BOOL)_isSpeechDetectionDevicePresent;
-(id)init;
-(void)_addConditionsForIOSAOP;
-(void)_addConditionsForIOSBargeIn;
-(void)_addVoiceTriggerAOPModeEnabledConditions;
-(void)_subscribeEventMonitors;
-(void)siriClientBehaviorMonitor:(id)arg0 didChangedRecordState:(BOOL)arg1 withEventUUID:(id)arg2 withContext:(id)arg3 ;
-(void)siriClientBehaviorMonitor:(id)arg0 didStartStreamWithContext:(id)arg1 successfully:(BOOL)arg2 option:(id)arg3 withEventUUID:(id)arg4 ;
-(void)siriClientBehaviorMonitor:(id)arg0 didStopStream:(id)arg1 withEventUUID:(id)arg2 ;
-(void)siriClientBehaviorMonitor:(id)arg0 willStartStreamWithContext:(id)arg1 option:(id)arg2 ;
-(void)siriClientBehaviorMonitor:(id)arg0 willStopStream:(id)arg1 reason:(NSUInteger)arg2 ;


@end


#endif