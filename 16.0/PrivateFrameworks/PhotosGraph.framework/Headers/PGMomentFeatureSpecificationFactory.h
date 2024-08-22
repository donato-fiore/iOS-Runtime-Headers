// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGMOMENTFEATURESPECIFICATIONFACTORY_H
#define PGMOMENTFEATURESPECIFICATIONFACTORY_H

@class CLSSceneTaxonomyHierarchy, CVNLPCLIPModel;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface PGMomentFeatureSpecificationFactory : NSObject {
    CLSSceneTaxonomyHierarchy *_sceneTaxonomy;
    NSObject<OS_os_log> *_loggingConnection;
    CVNLPCLIPModel *_CLIPModel;
}




-(id)_CLIPTrendsSpecificationsWithProgress:(id)arg0 ;
-(id)_babySpecification;
-(id)_beachROISpecification;
-(id)_excitementAudioSpecification;
-(id)_foodSpecification;
-(id)_mountainROISpecification;
-(id)_natureROISpecification;
-(id)_peopleSpecification;
-(id)_petPersonSpecification;
-(id)_petSpecification;
-(id)_socialGroupSpecification;
-(id)_trendsSpecifications;
-(id)_urbanROISpecification;
-(id)_waterROISpecification;
-(id)allSupportedFeatureTypes;
-(id)defaultPeopleAssetFilter;
-(id)initWithSceneTaxonomy:(id)arg0 loggingConnection:(id)arg1 ;
-(id)specificationsForFeatureType:(NSUInteger)arg0 progressReporter:(id)arg1 ;


@end


#endif