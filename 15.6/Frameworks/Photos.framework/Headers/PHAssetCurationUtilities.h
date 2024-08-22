// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHASSETCURATIONUTILITIES_H
#define PHASSETCURATIONUTILITIES_H


#import <Foundation/Foundation.h>


@interface PHAssetCurationUtilities : NSObject



+(BOOL)_isTabooEventIdentifier:(unsigned int)arg0 ;
+(BOOL)assetIsSafeForWidgetDisplay:(id)arg0 ;
+(CGFloat)NSFWGeneralConfidenceThresholdForSceneAnalysisVersion:(NSUInteger)arg0 ;
+(CGFloat)_tabooVersion33ConfidenceThresholdForIdentifier:(unsigned int)arg0 ;
+(CGFloat)_tabooVersion50ConfidenceThresholdForIdentifier:(unsigned int)arg0 ;
+(CGFloat)tabooEventConfidenceThresholdForIdentifier:(unsigned int)arg0 forSceneAnalysisVersion:(NSUInteger)arg1 ;
+(id)assetsShowcasingFoodWithoutFacesInAssets:(id)arg0 ;
+(id)filteredAndSortedPreviewAssetsByScoreFromAssets:(id)arg0 targetSize:(struct CGSize )arg1 ;
+(id)internalPredicateToFilterAssetsEligibleForSyndication;
+(id)internalPredicateToFilterGuestSyndicatedAssetsEligibleForQuestion;
+(id)internalPredicateToFilterSyndicatedAssetsEligibleForCurationProcessing;
+(id)internalPredicateToFilterSyndicatedAssetsEligibleForGuestInferenceProcessing;
+(id)internalPredicateToFilterSyndicatedAssetsEligibleForQuestion;
+(id)internalPredicateToIncludeOnlyReceivedSyndicatedAssets;
+(id)internalPredicateToIncludeOnlySentSyndicatedAssets;
+(id)internalPredicateToIncludeReceivedNotAnalyzedSyndicatedAssets;
+(id)internalPredicateToIncludeReceivedNotEligibleSyndicatedAssets;
+(id)previewCandidatesFromAssets:(id)arg0 ;
+(id)syndicationEligibilityForAssets:(id)arg0 ;


@end


#endif