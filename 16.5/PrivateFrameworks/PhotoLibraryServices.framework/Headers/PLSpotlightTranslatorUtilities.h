// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLSPOTLIGHTTRANSLATORUTILITIES_H
#define PLSPOTLIGHTTRANSLATORUTILITIES_H


#import <Foundation/Foundation.h>


@interface PLSpotlightTranslatorUtilities : NSObject



+(id)contentRatingFromScenes:(id)arg0 algorithmVersion:(short)arg1 ;
+(id)seasonsForDates:(id)arg0 calendar:(id)arg1 locale:(id)arg2 synonymsBySeason:(id)arg3 ;
+(id)spotlightPersonsFromPLPersons:(id)arg0 ;
+(id)spotlightScenesFromScenes:(id)arg0 sceneTaxonomy:(id)arg1 ;
+(id)textFromGraphData:(id)arg0 searchIndexCategoryMask:(NSUInteger)arg1 ;
+(id)textFromGraphData:(id)arg0 searchIndexCategoryMask:(NSUInteger)arg1 synonymSearchIndexCategoryMask:(NSUInteger)arg2 synonyms:(id)arg3 ;


@end


#endif