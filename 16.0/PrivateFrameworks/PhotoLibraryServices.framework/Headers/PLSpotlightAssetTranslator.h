// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLSPOTLIGHTASSETTRANSLATOR_H
#define PLSPOTLIGHTASSETTRANSLATOR_H


#import <Foundation/Foundation.h>


@interface PLSpotlightAssetTranslator : NSObject



+(BOOL)_isGoldilocksEnabledForManagedObjectContext:(id)arg0 ;
+(BOOL)_isUnnamedPeoplePersonDonationEnabled;
+(id)_contentRatingForAsset:(id)arg0 ;
+(id)_libraryScopeForAsset:(id)arg0 ;
+(id)_locationNamesForAsset:(id)arg0 ;
+(id)_mediaTypesForAsset:(id)arg0 ;
+(id)_personsForAsset:(id)arg0 ;
+(id)_scenesForAsset:(id)arg0 sceneTaxonomyProvider:(id)arg1 ;
+(id)_spotlightSearchableAttributesForAsset:(id)arg0 graphData:(id)arg1 searchConfiguration:(id)arg2 documentObservation:(id)arg3 ;
+(id)spotlightSearchableItemFromAsset:(id)arg0 graphData:(id)arg1 searchConfiguration:(id)arg2 documentObservation:(id)arg3 ;


@end


#endif