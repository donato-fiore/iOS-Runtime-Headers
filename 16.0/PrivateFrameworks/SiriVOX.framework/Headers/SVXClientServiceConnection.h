// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SVXCLIENTSERVICECONNECTION_H
#define SVXCLIENTSERVICECONNECTION_H

@class NSXPCConnection, NSString, AFInstanceContext;
@protocol SVXClientService, SVXClientServiceDelegate, SVXClientServiceProviding, SVXClientServiceConnectionDelegate, SVXClientActivationServicing, SVXClientAudioSystemServicing, SVXClientDeviceServicing, SVXClientAudioPowerServicing, SVXClientKeepAliveServicing, SVXPerforming, SVXClientSessionServicing, SVXClientSpeechSynthesisServicing;

#import <Foundation/Foundation.h>

#import "SVXQueuePerformer.h"
#import "SVXClientSessionService.h"
#import "SVXClientActivationService.h"
#import "SVXClientAudioPowerService.h"
#import "SVXClientSpeechSynthesisService.h"
#import "SVXClientDeviceService.h"
#import "SVXClientAudioSystemService.h"
#import "SVXClientKeepAliveService.h"

@interface SVXClientServiceConnection : NSObject <SVXClientService, SVXClientServiceDelegate, SVXClientServiceProviding>

 {
    SVXQueuePerformer *_queuePerformer;
    id<SVXClientServiceConnectionDelegate> *_delegate;
    BOOL _isInvalid;
    SVXClientSessionService *_sessionService;
    SVXClientActivationService *_activationService;
    SVXClientAudioPowerService *_inputAudioPowerService;
    SVXClientAudioPowerService *_outputAudioPowerService;
    SVXClientSpeechSynthesisService *_speechSynthesisService;
    SVXClientDeviceService *_deviceService;
    SVXClientAudioSystemService *_audioSystemService;
    SVXClientKeepAliveService *_keepAliveService;
    NSXPCConnection *_connection;
}


@property (readonly, nonatomic) NSObject<SVXClientActivationServicing> *activationService;
@property (readonly, nonatomic) NSObject<SVXClientAudioSystemServicing> *audioSystemService;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<SVXClientDeviceServicing> *deviceService;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SVXClientAudioPowerServicing> *inputAudioPowerService;
@property (readonly, nonatomic) AFInstanceContext *instanceContext; // ivar: _instanceContext
@property (readonly, nonatomic) NSObject<SVXClientKeepAliveServicing> *keepAliveService;
@property (readonly, nonatomic) NSObject<SVXClientAudioPowerServicing> *outputAudioPowerService;
@property (readonly, nonatomic) NSObject<SVXPerforming> *performer;
@property (readonly, nonatomic) NSObject<SVXClientSessionServicing> *sessionService;
@property (readonly, nonatomic) NSObject<SVXClientSpeechSynthesisServicing> *speechSynthesisService;
@property (readonly) Class superclass;


-(id)_clientServiceWithErrorHandler:(id)arg0 ;
-(id)_connection;
-(id)initWithComponents:(NSUInteger)arg0 delegate:(id)arg1 ;
-(id)initWithComponents:(NSUInteger)arg0 instanceContext:(id)arg1 delegate:(id)arg2 ;
-(id)initWithQueuePerformer:(id)arg0 activationService:(id)arg1 audioSystemService:(id)arg2 deviceService:(id)arg3 inputAudioPowerService:(id)arg4 outputAudioPowerService:(id)arg5 sessionService:(id)arg6 speechSynthesisService:(id)arg7 keepAliveService:(id)arg8 instanceContext:(id)arg9 delegate:(id)arg10 ;
-(void)_cleanUpComponents;
-(void)_cleanUpConnection;
-(void)_clientServiceDidChange:(BOOL)arg0 ;
-(void)_invalidate;
-(void)activateWithContext:(id)arg0 completion:(id)arg1 ;
-(void)cancelPendingSpeechSynthesisRequest:(id)arg0 ;
-(void)connectionInterrupted;
-(void)connectionInvalidated;
-(void)deactivateWithContext:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)enqueueSpeechSynthesisRequest:(id)arg0 completion:(id)arg1 ;
-(void)fetchAlarmAndTimerFiringContextWithCompletion:(id)arg0 ;
-(void)fetchAudioPowerWithType:(NSInteger)arg0 completion:(id)arg1 ;
-(void)fetchSessionActivityStateWithCompletion:(id)arg0 ;
-(void)fetchSessionStateWithCompletion:(id)arg0 ;
// -(void)getClientServiceUsingBlock:(id)arg0 errorHandler:(unk)arg1  ;
-(void)getInstanceInfoWithCompletion:(id)arg0 ;
-(void)handleSpeechSynthesisSynthesizedBufferForHandlerUUID:(id)arg0 audioChunkData:(id)arg1 audioChunkIndex:(NSUInteger)arg2 reply:(id)arg3 ;
-(void)invalidate;
-(void)notifyAudioSessionDidBecomeActive:(BOOL)arg0 activationContext:(id)arg1 deactivationContext:(id)arg2 ;
-(void)notifyAudioSessionWillBecomeActive:(BOOL)arg0 activationContext:(id)arg1 deactivationContext:(id)arg2 ;
-(void)notifyDidActivateWithContext:(id)arg0 ;
-(void)notifyDidChangeSessionStateFrom:(NSInteger)arg0 to:(NSInteger)arg1 ;
-(void)notifyDidDeactivateWithContext:(id)arg0 ;
-(void)notifyDidEndUpdateAudioPowerWithType:(NSInteger)arg0 ;
-(void)notifyDidNotActivateWithContext:(id)arg0 error:(id)arg1 ;
-(void)notifySessionDidBecomeActiveWithActivationContext:(id)arg0 turnID:(id)arg1 ;
-(void)notifySessionDidResignActiveWithDeactivationContext:(id)arg0 ;
-(void)notifySessionDidStartSoundWithID:(NSInteger)arg0 ;
-(void)notifySessionDidStopSoundWithID:(NSInteger)arg0 error:(id)arg1 ;
-(void)notifySessionWillBecomeActiveWithActivationContext:(id)arg0 turnID:(id)arg1 ;
-(void)notifySessionWillPresentFeedbackWithDialogIdentifier:(id)arg0 ;
-(void)notifySessionWillResignActiveWithOptions:(NSUInteger)arg0 duration:(CGFloat)arg1 ;
-(void)notifySessionWillStartSoundWithID:(NSInteger)arg0 ;
-(void)notifyWillActivateWithContext:(id)arg0 ;
-(void)notifyWillBeginUpdateAudioPowerWithType:(NSInteger)arg0 wrapper:(id)arg1 ;
-(void)notifyWillChangeSessionStateFrom:(NSInteger)arg0 to:(NSInteger)arg1 ;
-(void)notifyWillDeactivateWithContext:(id)arg0 ;
-(void)performManualEndpointing;
-(void)pingWithReply:(id)arg0 ;
-(void)preheatWithActivationSource:(NSInteger)arg0 ;
-(void)prepareForDeviceSetupWithContext:(id)arg0 completion:(id)arg1 ;
-(void)prewarmRequest:(id)arg0 ;
-(void)prewarmWithContext:(id)arg0 completion:(id)arg1 ;
-(void)requestPermissionToActivateWithContext:(id)arg0 completion:(id)arg1 ;
-(void)setDeviceSetupContext:(id)arg0 ;
-(void)stopSpeechSynthesisRequest:(id)arg0 ;
-(void)synthesizeRequest:(id)arg0 handlerUUID:(id)arg1 completion:(id)arg2 ;
-(void)transitToAutomaticEndpointing;


@end


#endif