// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGHIGHLIGHTENRICHMENTUTILITIES_H
#define PGHIGHLIGHTENRICHMENTUTILITIES_H


#import <Foundation/Foundation.h>


@interface PGHighlightEnrichmentUtilities : NSObject



+(CGFloat)meaningScoreWithMeanings:(id)arg0 forLongTrip:(BOOL)arg1 graph:(id)arg2 collection:(id)arg3 keyAsset:(id)arg4 keyAssetCriteriaScore:(*CGFloat)arg5 curationManager:(id)arg6 ;
+(id)childHighlightNodeOfGroupHighlightNode:(id)arg0 withLocalIdentifier:(id)arg1 ;
+(id)firstKeyAssetWithTripHighlight:(id)arg0 ;
+(id)headKeyAssetWithExtendedCuration:(id)arg0 ;
+(id)keyAssetForDayGroupHighlightWithHighlightInfo:(id)arg0 curationManager:(id)arg1 ;
+(id)requiredAssetsInAssets:(id)arg0 withHighlightInfo:(id)arg1 ;


@end


#endif