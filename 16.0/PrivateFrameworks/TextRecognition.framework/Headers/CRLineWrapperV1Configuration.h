// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRLINEWRAPPERV1CONFIGURATION_H
#define CRLINEWRAPPERV1CONFIGURATION_H


#import <Foundation/Foundation.h>


@interface CRLineWrapperV1Configuration : NSObject

@property float angleSimilarityThreshold; // ivar: _angleSimilarityThreshold
@property NSInteger caseWrappingScoreWithNoCapitalization; // ivar: _caseWrappingScoreWithNoCapitalization
@property float confidenceThreshold; // ivar: _confidenceThreshold
@property float contextConfidenceThreshold; // ivar: _contextConfidenceThreshold
@property NSInteger correctionMode; // ivar: _correctionMode
@property float heightSimilarityRatio; // ivar: _heightSimilarityRatio
@property int lmContextSize; // ivar: _lmContextSize
@property CGFloat lmScoreEOSMinRatio; // ivar: _lmScoreEOSMinRatio
@property CGFloat lmScoreThreshold; // ivar: _lmScoreThreshold
@property float maximumVerticalDistanceGrowthRatio; // ivar: _maximumVerticalDistanceGrowthRatio
@property float newParagraphIndentDistanceRatioTolerance; // ivar: _newParagraphIndentDistanceRatioTolerance
@property NSInteger noWrappingEvaluationThreshold; // ivar: _noWrappingEvaluationThreshold
@property float oversegmentedDistanceHeightRatioListItemTolerance; // ivar: _oversegmentedDistanceHeightRatioListItemTolerance
@property float oversegmentedDistanceHeightRatioTolerance; // ivar: _oversegmentedDistanceHeightRatioTolerance
@property (readonly) float probabilityThreshold; // ivar: _probabilityThreshold
@property NSInteger punctuationWrappingScoreWithEndingMOS; // ivar: _punctuationWrappingScoreWithEndingMOS
@property NSInteger punctuationWrappingScoreWithNoClosingPunctuation; // ivar: _punctuationWrappingScoreWithNoClosingPunctuation
@property float smallestVerticalDistanceHeightRatio; // ivar: _smallestVerticalDistanceHeightRatio
@property NSUInteger tokenCountIncreaseLimit; // ivar: _tokenCountIncreaseLimit
@property float widthGrowthLimit; // ivar: _widthGrowthLimit
@property NSInteger wrappingEvaluationThreshold; // ivar: _wrappingEvaluationThreshold


+(NSInteger)_correctionModeFromString:(id)arg0 ;
-(id)description;
-(id)initWithLocale:(id)arg0 ;
-(id)initWithLocale:(id)arg0 useStrictConfig:(BOOL)arg1 ;


@end


#endif