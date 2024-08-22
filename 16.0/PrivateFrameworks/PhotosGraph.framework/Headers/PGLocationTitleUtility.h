// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGLOCATIONTITLEUTILITY_H
#define PGLOCATIONTITLEUTILITY_H


#import <Foundation/Foundation.h>


@interface PGLocationTitleUtility : NSObject



+(BOOL)_containsAmusementParkPOIFromMomentNodes:(id)arg0 ;
+(BOOL)_titleComponentsAreInSameSupersetCity:(id)arg0 graph:(id)arg1 locationHelper:(id)arg2 ;
+(CGFloat)_weightForAreaNode:(id)arg0 withAddressNodes:(id)arg1 ;
+(id)_aoiSubsetsFromAOI:(id)arg0 idx:(NSUInteger)arg1 currentSubset:(id)arg2 subsetSize:(NSUInteger)arg3 ;
+(id)_aoiSubsetsFromAOI:(id)arg0 maxSubsetSize:(NSUInteger)arg1 ;
+(id)_beautifiedLocationStringWithTitleComponents:(id)arg0 momentNodes:(id)arg1 lineBreakBehavior:(NSUInteger)arg2 keyAssetAddressNode:(id)arg3 curationAddressNodes:(id)arg4 isMatchingKeyAsset:(*BOOL)arg5 useDistrict:(BOOL)arg6 allowFamilyHome:(BOOL)arg7 showAllCities:(BOOL)arg8 locationHelper:(id)arg9 ;
+(id)_commonAOIComponentsForMomentNodes:(id)arg0 addressNodes:(id)arg1 aoiDisplayType:(NSUInteger)arg2 containsAmusementParkPOI:(BOOL)arg3 locationHelper:(id)arg4 ;
+(id)_commonCityTitleComponentsFromMomentNodes:(id)arg0 remainingAddressNodes:(id)arg1 ignoredAddressNodes:(id)arg2 incompleteLocationResolver:(id)arg3 locationHelper:(id)arg4 ;
+(id)_filteredAOINodeCombinationsForCombinations:(id)arg0 minSize:(NSUInteger)arg1 maxSize:(NSUInteger)arg2 maxTitleLength:(NSUInteger)arg3 minNumberOfAssets:(NSUInteger)arg4 aoiNodesToAddressNodesMapTable:(id)arg5 assetCountByAddressNodeIdentifier:(id)arg6 locationHelper:(id)arg7 ;
+(id)_filteredAOINodesForAddressNodes:(id)arg0 aoiTitleMaximumLength:(NSUInteger)arg1 locationHelper:(id)arg2 ;
+(id)_filteredAddressNodesWithAddressNodes:(id)arg0 momentNodes:(id)arg1 incompleteLocationResolver:(id)arg2 filterSignificantLocationsOption:(NSUInteger)arg3 locationHelper:(id)arg4 ;
+(id)_firstComponentInTimeFromComponents:(id)arg0 momentNodes:(id)arg1 curationAddressNodes:(id)arg2 allowFamilyHome:(BOOL)arg3 ;
+(id)_localizedStringForMultipleLocationsWithFirstComponentForTitle:(id)arg0 secondComponentForTitle:(id)arg1 firstLocation:(id)arg2 otherLocation:(id)arg3 ;
+(id)_localizedStringForTwoLocationsWithFirstComponentForTitle:(id)arg0 secondComponentForTitle:(id)arg1 firstLocation:(id)arg2 otherLocation:(id)arg3 ;
+(id)_locationStringWithDistrictsFromTitleComponents:(id)arg0 momentNodes:(id)arg1 lineBreakBehavior:(NSUInteger)arg2 allowFamilyHome:(BOOL)arg3 locationHelper:(id)arg4 ;
+(id)_peopleLocationFromAddressNode:(id)arg0 ;
+(id)_sortedAOINodeCombinationsForCombinations:(id)arg0 aoiNodesToAddressNodesMapTable:(id)arg1 assetCountByAddressNodeIdentifier:(id)arg2 locationHelper:(id)arg3 ;
+(id)_sortedComponentsFromComponents:(id)arg0 ;
+(id)_titleWithLineBreakBehavior:(NSUInteger)arg0 forTitle:(id)arg1 titleComponents:(id)arg2 ;
+(id)_twoPartLocationTitleWithFirstPartTitle:(id)arg0 withDimension:(NSUInteger)arg1 usedFirstPartLocationNode:(id)arg2 addressNode:(id)arg3 locationHelper:(id)arg4 ;
+(id)beautifiedLocationNodeStringWithPlaceNode:(id)arg0 locationHelper:(id)arg1 ;
+(void)generateBusinessItemLocationWithOptions:(id)arg0 result:(id)arg1 ;
+(void)generateHighlightLocationTitleForTripWithMomentNodes:(id)arg0 lineBreakBehavior:(NSUInteger)arg1 locationHelper:(id)arg2 result:(id)arg3 ;
+(void)generateLocationTitleForTripWithMomentNodes:(id)arg0 locationHelper:(id)arg1 result:(id)arg2 ;
+(void)generateLocationTitleWithOptions:(id)arg0 locationHelper:(id)arg1 result:(id)arg2 ;


@end


#endif