// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSBUILTINSPEAKERSTATEMONITOR_H
#define CSBUILTINSPEAKERSTATEMONITOR_H

@class AVVoiceTriggerClient, NSString;
@protocol CSAudioServerCrashMonitorDelegate, OS_dispatch_queue;


#import "CSEventMonitor.h"

@interface CSBuiltinSpeakerStateMonitor : CSEventMonitor <CSAudioServerCrashMonitorDelegate>



@property (retain, nonatomic) AVVoiceTriggerClient *alwaysOnProcessorController; // ivar: _alwaysOnProcessorController
@property (nonatomic) NSUInteger builtInSpeakerState; // ivar: _builtInSpeakerState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isSpeakerMuted; // ivar: _isSpeakerMuted
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)isBuiltinSpeakerMuted;
-(NSUInteger)currentBuiltinSpeakerState;
-(id)init;
-(void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)arg0 ;
-(void)_didReceiveBuiltinSpeakerStateChangeNotification:(NSUInteger)arg0 ;
-(void)_didReceiveSpeakerMuteStateChangeNotification:(BOOL)arg0 ;
-(void)_fetchSpeakerStateActiveInfo;
-(void)_fetchSpeakerStateMutedInfo;
-(void)_notifyObserver:(id)arg0 isSpeakerMuted:(BOOL)arg1 ;
-(void)_notifyObserver:(id)arg0 withBuiltinSpeakerState:(NSUInteger)arg1 ;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_stopMonitoring;


@end


#endif