// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOCLIENTRANKINGMODELFEATURETYPEIDENTIFIER_H
#define GEOCLIENTRANKINGMODELFEATURETYPEIDENTIFIER_H



#import "GEOClientRankingModelFeatureIdentifier.h"

@interface GEOClientRankingModelFeatureTypeIdentifier : GEOClientRankingModelFeatureIdentifier

@property (readonly, nonatomic) NSInteger featureType; // ivar: _featureType


-(NSInteger)featureIdentifierType;
-(id)init;
-(id)initWithFeatureType:(NSInteger)arg0 ;


@end


#endif