// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLSPOTLIGHTASSETTRANSLATORCONFIGURATION_H
#define PLSPOTLIGHTASSETTRANSLATORCONFIGURATION_H

@class NSCalendar, NSLocale, NSDictionary;

#import <Foundation/Foundation.h>

#import "PLSearchIndexSceneTaxonomy.h"

@interface PLSpotlightAssetTranslatorConfiguration : NSObject

@property (readonly, nonatomic) NSCalendar *calendar; // ivar: _calendar
@property (readonly, nonatomic) NSLocale *locale; // ivar: _locale
@property (readonly, nonatomic) PLSearchIndexSceneTaxonomy *sceneTaxonomy; // ivar: _sceneTaxonomy
@property (readonly, copy, nonatomic) NSDictionary *seasonSynonymsBySeason; // ivar: _seasonSynonymsBySeason
@property (readonly, copy, nonatomic) NSDictionary *synonymsByIndexCategoryMask; // ivar: _synonymsByIndexCategoryMask


-(id)description;
-(id)initWithSceneTaxonomy:(id)arg0 locale:(id)arg1 calendar:(id)arg2 seasonSynonyms:(id)arg3 synonymsByIndexCategoryMask:(id)arg4 ;


@end


#endif