// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMDUSECASEWORKFLOWIMPLEMENTATION_H
#define AMDUSECASEWORKFLOWIMPLEMENTATION_H

@class NSString, NSNumber, NSDictionary;
@protocol AMDUseCaseWorkflow;

#import <Foundation/Foundation.h>

#import "AMDInputBuilder.h"
#import "AMDModelStore.h"
#import "AMDOutputBuilder.h"

@interface AMDUseCaseWorkflowImplementation : NSObject <AMDUseCaseWorkflow>



@property (retain, nonatomic) NSString *coldstartModelId; // ivar: _coldstartModelId
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSNumber *endTimestamp; // ivar: _endTimestamp
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) AMDInputBuilder *inputBuilder; // ivar: _inputBuilder
@property (retain, nonatomic) NSNumber *maxItemsToDisplay; // ivar: _maxItemsToDisplay
@property (retain, nonatomic) NSString *modelFormat; // ivar: _modelFormat
@property (retain, nonatomic) NSString *modelId; // ivar: _modelId
@property (retain, nonatomic) NSString *modelName; // ivar: _modelName
@property (retain, nonatomic) AMDModelStore *modelStore; // ivar: _modelStore
@property (retain, nonatomic) AMDOutputBuilder *outputBuilder; // ivar: _outputBuilder
@property (retain, nonatomic) NSDictionary *ruleParams; // ivar: _ruleParams
@property (retain, nonatomic) NSNumber *startTimestamp; // ivar: _startTimestamp
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *treatmentId; // ivar: _treatmentId
@property (retain, nonatomic) NSString *useCaseId; // ivar: _useCaseId


-(BOOL)isAvailableNow;
-(BOOL)isValid;
-(BOOL)startsBefore:(id)arg0 ;
-(NSInteger)getAssetCreationTimestamp;
-(id)getColdstartModelId;
-(id)getMaxItemsToDisplay;
-(id)getModelFormat;
-(id)getModelId;
-(id)getOutputFeatureIds;
-(id)getTreatmentId;
-(id)getUseCaseId;
-(id)initWithDictionary:(id)arg0 andModelStore:(id)arg1 ;
-(id)topNPredictions:(NSUInteger)arg0 forDomain:(id)arg1 usingFeatureProvider:(id)arg2 error:(*id)arg3 ;
-(short)getModelVersion;


@end


#endif