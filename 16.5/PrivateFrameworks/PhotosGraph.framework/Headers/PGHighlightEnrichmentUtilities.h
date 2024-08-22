// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGHIGHLIGHTENRICHMENTUTILITIES_H
#define PGHIGHLIGHTENRICHMENTUTILITIES_H


#import <Foundation/Foundation.h>


@interface PGHighlightEnrichmentUtilities : NSObject



+(BOOL)canUseSharingComposition:(unsigned short)arg0 forSharingFilter:(unsigned short)arg1 ;
+(CGFloat)meaningScoreWithMeanings:(id)arg0 forLongTrip:(BOOL)arg1 graph:(id)arg2 collection:(id)arg3 keyAsset:(id)arg4 keyAssetCriteriaScore:(*CGFloat)arg5 curationManager:(id)arg6 ;
+(id)assetPropertySetsForEnrichment;
+(id)childHighlightNodeOfGroupHighlightNode:(id)arg0 withLocalIdentifier:(id)arg1 ;
+(id)filteredAssetsInAssets:(id)arg0 withSharingComposition:(unsigned short)arg1 forSharingFilter:(unsigned short)arg2 ;
+(id)filteredHighlightNodesWithHighlightNodes:(id)arg0 forSharingFilter:(unsigned short)arg1 ;
+(id)filteredMomentNodesWithHighlightNode:(id)arg0 forSharingFilter:(unsigned short)arg1 ;
+(id)headKeyAssetWithExtendedCuration:(id)arg0 ;
+(id)internalPredicateForFetchingAssetsForSharingFilter:(unsigned short)arg0 ;
+(id)keyAssetForDayGroupHighlightWithHighlightInfo:(id)arg0 sharingFilter:(unsigned short)arg1 curationManager:(id)arg2 ;
+(id)keyAssetForMixedSharingCompositionKeyAssetRelationship:(unsigned short)arg0 keyAssetPrivate:(id)arg1 keyAssetShared:(id)arg2 ;
+(id)requiredAssetsInAssets:(id)arg0 withHighlightInfo:(id)arg1 ;
// +(id)selectKeyAssetForSharingComposition:(unsigned short)arg0 mixedSharingCompositionKeyAssetRelationship:(unsigned short)arg1 givenHighlightFilter:(unsigned short)arg2 privateHandler:(id)arg3 sharedHandler:(unk)arg4  ;
+(unsigned short)mixedSharingCompositionKeyAssetRelationshipForKeyAssetPrivate:(id)arg0 keyAssetShared:(id)arg1 shouldCompareHighlight:(BOOL)arg2 ;


@end


#endif