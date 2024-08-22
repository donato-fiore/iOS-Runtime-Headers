// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMDUSECASEWORKFLOW_H
#define AMDUSECASEWORKFLOW_H

@class NSString, NSNumber, NSDictionary;

#import <Foundation/Foundation.h>

#import "AMDInputBuilder.h"
#import "AMDOutputBuilder.h"

@interface AMDUseCaseWorkflow : NSObject

@property (retain, nonatomic) NSString *coldstartModelId; // ivar: _coldstartModelId
@property (retain, nonatomic) NSNumber *endTimestamp; // ivar: _endTimestamp
@property (retain, nonatomic) AMDInputBuilder *inputBuilder; // ivar: _inputBuilder
@property (retain, nonatomic) NSNumber *maxItemsToDisplay; // ivar: _maxItemsToDisplay
@property (retain, nonatomic) NSString *modelFormat; // ivar: _modelFormat
@property (retain, nonatomic) NSString *modelId; // ivar: _modelId
@property (retain, nonatomic) NSString *modelName; // ivar: _modelName
@property (retain, nonatomic) AMDOutputBuilder *outputBuilder; // ivar: _outputBuilder
@property (retain, nonatomic) NSDictionary *ruleParams; // ivar: _ruleParams
@property (retain, nonatomic) NSNumber *startTimestamp; // ivar: _startTimestamp
@property (retain, nonatomic) NSString *treatmentId; // ivar: _treatmentId
@property (retain, nonatomic) NSString *useCaseId; // ivar: _useCaseId


-(BOOL)isValid;
-(id)getColdstartModelId;
-(id)getMaxItemsToDisplay;
-(id)getModelFormat;
-(id)getModelId;
-(id)getOutputFeatureIds;
-(id)getPredictions:(NSUInteger)arg0 forDomain:(id)arg1 error:(*id)arg2 ;
-(id)getTreatmentId;
-(id)getUseCaseId;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif