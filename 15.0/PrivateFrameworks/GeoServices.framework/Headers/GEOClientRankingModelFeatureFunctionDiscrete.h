// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOCLIENTRANKINGMODELFEATUREFUNCTIONDISCRETE_H
#define GEOCLIENTRANKINGMODELFEATUREFUNCTIONDISCRETE_H



#import "GEOClientRankingModelFeatureFunction.h"

@interface GEOClientRankingModelFeatureFunctionDiscrete : GEOClientRankingModelFeatureFunction

@property (readonly, nonatomic) float valueThresholdHigh; // ivar: _valueThresholdHigh
@property (readonly, nonatomic) float valueThresholdLow; // ivar: _valueThresholdLow
@property (readonly, nonatomic) float weightHigh; // ivar: _weightHigh
@property (readonly, nonatomic) float weightLow; // ivar: _weightLow


-(NSInteger)functionType;
-(id)init;
-(id)initWithValueThresholdLow:(float)arg0 weightLow:(float)arg1 valueThresholdHigh:(float)arg2 weightHigh:(float)arg3 ;


@end


#endif