// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCNEWSPERSONALIZATIONTRAININGCONFIGURATION_H
#define FCNEWSPERSONALIZATIONTRAININGCONFIGURATION_H


#import <Foundation/Foundation.h>

#import "FCNewsPersonalizationAggregateModificationConfigurations.h"
#import "FCNewsPersonalizationTrainingBiases.h"
#import "FCNewsPersonalizationEventConditionalsConfigurations.h"
#import "FCNewsPersonalizationTrainingFeatureFlags.h"
#import "FCNewsPersonalizationFeaturePriorsConfiguration.h"

@interface FCNewsPersonalizationTrainingConfiguration : NSObject

@property (retain, nonatomic) FCNewsPersonalizationAggregateModificationConfigurations *aggregateModificationConfigurations; // ivar: _aggregateModificationConfigurations
@property (retain, nonatomic) FCNewsPersonalizationTrainingBiases *biases; // ivar: _biases
@property (nonatomic) CGFloat decayRate; // ivar: _decayRate
@property (retain, nonatomic) FCNewsPersonalizationEventConditionalsConfigurations *eventConditionalsConfigurations; // ivar: _eventConditionalsConfigurations
@property (retain, nonatomic) FCNewsPersonalizationTrainingFeatureFlags *featureFlags; // ivar: _featureFlags
@property (retain, nonatomic) FCNewsPersonalizationFeaturePriorsConfiguration *priorsConfiguration; // ivar: _priorsConfiguration


-(id)initWithDictionary:(id)arg0 ;


@end


#endif