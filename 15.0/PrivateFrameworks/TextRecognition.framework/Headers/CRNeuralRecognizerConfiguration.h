// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRNEURALRECOGNIZERCONFIGURATION_H
#define CRNEURALRECOGNIZERCONFIGURATION_H

@class NSNumber, NSURL, NSArray, NSString;


#import "CRRecognizerConfiguration.h"
#import "CRConfidenceThresholds.h"
#import "CRLMFilteringThresholds.h"
#import "CRTitleParameters.h"

@interface CRNeuralRecognizerConfiguration : CRRecognizerConfiguration

@property (readonly) NSInteger batchSize; // ivar: _batchSize
@property (readonly) NSNumber *characterLMWeight; // ivar: _characterLMWeight
@property (readonly) int colorSpace; // ivar: _colorSpace
@property (readonly) CRConfidenceThresholds *confidenceThresholds;
@property (readonly) NSURL *customModelURL; // ivar: _customModelURL
@property (readonly) NSArray *customWords; // ivar: _customWords
@property (readonly) BOOL decodeWithLM; // ivar: _decodeWithLM
@property (readonly) BOOL filterWithLM;
@property float highConfidenceThreshold; // ivar: _highConfidenceThreshold
@property (readonly) CGFloat inputHeight; // ivar: _inputHeight
@property (readonly) NSArray *inputWidths; // ivar: _inputWidths
@property (readonly) NSNumber *lexiconWeight; // ivar: _lexiconWeight
@property (readonly) CRLMFilteringThresholds *lmFilteringThresholds; // ivar: _lmFilteringThresholds
@property (readonly) NSString *locale; // ivar: _locale
@property (readonly) NSInteger maxConcurrentBatches; // ivar: _maxConcurrentBatches
@property float mediumConfidenceThreshold; // ivar: _mediumConfidenceThreshold
@property (readonly) float precisionThreshold; // ivar: _precisionThreshold
@property (readonly) CRTitleParameters *titleParameters; // ivar: _titleParameters
@property (readonly) NSNumber *wordLMWeight; // ivar: _wordLMWeight


-(BOOL)usesAppleNeuralEngine;
-(id)initV1DefaultConfigWithOptions:(id)arg0 ;
-(id)initV2DefaultConfigWithOptions:(id)arg0 ;
-(id)initV3DefaultConfigWithOptions:(id)arg0 ;
-(id)initWithLocale:(id)arg0 imageReaderOptions:(id)arg1 error:(*id)arg2 ;
-(id)textFeatureFilter;
-(void)loadLanguageModelWeightsForLanguageIdentifier:(id)arg0 rev:(NSUInteger)arg1 ;


@end


#endif