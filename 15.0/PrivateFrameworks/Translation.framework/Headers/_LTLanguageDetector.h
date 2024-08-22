// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _LTLANGUAGEDETECTOR_H
#define _LTLANGUAGEDETECTOR_H

@class CSLanguageDetector, NSMutableDictionary, NSMutableArray, NSString;
@protocol CSLanguageDetectorDelegate, OS_dispatch_queue, _LTSpeechTranslationDelegate;

#import <Foundation/Foundation.h>

#import "_LTTranslationContext.h"
#import "_LTLanguageDetectorFeatureCombinationModel.h"
#import "_LTLanguageDetectionResult.h"

@interface _LTLanguageDetector : NSObject <CSLanguageDetectorDelegate>

 {
    _LTTranslationContext *_context;
    CSLanguageDetector *_csLanguageDetector;
    float _sourceLocaleConfidenceThreshold;
    float _targetLocaleConfidenceThreshold;
    NSUInteger _minimumAcousticLanguageDetectorResults;
    NSUInteger _maximumAcousticLanguageDetectorResults;
    BOOL _endAudioCalled;
    BOOL _useFinalThresholds;
    BOOL _finalLIDResultSent;
    BOOL _receivedPartialSpeechResult;
    BOOL _havePartialASRConfidences;
    NSMutableDictionary *_partialSpeechResultConfidences;
    NSMutableDictionary *_finalSpeechResults;
    NSMutableDictionary *_modelVersions;
    NSUInteger _lidSignpostID;
    NSObject<OS_dispatch_queue> *_resultQueue;
    NSObject<OS_dispatch_queue> *_finalResultWaitQueue;
    id<_LTSpeechTranslationDelegate> *_delegate;
}


@property (retain, nonatomic) NSMutableArray *acousticResults; // ivar: _acousticResults
@property (readonly, nonatomic) NSInteger audioBitDepth; // ivar: _audioBitDepth
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _LTLanguageDetectorFeatureCombinationModel *featureCombinationModel; // ivar: _featureCombinationModel
@property (nonatomic) BOOL featureCombinationModelSupported; // ivar: _featureCombinationModelSupported
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _LTLanguageDetectionResult *lastResult; // ivar: _lastResult
@property (readonly, nonatomic) CGFloat samplingRate; // ivar: _samplingRate
@property (readonly) Class superclass;


-(BOOL)forceLanguageDetectionResult;
-(BOOL)haveAtLeastOneFinalASRResult;
-(BOOL)haveFinalASRResults;
-(id)init;
-(void)addSpeechAudioData:(id)arg0 ;
-(void)addSpeechRecognitionResult:(id)arg0 ;
-(void)cancelLanguageDetection;
-(void)endAudio;
-(void)languageDetectorDidDetectLanguageWithConfidence:(id)arg0 confidence:(id)arg1 isConfident:(BOOL)arg2 ;
-(void)sendFinalLanguageDetectionResult:(BOOL)arg0 ;
-(void)sendLIDResult:(id)arg0 ;
-(void)startLanguageDetectionWithContext:(id)arg0 delegate:(id)arg1 ;


@end


#endif