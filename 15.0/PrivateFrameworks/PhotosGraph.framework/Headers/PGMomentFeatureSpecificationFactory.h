// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGMOMENTFEATURESPECIFICATIONFACTORY_H
#define PGMOMENTFEATURESPECIFICATIONFACTORY_H


#import <Foundation/Foundation.h>


@interface PGMomentFeatureSpecificationFactory : NSObject



+(id)_babySpecification;
+(id)_beachROISpecification;
+(id)_excitementAudioSpecification;
+(id)_foodSpecification;
+(id)_mountainROISpecification;
+(id)_natureROISpecification;
+(id)_peopleSpecification;
+(id)_petPersonSpecification;
+(id)_petSpecification;
+(id)_socialGroupSpecification;
+(id)_trendsSpecifications;
+(id)_urbanROISpecification;
+(id)_waterROISpecification;
+(id)allSupportedFeatureTypes;
+(id)defaultPeopleAssetFilter;
+(id)specificationsForFeatureType:(NSUInteger)arg0 ;


@end


#endif