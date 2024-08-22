// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HRERECOMMENDATIONENGINE_H
#define HRERECOMMENDATIONENGINE_H

@class NSMutableArray, NSArray;

#import <Foundation/Foundation.h>

#import "HRERankConfidenceController.h"
#import "HRETemplateRecommendationGenerator.h"

@interface HRERecommendationEngine : NSObject

@property (retain, nonatomic) HRERankConfidenceController *rankingController; // ivar: _rankingController
@property (retain, nonatomic) NSMutableArray *recommendationSources; // ivar: _recommendationSources
@property (retain, nonatomic) HRETemplateRecommendationGenerator *templateSource; // ivar: _templateSource
@property (retain, nonatomic) NSArray *templates;


-(id)_sourcesEnabledWithOptions:(NSUInteger)arg0 ;
-(id)generateRecommendationsForHome:(id)arg0 options:(NSUInteger)arg1 ;
-(id)generateRecommendationsForServiceLikeItems:(id)arg0 accessoryTypeGroup:(id)arg1 inHome:(id)arg2 options:(NSUInteger)arg3 ;
-(id)generateRecommendationsForServiceLikeItems:(id)arg0 inHome:(id)arg1 options:(NSUInteger)arg2 ;
-(id)init;
-(id)recommendationsForAccessoryTypeGroup:(id)arg0 inHome:(id)arg1 options:(NSUInteger)arg2 ;


@end


#endif