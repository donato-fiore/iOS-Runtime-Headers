// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SVXCLIENTSERVICESERVERCONNECTION_H
#define SVXCLIENTSERVICESERVERCONNECTION_H

@class NSXPCConnection, AFInstanceInfo, NSMutableArray, NSString, NSUUID;
@protocol SVXClientService, SVXSessionActivationListening, SVXAudioPowerUpdateListening, SVXSessionActivityListening, SVXPerforming, SVXClientServiceServerConnectionDelegate;

#import <Foundation/Foundation.h>

#import "SVXDeviceSetupManager.h"
#import "SVXSessionManager.h"
#import "SVXSpeechSynthesizer.h"

@interface SVXClientServiceServerConnection : NSObject <SVXClientService, SVXSessionActivationListening, SVXAudioPowerUpdateListening, SVXSessionActivityListening>

 {
    NSXPCConnection *_xpcConnection;
    id<SVXPerforming> *_performer;
    id<SVXClientServiceServerConnectionDelegate> *_delegate;
    AFInstanceInfo *_instanceInfo;
    BOOL _isConfigured;
    NSMutableArray *_pendingBlocksAfterConfigure;
    SVXDeviceSetupManager *_deviceSetupManager;
    SVXSessionManager *_sessionManager;
    SVXSpeechSynthesizer *_speechSynthesizer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSUUID *uuid; // ivar: _uuid


-(id)_remoteServiceDelegateWithErrorHandler:(id)arg0 ;
-(id)initWithXPCConnection:(id)arg0 performer:(id)arg1 delegate:(id)arg2 ;
-(void)_cleanUpXPCConnection;
-(void)_connectionInterrupted;
-(void)_connectionInvalidated;
-(void)_getInstanceInfoWithCompletion:(id)arg0 ;
-(void)_performBlockAfterConfigure:(id)arg0 ;
-(void)_updateInstanceInfo:(id)arg0 ;
-(void)activateWithContext:(id)arg0 completion:(id)arg1 ;
-(void)audioPowerDidEndUpdateForType:(NSInteger)arg0 ;
-(void)audioPowerWillBeginUpdateForType:(NSInteger)arg0 wrapper:(id)arg1 ;
-(void)audioSessionDidBecomeActive:(BOOL)arg0 activationContext:(id)arg1 deactivationContext:(id)arg2 ;
-(void)audioSessionWillBecomeActive:(BOOL)arg0 activationContext:(id)arg1 deactivationContext:(id)arg2 ;
-(void)cancelPendingSpeechSynthesisRequest:(id)arg0 ;
-(void)configureWithDeviceSetupManager:(id)arg0 sessionManager:(id)arg1 speechSynthesizer:(id)arg2 ;
-(void)deactivateWithContext:(id)arg0 completion:(id)arg1 ;
-(void)enqueueSpeechSynthesisRequest:(id)arg0 completion:(id)arg1 ;
-(void)fetchAlarmAndTimerFiringContextWithCompletion:(id)arg0 ;
-(void)fetchAudioPowerWithType:(NSInteger)arg0 completion:(id)arg1 ;
-(void)fetchSessionActivityStateWithCompletion:(id)arg0 ;
-(void)fetchSessionStateWithCompletion:(id)arg0 ;
-(void)getInstanceInfoWithCompletion:(id)arg0 ;
-(void)invalidate;
-(void)performManualEndpointing;
-(void)pingWithReply:(id)arg0 ;
-(void)preheatWithActivationSource:(NSInteger)arg0 ;
-(void)prepareForDeviceSetupWithContext:(id)arg0 completion:(id)arg1 ;
-(void)prewarmRequest:(id)arg0 ;
-(void)prewarmWithContext:(id)arg0 completion:(id)arg1 ;
-(void)sessionDidBecomeActiveWithActivationContext:(id)arg0 turnID:(id)arg1 ;
-(void)sessionDidChangeFromState:(NSInteger)arg0 toState:(NSInteger)arg1 ;
-(void)sessionDidFailAppLaunchWithBundleIdentifier:(id)arg0 ;
-(void)sessionDidResignActiveWithDeactivationContext:(id)arg0 ;
-(void)sessionDidStartSoundWithID:(NSInteger)arg0 ;
-(void)sessionDidStopSoundWithID:(NSInteger)arg0 error:(id)arg1 ;
-(void)sessionManager:(id)arg0 didActivateWithContext:(id)arg1 ;
-(void)sessionManager:(id)arg0 didDeactivateWithContext:(id)arg1 ;
-(void)sessionManager:(id)arg0 didNotActivateWithContext:(id)arg1 error:(id)arg2 ;
-(void)sessionManager:(id)arg0 willActivateWithContext:(id)arg1 ;
-(void)sessionManager:(id)arg0 willDeactivateWithContext:(id)arg1 ;
-(void)sessionWillBecomeActiveWithActivationContext:(id)arg0 turnID:(id)arg1 ;
-(void)sessionWillChangeFromState:(NSInteger)arg0 toState:(NSInteger)arg1 ;
-(void)sessionWillPresentFeedbackWithDialogIdentifier:(id)arg0 ;
-(void)sessionWillProcessAppLaunchWithBundleIdentifier:(id)arg0 ;
-(void)sessionWillResignActiveWithOptions:(NSUInteger)arg0 duration:(CGFloat)arg1 ;
-(void)sessionWillStartSoundWithID:(NSInteger)arg0 ;
-(void)setDeviceSetupContext:(id)arg0 ;
-(void)stopSpeechSynthesisRequest:(id)arg0 ;
-(void)synthesizeRequest:(id)arg0 handlerUUID:(id)arg1 completion:(id)arg2 ;
-(void)transitToAutomaticEndpointingWithTimestamp:(NSUInteger)arg0 ;


@end


#endif