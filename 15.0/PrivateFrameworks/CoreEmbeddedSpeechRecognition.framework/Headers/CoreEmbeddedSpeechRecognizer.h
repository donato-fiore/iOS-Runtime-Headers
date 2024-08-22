// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COREEMBEDDEDSPEECHRECOGNIZER_H
#define COREEMBEDDEDSPEECHRECOGNIZER_H

@class NSXPCConnection, NSString, NSError, NSData;
@protocol CESRSpeechServiceDelegate, CoreEmbeddedSpeechRecognizerProvider, OS_dispatch_queue, CoreEmbeddedSpeechRecognizerDelegate;

#import <Foundation/Foundation.h>


@interface CoreEmbeddedSpeechRecognizer : NSObject <CESRSpeechServiceDelegate, CoreEmbeddedSpeechRecognizerProvider>

 {
    BOOL _recognitionActive;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_esConnection;
    BOOL _hasRecognizedAnything;
    unsigned char _instanceUUID;
    NSString *_currentLanguage;
    NSError *_recognitionError;
    NSString *_preheatedProfileAssetPath;
    NSData *_preheatedProfile;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<CoreEmbeddedSpeechRecognizerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)purgeInstalledAssetsExceptLanguages:(id)arg0 assetType:(NSUInteger)arg1 error:(*id)arg2 ;
+(id)dictionaryWithContentsProfilePathForLanguage:(id)arg0 errorOut:(*id)arg1 ;
+(id)installedAssetSizeWithError:(*id)arg0 ;
+(id)offlineDictationStatusIgnoringCache:(BOOL)arg0 error:(*id)arg1 ;
+(id)profilePathForLanguage:(id)arg0 errorOut:(*id)arg1 ;
+(id)purgeInstalledAssetsExceptLanguages:(id)arg0 error:(*id)arg1 ;
+(id)speechProfileDataLastModifiedDataForLanguage:(id)arg0 ;
+(void)resetCacheAndCompileAllAssets;
+(void)setAssetsPurgeabilityExceptLanguages:(id)arg0 assetType:(NSUInteger)arg1 ;
-(*unsigned char)instanceUUID;
-(id)_connection;
-(id)_newConnection;
-(id)_service;
-(id)_serviceWithFunctionName:(id)arg0 errorHandler:(id)arg1 ;
-(id)_synchronousServiceWithErrorHandler:(id)arg0 ;
-(id)init;
-(id)initWithDelegate:(id)arg0 instanceUUID:(unsigned char)arg1 ;
-(id)modelPropertiesForAssetConfig:(id)arg0 error:(*id)arg1 ;
-(void)addAudioPacket:(id)arg0 ;
-(void)createSpeechProfileWithLanguage:(id)arg0 modelOverridePath:(id)arg1 JSONData:(id)arg2 completion:(id)arg3 ;
-(void)dealloc;
-(void)deleteAllDESRecordsForDictationPersonalization;
-(void)fetchAssetsForAssetConfig:(id)arg0 completion:(id)arg1 ;
-(void)fetchAssetsForLanguage:(id)arg0 completion:(id)arg1 ;
-(void)fetchUserDataForLanguage:(id)arg0 completion:(id)arg1 ;
-(void)finishAudio;
-(void)getOfflineAssetStatusIgnoringCache:(BOOL)arg0 assetType:(NSUInteger)arg1 withCompletion:(id)arg2 ;
-(void)getOfflineAssetStatusIgnoringCache:(BOOL)arg0 assetType:(NSUInteger)arg1 withDetailedStatus:(BOOL)arg2 withCompletion:(id)arg3 ;
-(void)getOfflineDictationStatusIgnoringCache:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)getOfflineDictationStatusWithCompletion:(id)arg0 ;
-(void)invalidate;
-(void)invalidatePersonalizedLM;
-(void)invalidateUaapLM;
-(void)preheatSpeechRecognitionWithAssetConfig:(id)arg0 modelOverrideURL:(id)arg1 ;
-(void)preheatSpeechRecognitionWithLanguage:(id)arg0 modelOverrideURL:(id)arg1 ;
-(void)readProfileAndUserDataWithLanguage:(id)arg0 allowOverride:(BOOL)arg1 completion:(id)arg2 ;
-(void)removePersonalizedLMForFidesOnly:(BOOL)arg0 ;
-(void)resetDESWithCompletion:(id)arg0 ;
-(void)runAdaptationRecipeEvaluation:(id)arg0 recordData:(id)arg1 attachments:(id)arg2 completion:(id)arg3 ;
-(void)runCorrectedTextEvaluationWithAudioDatas:(id)arg0 recordDatas:(id)arg1 language:(id)arg2 samplingRate:(NSUInteger)arg3 caseSensitive:(BOOL)arg4 skipLME:(BOOL)arg5 wordSenseAccessListSet:(id)arg6 completion:(id)arg7 ;
-(void)runEvaluationWithDESRecordDatas:(id)arg0 language:(id)arg1 recipe:(id)arg2 attachments:(id)arg3 fidesPersonalizedLMPath:(id)arg4 fidesPersonalizedLMTrainingAsset:(id)arg5 scrubResult:(BOOL)arg6 completion:(id)arg7 ;
-(void)runEvaluationWithDESRecordDatas:(id)arg0 language:(id)arg1 recipe:(id)arg2 fidesPersonalizedLMPath:(id)arg3 fidesPersonalizedLMTrainingAsset:(id)arg4 scrubResult:(BOOL)arg5 completion:(id)arg6 ;
-(void)sendSpeechCorrectionInfo:(id)arg0 interactionIdentifier:(id)arg1 ;
-(void)speechServiceDidFinishRecognitionWithStatistics:(id)arg0 error:(id)arg1 ;
-(void)speechServiceDidProcessAudioDuration:(CGFloat)arg0 ;
-(void)speechServiceDidProduceEndpointFeaturesWithWordCount:(NSInteger)arg0 trailingSilenceDuration:(NSInteger)arg1 eosLikelihood:(CGFloat)arg2 pauseCounts:(id)arg3 silencePosterior:(CGFloat)arg4 processedAudioDurationInMilliseconds:(NSInteger)arg5 ;
-(void)speechServiceDidProduceLoggablePackage:(id)arg0 ;
-(void)speechServiceDidRecognizePackage:(id)arg0 ;
-(void)speechServiceDidRecognizeRawEagerRecognitionCandidate:(id)arg0 ;
-(void)speechServiceDidRecognizeTokens:(id)arg0 ;
-(void)speechServiceDidSelectRecognitionModelWithModelProperties:(id)arg0 ;
-(void)startMissingAssetDownload;
-(void)startSpeechRecognitionWithParameters:(id)arg0 didStartHandler:(id)arg1 ;
-(void)startSpeechRecognitionWithParameters:(id)arg0 didStartHandlerWithInfo:(id)arg1 ;
-(void)updateSpeechProfileWithLanguage:(id)arg0 modelOverridePath:(id)arg1 completion:(id)arg2 ;
-(void)writeDESRecord;


@end


#endif