// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLSEARCHINDEXCONFIGURATION_H
#define PLSEARCHINDEXCONFIGURATION_H


#import <Foundation/Foundation.h>

#import "PLSearchIndexSceneTaxonomyProvider.h"
#import "PLSpotlightTranslatorConfiguration.h"

@interface PLSearchIndexConfiguration : NSObject

@property (retain, nonatomic) PLSearchIndexSceneTaxonomyProvider *sceneTaxonomyProvider; // ivar: _sceneTaxonomyProvider
@property (retain, nonatomic) PLSpotlightTranslatorConfiguration *translatorConfiguration; // ivar: _translatorConfiguration


+(NSUInteger)featureFlags;
+(id)calendar;
+(id)locale;


@end


#endif