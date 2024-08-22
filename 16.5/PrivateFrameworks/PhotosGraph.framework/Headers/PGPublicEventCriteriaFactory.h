// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGPUBLICEVENTCRITERIAFACTORY_H
#define PGPUBLICEVENTCRITERIAFACTORY_H

@class CLSSceneTaxonomyHierarchy, NSDictionary;

#import <Foundation/Foundation.h>

#import "PGGraph.h"

@interface PGPublicEventCriteriaFactory : NSObject {
    PGGraph *_graph;
    CLSSceneTaxonomyHierarchy *_sceneTaxonomy;
}


@property (readonly, nonatomic) NSDictionary *disambiguationCriteriaByEventCategory; // ivar: _disambiguationCriteriaByEventCategory
@property (readonly, nonatomic) NSDictionary *highConfidenceCriteriaByEventCategory; // ivar: _highConfidenceCriteriaByEventCategory
@property (readonly, nonatomic) NSDictionary *prohibitedCriteriaByEventCategory; // ivar: _prohibitedCriteriaByEventCategory


+(id)publicEventCriteriaByCategoryForGraph:(id)arg0 sceneTaxonomy:(id)arg1 ;
-(id)_appleEventsCriteriaArray;
-(id)_artsAndMuseumsCriteriaArray;
-(id)_danceCriteriaArray;
-(id)_festivalsAndFairsCriteriaArray;
-(id)_meaningCriteriaByEventCategoryForMeaningIdentifierByEventCategories:(id)arg0 inferenceType:(NSUInteger)arg1 ;
-(id)_musicConcertsCriteriaArray;
-(id)_nightLifeCriteriaArray;
-(id)_publicEventCriteriaByCategory;
-(id)_sportsCriteriaArray;
-(id)_theaterCriteriaArray;
-(id)initWithGraph:(id)arg0 sceneTaxonomy:(id)arg1 ;


@end


#endif