// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CULIVEAUDIOSERVER_H
#define CULIVEAUDIOSERVER_H

@class NSMutableSet, AVAudioSession, RPCompanionLinkClient, NSMutableDictionary, SVXClientServiceConnection, NSString;
@protocol SVXClientServiceConnectionDelegate, SVXClientSessionServiceDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CULiveAudioServer : NSObject <SVXClientServiceConnectionDelegate, SVXClientSessionServiceDelegate>

 {
    NSMutableSet *_audioSessionClients;
    AVAudioSession *_audioSession;
    RPCompanionLinkClient *_messenger;
    BOOL _prefSiriLED;
    BOOL _prefSiriVOX;
    NSMutableDictionary *_sessionMap;
    SVXClientServiceConnection *_siriManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)liveActionPerformRequest:(id)arg0 completion:(id)arg1 ;
+(void)liveActionSetupRequest:(id)arg0 completion:(id)arg1 ;
-(id)clientServiceConnection:(id)arg0 performerForComponent:(NSInteger)arg1 ;
-(id)init;
-(void)_activateWithCompletion:(id)arg0 ;
-(void)_audioSessionEnd:(id)arg0 ;
-(void)_audioSessionStart:(id)arg0 ;
-(void)_handleActionPlayAlert:(int)arg0 senderID:(id)arg1 completion:(id)arg2 ;
-(void)_handleActionPrepare:(id)arg0 options:(id)arg1 responseHandler:(id)arg2 ;
-(void)_handleActionRequest:(id)arg0 options:(id)arg1 responseHandler:(id)arg2 ;
-(void)_handleActionSpeakText:(id)arg0 senderID:(id)arg1 completion:(id)arg2 ;
-(void)_handleDataEvent:(id)arg0 options:(id)arg1 ;
-(void)_handleStartRequest:(id)arg0 options:(id)arg1 responseHandler:(id)arg2 ;
-(void)_handleStopRequest:(id)arg0 options:(id)arg1 responseHandler:(id)arg2 ;
-(void)_prepareAlert:(NSInteger)arg0 senderID:(id)arg1 completion:(id)arg2 ;
-(void)_prepareSpeakText:(id)arg0 senderID:(id)arg1 completion:(id)arg2 ;
-(void)activateWithCompletion:(id)arg0 ;
-(void)clientServiceConnectionDidInvalidate:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)peerDisconnected:(id)arg0 ;
-(void)sessionService:(id)arg0 didBecomeActiveWithActivationContext:(id)arg1 ;
-(void)sessionService:(id)arg0 didBecomeActiveWithActivationContext:(id)arg1 turnID:(id)arg2 ;
-(void)sessionService:(id)arg0 didChangeStateFrom:(NSInteger)arg1 to:(NSInteger)arg2 ;
-(void)sessionService:(id)arg0 didNotStartSoundWithID:(NSInteger)arg1 error:(id)arg2 ;
-(void)sessionService:(id)arg0 didResignActiveWithDeactivationContext:(id)arg1 ;
-(void)sessionService:(id)arg0 didStartSoundWithID:(NSInteger)arg1 ;
-(void)sessionService:(id)arg0 didStopSoundWithID:(NSInteger)arg1 error:(id)arg2 ;
-(void)sessionService:(id)arg0 willBecomeActiveWithActivationContext:(id)arg1 ;
-(void)sessionService:(id)arg0 willBecomeActiveWithActivationContext:(id)arg1 turnID:(id)arg2 ;
-(void)sessionService:(id)arg0 willChangeStateFrom:(NSInteger)arg1 to:(NSInteger)arg2 ;
-(void)sessionService:(id)arg0 willPresentFeedbackWithDialogIdentifier:(id)arg1 ;
-(void)sessionService:(id)arg0 willResignActiveWithOptions:(NSUInteger)arg1 duration:(CGFloat)arg2 ;
-(void)sessionService:(id)arg0 willStartSoundWithID:(NSInteger)arg1 ;


@end


#endif