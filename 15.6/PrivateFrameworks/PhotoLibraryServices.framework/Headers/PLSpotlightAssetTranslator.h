// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLSPOTLIGHTASSETTRANSLATOR_H
#define PLSPOTLIGHTASSETTRANSLATOR_H


#import <Foundation/Foundation.h>


@interface PLSpotlightAssetTranslator : NSObject



+(BOOL)_isOCRTextDonationEnabled;
+(id)_businessCategoriesForAsset:(id)arg0 graphData:(id)arg1 ;
+(id)_businessNamesForAsset:(id)arg0 graphData:(id)arg1 ;
+(id)_contentRatingForAsset:(id)arg0 ;
+(id)_debugOCRTextForAsset:(id)arg0 ;
+(id)_holidaysForAsset:(id)arg0 graphData:(id)arg1 ;
+(id)_locationNamesForAsset:(id)arg0 ;
+(id)_meaningsForAsset:(id)arg0 graphData:(id)arg1 synonyms:(id)arg2 ;
+(id)_mediaTypesForAsset:(id)arg0 ;
+(id)_ocrTextForAsset:(id)arg0 ;
+(id)_personNamesForAsset:(id)arg0 ;
+(id)_personsForAsset:(id)arg0 ;
+(id)_publicEventCategoriesForAsset:(id)arg0 graphData:(id)arg1 synonyms:(id)arg2 ;
+(id)_publicEventNamesForAsset:(id)arg0 graphData:(id)arg1 ;
+(id)_publicEventPerformersForAsset:(id)arg0 graphData:(id)arg1 ;
+(id)_scenesForAsset:(id)arg0 sceneTaxonomy:(id)arg1 ;
+(id)_seasonsForAsset:(id)arg0 calendar:(id)arg1 locale:(id)arg2 synonymsBySeason:(id)arg3 ;
+(id)_spotlightSearchableAttributesForAsset:(id)arg0 graphData:(id)arg1 searchConfiguration:(id)arg2 ;
+(id)spotlightSearchableItemFromAsset:(id)arg0 graphData:(id)arg1 searchConfiguration:(id)arg2 domainIdentifier:(id)arg3 ;


@end


#endif