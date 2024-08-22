// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ETMODELDEFINITION_H
#define ETMODELDEFINITION_H

@class NSString, NSArray, NSURL;

#import <Foundation/Foundation.h>


@interface ETModelDefinition : NSObject

@property (readonly) NSString *initializer; // ivar: _initializer
@property (readonly) NSArray *inputs; // ivar: _inputs
@property (readonly) NSString *isTrainingGlobalName; // ivar: _isTrainingGlobalName
@property (readonly) NSArray *layerNames; // ivar: _layerNames
@property (readonly) NSURL *modelURL; // ivar: _modelURL
@property (readonly) NSArray *outputs; // ivar: _outputs
@property (readonly) NSArray *trainingInputs; // ivar: _trainingInputs
@property (readonly) NSArray *trainingOutputs; // ivar: _trainingOutputs


-(id)initWithInferenceNetworkPath:(id)arg0 error:(*id)arg1 ;
-(id)initWithInferenceNetworkPath:(id)arg0 inferenceInputs:(id)arg1 inferenceOutputs:(id)arg2 error:(*id)arg3 ;
-(id)initWithTrainingNetworkPath:(id)arg0 inferenceInputs:(id)arg1 inferenceOutputs:(id)arg2 trainingInputs:(id)arg3 trainingOutputs:(id)arg4 trainingControlVariableName:(id)arg5 withInitializer:(id)arg6 error:(*id)arg7 ;


@end


#endif