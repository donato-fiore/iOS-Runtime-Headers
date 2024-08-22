// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOCLIENTRANKINGMODELFEATURECOMPOSITEIDENTIFIER_H
#define GEOCLIENTRANKINGMODELFEATURECOMPOSITEIDENTIFIER_H

@class NSArray;


#import "GEOClientRankingModelFeatureIdentifier.h"

@interface GEOClientRankingModelFeatureCompositeIdentifier : GEOClientRankingModelFeatureIdentifier

@property (readonly, nonatomic) float featureWeight; // ivar: _featureWeight
@property (copy, nonatomic) NSArray *unitExponentPairs; // ivar: _unitExponentPairs


-(NSInteger)featureIdentifierType;
-(id)initWithUnitExponentPairs:(id)arg0 featureWeight:(float)arg1 ;


@end


#endif