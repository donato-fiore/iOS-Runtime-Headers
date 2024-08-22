// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYCLIPCOMPOSITIONFACTORY_H
#define PXSTORYCLIPCOMPOSITIONFACTORY_H


#import <Foundation/Foundation.h>


@interface PXStoryClipCompositionFactory : NSObject



+(id)allDefaultCompositions;
+(id)allSupportedCompositions;
+(id)aspectFitOneUpComposition;
+(id)defaultNUpCompositions;
+(id)defaultOneUpCompositions;
+(id)defaultThreeUpCompositions;
+(id)defaultTwoUpCompositions;
+(id)oneUpComposition;
+(id)oneUpCompositionWithAspectRatioNumerator:(NSInteger)arg0 denominator:(NSInteger)arg1 ;
+(id)oneUpCompositionsWithAspectRatioPassingTest:(id)arg0 ;
+(id)supportedNUpCompositions;
+(id)supportedOneUpCompositions;
+(id)supportedThreeUpCompositions;
+(id)supportedTwoUpAssetSplitCompositions;
+(id)supportedTwoUpCompositions;
+(id)threeUpHorizontalThirdsComposition;
+(id)threeUpVerticalThirdsComposition;
+(id)twoUpHalfLeadingHalfTrailingComposition;
+(id)twoUpHalfTopHalfBottomComposition;
+(id)twoUpOneThirdLeadingTwoThirdsTrailingAssetSplitComposition;
+(id)twoUpOneThirdLeadingTwoThirdsTrailingComposition;
+(id)twoUpOneThirdTopTwoThirdsBottomAssetSplitComposition;
+(id)twoUpOneThirdTopTwoThirdsBottomComposition;
+(id)twoUpTwoThirdsLeadingOneThirdTrailingAssetSplitComposition;
+(id)twoUpTwoThirdsLeadingOneThirdTrailingComposition;
+(id)twoUpTwoThirdsTopOneThirdBottomAssetSplitComposition;
+(id)twoUpTwoThirdsTopOneThirdBottomComposition;


@end


#endif