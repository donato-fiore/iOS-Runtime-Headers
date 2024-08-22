// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFLOCALSPEECHRECOGNITIONCLIENT_H
#define SFLOCALSPEECHRECOGNITIONCLIENT_H

@class NSXPCConnection, NSString;
@protocol SFLSRDelegate, SFLocalSpeechRecognitionDelegate;

#import <Foundation/Foundation.h>


@interface SFLocalSpeechRecognitionClient : NSObject <SFLSRDelegate>

 {
    NSXPCConnection *_lsrConnection;
    id *_downloadProgress;
    id *_downloadCompletion;
    BOOL _recognitionActive;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<SFLocalSpeechRecognitionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)initialize;
+(void)logCoreAnalyticsEvent:(id)arg0 withAnalytics:(id)arg1 ;
-(id)_asynchronousServiceProxyWithErrorHandler:(id)arg0 ;
-(id)_serviceProxyWithErrorHandler:(id)arg0 ;
-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(void)addAudioPacket:(id)arg0 ;
-(void)cancelSpeech;
-(void)configParametersForVoicemailWithLanguage:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
// -(void)downloadAssetsForLanguage:(id)arg0 urgent:(BOOL)arg1 forceUpgrade:(BOOL)arg2 detailedProgress:(id)arg3 completionHandler:(unk)arg4  ;
// -(void)downloadAssetsForLanguage:(id)arg0 urgent:(BOOL)arg1 forceUpgrade:(BOOL)arg2 progress:(id)arg3 completionHandler:(unk)arg4  ;
-(void)fetchAssetsForLanguage:(id)arg0 completion:(id)arg1 ;
-(void)initializeWithSandboxExtensions:(id)arg0 ;
-(void)installedLanguagesWithSynchronousConnection:(BOOL)arg0 completion:(id)arg1 ;
-(void)invalidate;
-(void)localSpeechRecognitionDidDownloadAssetsWithProgress:(NSUInteger)arg0 isStalled:(BOOL)arg1 ;
-(void)localSpeechRecognitionDidFail:(id)arg0 ;
-(void)localSpeechRecognitionDidFinishDownloadingAssets:(id)arg0 error:(id)arg1 ;
-(void)localSpeechRecognitionDidFinishRecognition:(id)arg0 ;
-(void)localSpeechRecognitionDidProcessAudioDuration:(CGFloat)arg0 ;
-(void)localSpeechRecognitionDidRecognizePartialResult:(id)arg0 rawPartialResult:(id)arg1 ;
-(void)localSpeechRecognitionDidSucceed;
-(void)promoteAssets;
-(void)purgeAssetsForLanguage:(id)arg0 completion:(id)arg1 ;
-(void)setAssetsAsProvisional;
-(void)startRecordedAudioDictationWithParameters:(id)arg0 ;
-(void)stopSpeech;


@end


#endif