// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSSPEECHCONNECTION_H
#define VSSPEECHCONNECTION_H

@class NSString, NSXPCConnection;
@protocol VSSpeechConnectionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "VSSpeechConnectionDelegateWrapper.h"

@interface VSSpeechConnection : NSObject

@property (weak, nonatomic) NSObject<VSSpeechConnectionDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) VSSpeechConnectionDelegateWrapper *delegateWrapper; // ivar: _delegateWrapper
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *threadSafeQueue; // ivar: _threadSafeQueue
@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


-(BOOL)isSystemSpeaking;
-(BOOL)isSystemSpeakingOnBehalfOfCurrentConnection;
-(BOOL)queryPhaticCapabilityWithRequest:(id)arg0 ;
-(id)_remoteObject;
-(id)_remoteObjectSync;
-(id)_remoteObjectWithErrorHandler:(id)arg0 ;
-(id)availableFootprintsForVoice:(id)arg0 languageCode:(id)arg1 ;
-(id)availableVoicesForLanguageCode:(id)arg0 ;
-(id)currentAudioRequest;
-(id)currentRequest;
-(id)init;
-(void)_connectionInvalidated;
-(void)beginAudioPowerUpdateWithReply:(id)arg0 ;
-(void)cachePresynthesizedAudioRequest:(id)arg0 ;
-(void)cleanUnusedAssets:(id)arg0 ;
-(void)continueSpeechRequest:(id)arg0 ;
-(void)dealloc;
-(void)endAudioPowerUpdate;
-(void)estimateDurationWithRequest:(id)arg0 reply:(id)arg1 ;
-(void)forwardStreamObject:(id)arg0 ;
-(void)getAllVoiceSubscriptionsWithReply:(id)arg0 ;
-(void)getLocalVoiceAssetsForLanguage:(id)arg0 reply:(id)arg1 ;
-(void)getLocalVoiceResources:(id)arg0 ;
-(void)getSubscribedVoiceAssetsWithClientID:(id)arg0 forAccessoryID:(id)arg1 reply:(id)arg2 ;
-(void)getVoiceInfoForLanguageCode:(id)arg0 name:(id)arg1 footprint:(NSInteger)arg2 gender:(NSInteger)arg3 type:(NSInteger)arg4 reply:(id)arg5 ;
-(void)getVoiceResourceForLanguage:(id)arg0 reply:(id)arg1 ;
-(void)invokeDaemon:(id)arg0 ;
-(void)killDaemon;
-(void)pauseSpeechRequest:(id)arg0 atMark:(NSInteger)arg1 ;
-(void)prewarmIfNeededWithRequest:(id)arg0 reply:(id)arg1 ;
-(void)setSubscribedVoiceAssets:(id)arg0 withClientID:(id)arg1 forAccessoryID:(id)arg2 ;
-(void)startPhonemesRequest:(id)arg0 phonemeSystem:(NSInteger)arg1 reply:(id)arg2 ;
-(void)startPresynthesizedAudioRequest:(id)arg0 ;
-(void)startSpeechRequest:(id)arg0 ;
-(void)startSynthesisRequest:(id)arg0 ;
-(void)startVoicePreviewRequest:(id)arg0 reply:(id)arg1 ;
-(void)stopPresynthesizedAudioRequest:(id)arg0 ;
-(void)stopSpeechRequest:(id)arg0 atMark:(NSInteger)arg1 ;
-(void)stopVoicePreview;
-(void)triggerCellularDownloadedVoiceAssets:(id)arg0 withClientID:(id)arg1 ;
-(void)updateWithConnectionIdentifier:(id)arg0 ;


@end


#endif