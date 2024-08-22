// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


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
-(void)addProns:(id)arg0 forWord:(id)arg1 completion:(id)arg2 ;
-(void)addSentenceToNgramCounts:(id)arg0 ;
-(void)addSentenceToNgramCounts:(id)arg0 completion:(id)arg1 ;
-(void)cancelSpeech;
-(void)configParametersForVoicemailWithLanguage:(id)arg0 completion:(id)arg1 ;
-(void)createNgramCountsArtifactFromPhraseCountArtifact:(id)arg0 writeToDirectory:(id)arg1 sandboxExtensions:(id)arg2 completion:(id)arg3 ;
-(void)createPhraseCountsArtifactWithIdentifier:(id)arg0 rawPhraseCountsPath:(id)arg1 customPronunciationsPath:(id)arg2 writeToDirectory:(id)arg3 sandboxExtensions:(id)arg4 completion:(id)arg5 ;
-(void)dealloc;
-(void)deserializeNgramCountsData:(id)arg0 completion:(id)arg1 ;
// -(void)downloadAssetsForLanguage:(id)arg0 urgent:(BOOL)arg1 forceUpgrade:(BOOL)arg2 detailedProgress:(id)arg3 completionHandler:(unk)arg4  ;
// -(void)downloadAssetsForLanguage:(id)arg0 urgent:(BOOL)arg1 forceUpgrade:(BOOL)arg2 progress:(id)arg3 completionHandler:(unk)arg4  ;
-(void)fetchAssetsForLanguage:(id)arg0 completion:(id)arg1 ;
-(void)generateNgramCountsSerializeDataWithCompletion:(id)arg0 ;
-(void)initializeLmWithAssetPath:(id)arg0 completion:(id)arg1 ;
-(void)initializeLmWithLocale:(id)arg0 completion:(id)arg1 ;
-(void)initializeWithSandboxExtensions:(id)arg0 ;
-(void)installedLanguagesWithSynchronousConnection:(BOOL)arg0 completion:(id)arg1 ;
-(void)invalidate;
-(void)lmeThresholdWithCompletion:(id)arg0 ;
-(void)localSpeechRecognitionDidDownloadAssetsWithProgress:(NSUInteger)arg0 isStalled:(BOOL)arg1 ;
-(void)localSpeechRecognitionDidFail:(id)arg0 ;
-(void)localSpeechRecognitionDidFinishDownloadingAssets:(id)arg0 error:(id)arg1 ;
-(void)localSpeechRecognitionDidFinishRecognition:(id)arg0 ;
-(void)localSpeechRecognitionDidProcessAudioDuration:(CGFloat)arg0 ;
-(void)localSpeechRecognitionDidRecognizePartialResult:(id)arg0 rawPartialResult:(id)arg1 ;
-(void)localSpeechRecognitionDidSucceed;
-(void)metricsWithCompletion:(id)arg0 ;
-(void)oovWordsAndFrequenciesWithCompletion:(id)arg0 ;
-(void)preloadRecognizerForLanguage:(id)arg0 task:(id)arg1 recognitionOverrides:(id)arg2 modelOverrideURL:(id)arg3 completion:(id)arg4 ;
-(void)promoteAssets;
-(void)purgeAssetsForLanguage:(id)arg0 completion:(id)arg1 ;
-(void)setAssetsAsProvisional;
-(void)startRecordedAudioDictationWithParameters:(id)arg0 ;
-(void)stopSpeech;
-(void)trainAppLmFromNgramCountsArtifact:(id)arg0 language:(id)arg1 writeToDirectory:(id)arg2 sandboxExtensions:(id)arg3 completion:(id)arg4 ;
-(void)trainAppLmFromNgramsSerializedData:(id)arg0 customPronsData:(id)arg1 language:(id)arg2 writeToDirectory:(id)arg3 sandboxExtension:(id)arg4 completion:(id)arg5 ;
-(void)trainFromPlainTextAndWriteToDirectory:(id)arg0 sandboxExtension:(id)arg1 completion:(id)arg2 ;
-(void)wakeUpWithCompletion:(id)arg0 ;


@end


#endif