// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLSPOTLIGHTTRANSLATORCONFIGURATION_H
#define PLSPOTLIGHTTRANSLATORCONFIGURATION_H

@class NSCalendar, NSLocale, NSDictionary;

#import <Foundation/Foundation.h>

#import "PLSearchIndexSceneTaxonomyProvider.h"

@interface PLSpotlightTranslatorConfiguration : NSObject

@property (readonly, nonatomic) NSCalendar *calendar; // ivar: _calendar
@property (readonly, nonatomic) NSLocale *locale; // ivar: _locale
@property (readonly, nonatomic) PLSearchIndexSceneTaxonomyProvider *sceneTaxonomyProvider; // ivar: _sceneTaxonomyProvider
@property (readonly, copy, nonatomic) NSDictionary *seasonSynonymsBySeason; // ivar: _seasonSynonymsBySeason
@property (readonly, copy, nonatomic) NSDictionary *synonymsByIndexCategoryMask; // ivar: _synonymsByIndexCategoryMask


-(id)description;
-(id)initWithSceneTaxonomyProvider:(id)arg0 locale:(id)arg1 calendar:(id)arg2 seasonSynonyms:(id)arg3 synonymsByIndexCategoryMask:(id)arg4 ;


@end


#endif