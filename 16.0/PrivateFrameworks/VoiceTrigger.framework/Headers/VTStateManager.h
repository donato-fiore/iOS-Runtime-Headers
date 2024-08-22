// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VTSTATEMANAGER_H
#define VTSTATEMANAGER_H

@class NSString;
@protocol VTFirstUnlockMonitorDelegate, VTGestureMonitorDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "VTPhraseSpotter.h"
#import "VTBuiltInRTModel.h"
#import "VTPolicy.h"
#import "VTXPCServiceServer.h"
#import "VTGestureMonitor.h"
#import "VTRemoteDarwinHIDEventNotifier.h"
#import "VTCoreSpeechKeepAliveHandler.h"

@interface VTStateManager : NSObject <VTFirstUnlockMonitorDelegate, VTGestureMonitorDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    VTPhraseSpotter *_phraseSpotter;
    VTBuiltInRTModel *_builtInRTModel;
    id *_callbackWithMessageAndTimestamp;
    VTPolicy *_enablePolicy;
    VTXPCServiceServer *_xpcServer;
    BOOL _voiceTriggerIsEnabled;
    BOOL _voiceTriggerIsEnabledOnCoreSpeechDaemon;
    BOOL _rtModelDownloaded;
    VTGestureMonitor *_gestureMonitor;
    NSUInteger _wakeGestureHostTime;
    VTRemoteDarwinHIDEventNotifier *_remoteDarwinHIDEventNotifier;
}


@property (retain, nonatomic) VTCoreSpeechKeepAliveHandler *coreSpeechKeepAliveHandler; // ivar: _coreSpeechKeepAliveHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)iPhoneShouldStartVoiceTriggerInCoreSpeech;
+(BOOL)isLastTriggerForced;
+(BOOL)isLastTriggerSecondChanceTriggered;
+(NSInteger)getVoiceTriggerCount;
+(id)_serviceClient;
+(id)firstChanceAudioBuffer;
+(id)firstChanceTriggeredDate;
+(id)firstChanceVTEventInfo;
+(id)requestCurrentBuiltInRTModelDictionary;
+(id)requestCurrentVoiceTriggerAssetDictionary;
+(void)clearVoiceTriggerCount;
+(void)notifyVoiceTrigger;
+(void)notifyVoiceTriggeredSiriSessionCancelled;
+(void)notifyVoiceTriggeredSiriSessionCancelled:(id)arg0 ;
+(void)requestAudioCapture:(CGFloat)arg0 ;
+(void)requestCurrentVoiceTriggerAssetDictionaryWithReply:(id)arg0 ;
+(void)requestForcedSecondChance;
+(void)requestForcedTriggerEvent;
+(void)requestPhraseSpotterBypassing:(BOOL)arg0 timeout:(CGFloat)arg1 ;
+(void)requestRaiseToSpeakBypassing:(BOOL)arg0 timeout:(CGFloat)arg1 ;
+(void)requestVoiceTriggerEnabled:(BOOL)arg0 forReason:(id)arg1 ;
+(void)setCurrentBuiltInRTModelDictionary:(id)arg0 ;
-(id)getModel;
-(id)getPhraseSpotter;
-(id)initWithProperty:(id)arg0 callbackWithMessage:(id)arg1 ;
-(id)initWithProperty:(id)arg0 callbackWithMessageAndTimestamp:(id)arg1 ;
-(id)initWithProperty:(id)arg0 phraseSpotter:(id)arg1 enablePolicy:(id)arg2 callbackWithMessageAndTimestamp:(id)arg3 ;
-(void)VTFirstUnlockMonitor:(id)arg0 didReceiveFirstUnlock:(BOOL)arg1 ;
-(void)_initializeXPCService;
-(void)_notifyStateTransitionToState:(NSInteger)arg0 withStartTimestamp:(NSUInteger)arg1 ;
-(void)_powerlog:(id)arg0 ;
-(void)_stateTransitionDidOccur:(BOOL)arg0 fromCallback:(BOOL)arg1 ;
-(void)gestureMonitorDidReceiveSleepGesture:(id)arg0 ;
-(void)gestureMonitorDidReceiveWakeGesture:(id)arg0 ;


@end


#endif