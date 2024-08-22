// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSVOICETRIGGEREVENTSCOORDINATOR_H
#define CSVOICETRIGGEREVENTSCOORDINATOR_H

@class NSHashTable, NSString;
@protocol CSAudioRouteChangeMonitorDelegate, CSBluetoothWirelessSplitterMonitorDelegate, CSVoiceTriggerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CSVoiceTriggerEventsCoordinator : NSObject <CSAudioRouteChangeMonitorDelegate, CSBluetoothWirelessSplitterMonitorDelegate, CSVoiceTriggerDelegate>

 {
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_targetQueue;
    BOOL _isHearstConnected;
    NSUInteger _splitterState;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)_isVoiceTriggerFromHearst:(id)arg0 ;
-(BOOL)_shouldIgnoreVoiceTriggerEvent:(id)arg0 ;
-(id)_createVoiceTriggerEventInfoString:(id)arg0 ;
-(id)init;
-(void)CSAudioRouteChangeMonitor:(id)arg0 didReceiveAudioRouteChangeEvent:(NSInteger)arg1 ;
-(void)CSBluetoothWirelessSplitterMonitor:(id)arg0 didReceiveSplitterStateChange:(NSUInteger)arg1 shouldDisableSpeakerVerificationInSplitterMode:(BOOL)arg2 ;
-(void)_notifyKeywordDetect;
-(void)_notifyKeywordReject:(id)arg0 deviceId:(id)arg1 ;
-(void)_notifyNearMissEvent:(id)arg0 deviceId:(id)arg1 ;
-(void)_notifyRaiseToSpeakTriggerEvent:(id)arg0 ;
-(void)_notifyRemoteTriggerEvent:(id)arg0 myriadHash:(id)arg1 remoteTriggerType:(NSUInteger)arg2 remoteDeviceId:(id)arg3 isTriggeredFromFullWake:(BOOL)arg4 completion:(id)arg5 ;
-(void)_notifySpeakerReject:(id)arg0 ;
-(void)_notifySuperVector:(id)arg0 ;
-(void)_notifyTriggerEvent:(id)arg0 deviceId:(id)arg1 completion:(id)arg2 ;
-(void)_notifyWakeKeywordSpokenEvent:(id)arg0 deviceId:(id)arg1 ;
-(void)keywordDetectorDidDetectKeyword;
-(void)raiseToSpeakDetected:(id)arg0 ;
-(void)registerObserver:(id)arg0 ;
-(void)setTargetQueue:(id)arg0 ;
-(void)start;
-(void)unregisterObserver:(id)arg0 ;
-(void)voiceTriggerDidDetectKeyword:(id)arg0 deviceId:(id)arg1 ;
-(void)voiceTriggerDidDetectKeyword:(id)arg0 deviceId:(id)arg1 completion:(id)arg2 ;
-(void)voiceTriggerDidDetectKeyword:(id)arg0 myriadHash:(id)arg1 remoteTriggerType:(NSUInteger)arg2 remoteDeviceId:(id)arg3 isTriggeredFromFullWake:(BOOL)arg4 completion:(id)arg5 ;
-(void)voiceTriggerDidDetectNearMiss:(id)arg0 deviceId:(id)arg1 ;
-(void)voiceTriggerDidDetectSpeakerReject:(id)arg0 ;
-(void)voiceTriggerDidRejected:(id)arg0 deviceId:(id)arg1 ;
-(void)voiceTriggerGotSuperVector:(id)arg0 ;


@end


#endif