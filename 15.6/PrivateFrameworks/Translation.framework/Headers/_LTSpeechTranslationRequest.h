// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _LTSPEECHTRANSLATIONREQUEST_H
#define _LTSPEECHTRANSLATIONREQUEST_H

@class LTTranslationRequest, AVAudioConverter, NSMutableArray, NSURL, NSArray, NSString;
@protocol _LTSpeechTranslationDelegate, OS_dispatch_queue, _LTTranslationService;



@interface _LTSpeechTranslationRequest : LTTranslationRequest <_LTSpeechTranslationDelegate>

 {
    AVAudioConverter *_converter;
    NSMutableArray *_queuedBuffers;
    NSObject<OS_dispatch_queue> *_queue;
    id<_LTTranslationService> *_service;
    id *_done;
}


@property (nonatomic) NSInteger _asrConfidenceThreshold; // ivar: __asrConfidenceThreshold
@property (retain, nonatomic) NSURL *_lidModelURL; // ivar: __lidModelURL
@property (nonatomic) NSInteger _lidThreshold; // ivar: __lidThreshold
@property (retain, nonatomic) NSArray *_offlineASRModelURLs; // ivar: __offlineASRModelURLs
@property (nonatomic) BOOL autoEndpoint; // ivar: _autoEndpoint
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_LTSpeechTranslationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enableVAD; // ivar: _enableVAD
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)initialize;
-(id)initWithLocalePair:(id)arg0 ;
-(id)initWithSourceLocale:(id)arg0 targetLocale:(id)arg1 ;
-(id)loggingType;
-(id)nativeAudioFormat;
-(id)requestContext;
-(void)_appendAudioPCMBuffer:(id)arg0 ;
-(void)_appendAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 simulateRealtime:(BOOL)arg1 ;
-(void)_convertAndFeedPCMBuffer:(id)arg0 ;
-(void)_drainAndClearAudioConverter;
-(void)_simulateRealtimeBehavior:(id)arg0 ;
-(void)_startTranslationWithService:(id)arg0 done:(id)arg1 ;
-(void)_translationFailedWithError:(id)arg0 ;
-(void)append:(struct opaqueCMSampleBuffer *)arg0 simulateRealtime:(BOOL)arg1 ;
-(void)appendAudioPCMBuffer:(id)arg0 ;
-(void)endAudio;
-(void)hybridEndpointerFoundEndpoint;
-(void)languageDetectionCompleted;
-(void)languageDetectionResult:(id)arg0 ;
-(void)serverEndpointerFeatures:(id)arg0 locale:(id)arg1 ;
-(void)speechActivityDetected;
-(void)speechRecognitionResult:(id)arg0 ;
-(void)translationDidFinishWithError:(id)arg0 ;
-(void)translatorDidTranslate:(id)arg0 ;


@end


#endif