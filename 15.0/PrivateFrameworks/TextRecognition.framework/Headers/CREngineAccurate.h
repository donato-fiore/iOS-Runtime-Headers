// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRENGINEACCURATE_H
#define CRENGINEACCURATE_H

@class NSString, NSDictionary;
@protocol CREngine;

#import <Foundation/Foundation.h>

#import "CRPerformanceStatistics.h"
#import "CRNeuralTextDetector.h"
#import "CRMultiModelTextRecognizer.h"

@interface CREngineAccurate : NSObject <CREngine>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) CRPerformanceStatistics *detectorInferenceStats;
@property (readonly) CRPerformanceStatistics *detectorStats;
@property (readonly) NSUInteger hash;
@property (retain) CRNeuralTextDetector *ocrDetector; // ivar: _ocrDetector
@property (retain) CRMultiModelTextRecognizer *ocrRecognizer; // ivar: _ocrRecognizer
@property (retain) NSDictionary *options; // ivar: _options
@property (readonly) CRPerformanceStatistics *postProcStats;
@property (readonly) CRPerformanceStatistics *recognizerDecodingStats;
@property (readonly) CRPerformanceStatistics *recognizerInferenceStats;
@property (retain) CRPerformanceStatistics *recognizerStats; // ivar: _recognizerStats
@property NSUInteger revision; // ivar: _revision
@property BOOL shouldCancel; // ivar: _shouldCancel
@property (readonly) Class superclass;
@property (readonly) CRPerformanceStatistics *textGroupingStats;


+(BOOL)preheatModelsForOptions:(id)arg0 revision:(NSInteger)arg1 error:(*id)arg2 ;
+(CGFloat)_normalizeScoreForFeature:(id)arg0 ;
+(id)supportedLanguagesForRevision:(NSInteger)arg0 error:(*id)arg1 ;
+(struct CGSize )detectorImageSizeForOptions:(id)arg0 imageSize:(struct CGSize )arg1 ;
-(NSUInteger)subfeatureOutputType;
-(id)_titleTextFeatureFromFeatures:(id)arg0 imageWidth:(NSUInteger)arg1 imageHeight:(NSUInteger)arg2 ;
-(id)initWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)textDetectorResultsForImage:(id)arg0 error:(*id)arg1 ;
// -(id)textRecognizerResultsForTextFeatures:(id)arg0 image:(id)arg1 progressHandler:(id)arg2 error:(unk)arg3  ;
// -(id)textResultsInImage:(id)arg0 options:(id)arg1 withProgressHandler:(id)arg2 error:(unk)arg3  ;
-(id)thresholdsForTextFeature:(id)arg0 ;
-(struct CGSize )smallestImageSizeForTextWithRelativeHeight:(CGFloat)arg0 originalImageSize:(struct CGSize )arg1 ;
-(void)cancel;


@end


#endif