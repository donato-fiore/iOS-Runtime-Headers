// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCSPORTSRECOMMENDATIONMAPPINGS_H
#define FCSPORTSRECOMMENDATIONMAPPINGS_H


#import <Foundation/Foundation.h>

#import "FCSportsRecommendationsProvider.h"

@interface FCSportsRecommendationMappings : NSObject

@property (retain, nonatomic) FCSportsRecommendationsProvider *alternativeRecommendations; // ivar: _alternativeRecommendations
@property (retain, nonatomic) FCSportsRecommendationsProvider *defaultRecommendations; // ivar: _defaultRecommendations


-(id)initWithDictionary:(id)arg0 ;


@end


#endif