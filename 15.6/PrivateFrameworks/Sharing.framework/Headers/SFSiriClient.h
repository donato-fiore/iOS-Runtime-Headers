// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFSIRICLIENT_H
#define SFSIRICLIENT_H

@class NSString, NSMutableArray, VSSpeechSynthesizer, SVXDeviceSetupContext, SVXClientServiceManager, SVXDeviceSetupFlowScene;
@protocol VSSpeechSynthesizerDelegate, SVXClientSessionServiceDelegate, OS_dispatch_source, SVXClientDeviceServicing, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SFSiriRequest.h"

@interface SFSiriClient : NSObject <VSSpeechSynthesizerDelegate, SVXClientSessionServiceDelegate>

 {
    BOOL _invalidateCalled;
    unsigned int _invalidateFlags;
    SFSiriRequest *_currentRequest;
    NSObject<OS_dispatch_source> *_currentTimer;
    NSString *_languageCode;
    NSMutableArray *_requests;
    VSSpeechSynthesizer *_speechSynthesizer;
    SVXDeviceSetupContext *_siriDeviceSetupContext;
    SVXClientServiceManager *_siriDeviceSetupManager;
    id<SVXClientDeviceServicing> *_siriDeviceSetupService;
    SVXDeviceSetupFlowScene *_deviceSetupSceneIntro;
    SVXDeviceSetupFlowScene *_deviceSetupSceneDialogA;
    SVXDeviceSetupFlowScene *_deviceSetupSceneDialogB;
    SVXDeviceSetupFlowScene *_deviceSetupSceneDialogC;
    SVXDeviceSetupFlowScene *_deviceSetupSceneOutro;
    SVXClientServiceManager *_siriServiceManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) id *siriDialogHandler; // ivar: _siriDialogHandler
@property (readonly) Class superclass;


-(id)init;
-(void)_activate;
-(void)_completeAllRequestsWithError:(id)arg0 ;
-(void)_completeRequest:(id)arg0 error:(id)arg1 ;
-(void)_deviceSetupEnd;
-(void)_deviceSetupPlayGreetingID:(int)arg0 completion:(id)arg1 ;
-(void)_deviceSetupPrepareGreetingFlow:(id)arg0 error:(id)arg1 completion:(id)arg2 ;
-(void)_deviceSetupSaveDialogATimings:(id)arg0 details:(id)arg1 ;
-(void)_deviceSetupSaveDialogBTimings:(id)arg0 details:(id)arg1 ;
-(void)_deviceSetupSaveDialogCTimings:(id)arg0 details:(id)arg1 ;
-(void)_deviceSetupSaveIntroTimings:(id)arg0 details:(id)arg1 ;
-(void)_invalidate;
-(void)_processQueuedRequests;
-(void)_speakPasscode:(id)arg0 instructions:(id)arg1 languageCode:(id)arg2 voiceName:(id)arg3 flags:(unsigned int)arg4 completion:(id)arg5 ;
// -(void)_speakText:(id)arg0 languageCode:(id)arg1 flags:(unsigned int)arg2 rate:(CGFloat)arg3 delay:(CGFloat)arg4 startHandler:(id)arg5 completion:(unk)arg6  ;
-(void)activate;
-(void)deviceSetupBegin:(NSUInteger)arg0 ;
-(void)deviceSetupEnd;
-(void)deviceSetupPlayGreetingID:(int)arg0 completion:(id)arg1 ;
-(void)deviceSetupPrepareGreeting:(id)arg0 ;
-(void)invalidate;
-(void)invalidateWithFlags:(unsigned int)arg0 ;
-(void)preWarmDeviceSetupWelcomePhaseWithCompletion:(id)arg0 ;
-(void)sessionService:(id)arg0 didBecomeActiveWithActivationContext:(id)arg1 ;
-(void)sessionService:(id)arg0 didChangeStateFrom:(NSInteger)arg1 to:(NSInteger)arg2 ;
-(void)sessionService:(id)arg0 didNotStartSoundWithID:(NSInteger)arg1 error:(id)arg2 ;
-(void)sessionService:(id)arg0 didResignActiveWithDeactivationContext:(id)arg1 ;
-(void)sessionService:(id)arg0 didStartSoundWithID:(NSInteger)arg1 ;
-(void)sessionService:(id)arg0 didStopSoundWithID:(NSInteger)arg1 error:(id)arg2 ;
-(void)sessionService:(id)arg0 willBecomeActiveWithActivationContext:(id)arg1 ;
-(void)sessionService:(id)arg0 willChangeStateFrom:(NSInteger)arg1 to:(NSInteger)arg2 ;
-(void)sessionService:(id)arg0 willPresentFeedbackWithDialogIdentifier:(id)arg1 ;
-(void)sessionService:(id)arg0 willResignActiveWithOptions:(NSUInteger)arg1 duration:(CGFloat)arg2 ;
-(void)sessionService:(id)arg0 willStartSoundWithID:(NSInteger)arg1 ;
-(void)speakDeviceSetupWelcomePhaseWithCompletion:(id)arg0 ;
-(void)speakPasscode:(id)arg0 instructions:(id)arg1 languageCode:(id)arg2 voiceName:(id)arg3 flags:(unsigned int)arg4 completion:(id)arg5 ;
-(void)speakText:(id)arg0 completion:(id)arg1 ;
// -(void)speakText:(id)arg0 flags:(unsigned int)arg1 rate:(CGFloat)arg2 delay:(CGFloat)arg3 startHandler:(id)arg4 completion:(unk)arg5  ;
-(void)speakText:(id)arg0 languageCode:(id)arg1 completion:(id)arg2 ;
-(void)speakText:(id)arg0 rate:(CGFloat)arg1 completion:(id)arg2 ;
-(void)speechSynthesizer:(id)arg0 didFinishSpeakingRequest:(id)arg1 successfully:(BOOL)arg2 phonemesSpoken:(id)arg3 withError:(id)arg4 ;
-(void)speechSynthesizer:(id)arg0 didFinishSpeakingRequest:(id)arg1 successfully:(BOOL)arg2 withError2:(id)arg3 ;
-(void)speechSynthesizer:(id)arg0 didFinishSynthesisRequest:(id)arg1 withInstrumentMetrics:(id)arg2 error2:(id)arg3 ;
-(void)speechSynthesizer:(id)arg0 didFinishSynthesisRequest:(id)arg1 withInstrumentMetrics:(id)arg2 error:(id)arg3 ;
-(void)speechSynthesizer:(id)arg0 didStartSpeakingRequest:(id)arg1 ;
-(void)speechSynthesizer:(id)arg0 withRequest:(id)arg1 didReceiveTimingInfo2:(id)arg2 ;
-(void)speechSynthesizer:(id)arg0 withRequest:(id)arg1 didReceiveTimingInfo:(id)arg2 ;
-(void)startDelayedRequest:(id)arg0 ;
-(void)stopSpeaking;


@end


#endif