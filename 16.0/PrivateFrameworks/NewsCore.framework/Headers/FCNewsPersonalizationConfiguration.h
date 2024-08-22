// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCNEWSPERSONALIZATIONCONFIGURATION_H
#define FCNEWSPERSONALIZATIONCONFIGURATION_H


#import <Foundation/Foundation.h>

#import "FCNewsPersonalizationFeatureConfiguration.h"
#import "FCStatelessPersonalizationConfiguration.h"
#import "FCUserEventHistoryTrackingConfiguration.h"
#import "FCNewsPersonalizationTrainingConfiguration.h"

@interface FCNewsPersonalizationConfiguration : NSObject

@property (retain, nonatomic) FCNewsPersonalizationFeatureConfiguration *featureConfiguration; // ivar: _featureConfiguration
@property (retain, nonatomic) FCStatelessPersonalizationConfiguration *statelessPersonalizationConfiguration; // ivar: _statelessPersonalizationConfiguration
@property (retain, nonatomic) FCUserEventHistoryTrackingConfiguration *trackingConfiguration; // ivar: _trackingConfiguration
@property (retain, nonatomic) FCNewsPersonalizationTrainingConfiguration *trainingConfiguration; // ivar: _trainingConfiguration


+(id)defaultConfiguration;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif