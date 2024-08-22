// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOCLIENTRANKINGMODELFEATUREFUNCTIONLINEAR_H
#define GEOCLIENTRANKINGMODELFEATUREFUNCTIONLINEAR_H



#import "GEOClientRankingModelFeatureFunction.h"

@interface GEOClientRankingModelFeatureFunctionLinear : GEOClientRankingModelFeatureFunction

@property (readonly, nonatomic) float maxRelativeValue; // ivar: _maxRelativeValue
@property (readonly, nonatomic) float meanValue; // ivar: _meanValue
@property (readonly, nonatomic) float weight; // ivar: _weight


-(NSInteger)functionType;
-(id)init;
-(id)initWithWeight:(float)arg0 maxRelativeValue:(float)arg1 meanValue:(float)arg2 ;


@end


#endif