// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSSPEECHXPCHANDLER_H
#define VSSPEECHXPCHANDLER_H

@class NSXPCConnection, AFAudioPowerUpdater, NSString;
@protocol VSSpeechXPCServiceProtocol, VSSpeechServiceDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "VSHMHomeManager.h"
#import "VSHHManagementClient.h"

@interface VSSpeechXPCHandler : NSObject <VSSpeechXPCServiceProtocol, VSSpeechServiceDelegate>

 {
    NSXPCConnection *_connection;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *audioPowerUpdateQueue; // ivar: _audioPowerUpdateQueue
@property (retain, nonatomic) AFAudioPowerUpdater *audioPowerUpdater; // ivar: _audioPowerUpdater
@property (retain, nonatomic) NSString *connectionIdentifier; // ivar: _connectionIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) VSHMHomeManager *homeManager; // ivar: _homeManager
@property (retain, nonatomic) VSHHManagementClient *hubManagementClient; // ivar: _hubManagementClient
@property (readonly) Class superclass;


+(BOOL)isSiriClientBundleIdentifier:(id)arg0 ;
-(BOOL)isSpeaking;
-(id)_delegate;
-(id)initWithConnection:(id)arg0 ;
-(void)audioRequest:(id)arg0 didReportInstrumentMetrics:(id)arg1 error:(id)arg2 ;
-(void)audioRequest:(id)arg0 didStopAtEnd:(BOOL)arg1 error:(id)arg2 ;
-(void)audioRequestDidStart:(id)arg0 ;
-(void)beginAudioPowerUpdateWithReply:(id)arg0 ;
-(void)cachePresynthesizedAudioRequest:(id)arg0 ;
-(void)cleanUnusedAssets:(id)arg0 ;
-(void)continueSpeechRequest:(id)arg0 ;
-(void)dealloc;
-(void)endAudioPowerUpdate;
-(void)estimateDurationWithRequest:(id)arg0 reply:(id)arg1 ;
-(void)forwardStreamObject:(id)arg0 ;
-(void)getAllVoiceSubscriptionsWithReply:(id)arg0 ;
-(void)getFootprintsForVoiceName:(id)arg0 languageCode:(id)arg1 reply:(id)arg2 ;
-(void)getLocalVoiceResourcesReply:(id)arg0 ;
-(void)getLocalVoicesForLanguage:(id)arg0 reply:(id)arg1 ;
-(void)getSpeechIsActiveForConnectionReply:(id)arg0 ;
-(void)getSpeechIsActiveReply:(id)arg0 ;
-(void)getSubscribedVoiceAssetsWithClientID:(id)arg0 forAccessoryID:(id)arg1 reply:(id)arg2 ;
-(void)getVoiceInfoForLanguageCode:(id)arg0 name:(id)arg1 footprint:(NSInteger)arg2 gender:(NSInteger)arg3 type:(NSInteger)arg4 reply:(id)arg5 ;
-(void)getVoiceNamesForLanguage:(id)arg0 reply:(id)arg1 ;
-(void)getVoiceResourceForLanguage:(id)arg0 reply:(id)arg1 ;
-(void)invalidate;
-(void)invokeDaemon:(id)arg0 ;
-(void)killDaemon;
-(void)pauseSpeechRequest:(id)arg0 atMark:(NSInteger)arg1 ;
-(void)performLanguageFallBackIfNeededWithRequest:(id)arg0 ;
-(void)preprocessRequestBeforeSynthesis:(id)arg0 ;
-(void)previewRequestDidStartPlaying:(id)arg0 ;
-(void)prewarmIfNeededWithRequest:(id)arg0 reply:(id)arg1 ;
-(void)queryPhaticCapabilityWithRequest:(id)arg0 reply:(id)arg1 ;
-(void)setSubscribedVoiceAssets:(id)arg0 withClientID:(id)arg1 forAccessoryID:(id)arg2 ;
-(void)speechRequest:(id)arg0 didReceiveTimingInfo:(id)arg1 ;
-(void)speechRequest:(id)arg0 didReportInstrumentMetrics:(id)arg1 ;
-(void)speechRequest:(id)arg0 didStartWithMark:(NSInteger)arg1 forRange:(struct _NSRange )arg2 ;
-(void)speechRequest:(id)arg0 didStopWithSuccess:(BOOL)arg1 phonemesSpoken:(id)arg2 error:(id)arg3 ;
-(void)speechRequestDidContinue:(id)arg0 ;
-(void)speechRequestDidPause:(id)arg0 ;
-(void)speechRequestDidStart:(id)arg0 ;
-(void)startPhonemesRequest:(id)arg0 phonemeSystem:(NSInteger)arg1 reply:(id)arg2 ;
-(void)startPresynthesizedAudioRequest:(id)arg0 ;
-(void)startSpeechRequest:(id)arg0 reply:(id)arg1 ;
-(void)startSynthesisRequest:(id)arg0 ;
-(void)startVoicePreviewRequest:(id)arg0 reply:(id)arg1 ;
-(void)stopPresynthesizedAudioRequest:(id)arg0 ;
-(void)stopSpeechRequest:(id)arg0 atMark:(NSInteger)arg1 ;
-(void)stopVoicePreview;
-(void)synthesisRequest:(id)arg0 didFinishWithInstrumentMetrics:(id)arg1 error:(id)arg2 ;
-(void)synthesisRequest:(id)arg0 didGenerateAudioChunk:(id)arg1 ;
-(void)synthesisRequest:(id)arg0 didReceiveTimingInfo:(id)arg1 ;
-(void)triggerCellularDownloadedVoiceAssets:(id)arg0 withClientID:(id)arg1 ;
-(void)updateWithConnectionIdentifier:(id)arg0 ;


@end


#endif