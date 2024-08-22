// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ETTASKDEFINITION_H
#define ETTASKDEFINITION_H

@class NSArray;
@protocol ETTaskContext;

#import <Foundation/Foundation.h>

#import "ETVariablesDefinition.h"
#import "ETModelDefinition.h"
#import "ETOptimizerDefinition.h"
#import "ETTaskState.h"

@interface ETTaskDefinition : NSObject <ETTaskContext>

 {
    unordered_map<std::string, unsigned long, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, unsigned long>>> inference_layer_index;
    ETVariablesDefinition *varsDef;
    NSUInteger runtimePlatform;
    int precision;
    NSUInteger batchSize;
    basic_string<char, std::char_traits<char>, std::allocator<char>> training_control_name;
    basic_string<char, std::char_traits<char>, std::allocator<char>> gradient_control_name;
    basic_string<char, std::char_traits<char>, std::allocator<char>> optimizer_control_name;
    NSArray *infInputNames;
    NSArray *infOutputNames;
    NSArray *trainInputNames;
    NSArray *trainOutputNames;
    unordered_map<std::string, Espresso::layer_shape, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, Espresso::layer_shape>>> infInputBlobShapes;
    unordered_map<std::string, Espresso::layer_shape, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, Espresso::layer_shape>>> trainInputBlobShapes;
    unordered_map<std::string, Espresso::layer_shape, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, Espresso::layer_shape>>> infOutputBlobShapes;
    unordered_map<std::string, Espresso::layer_shape, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, Espresso::layer_shape>>> trainOutputBlobShapes;
}


@property shared_ptr<Espresso::net> inferenceGraphNetPtr; // ivar: _inferenceGraphNetPtr
@property (retain, nonatomic) ETModelDefinition *inferenceModel; // ivar: _inferenceModel
@property (retain, nonatomic) ETOptimizerDefinition *optimizer; // ivar: _optimizer
@property (nonatomic) NSUInteger platform; // ivar: _platform
@property (retain, nonatomic) ETTaskState *taskState; // ivar: _taskState
@property shared_ptr<Espresso::net> trainingGraphNetPtr; // ivar: _trainingGraphNetPtr


-(?)context_for_runtime_platform;
-(?)setInferenceNetworkWeightserror;
-(BOOL)doTrainingOnData:(id)arg0 forNumberOfEpochs:(NSUInteger)arg1 withCallback:(id)arg2 error:(*id)arg3 ;
-(BOOL)privateDoTrainingOnData:(id)arg0 forNumberOfEpochs:(NSUInteger)arg1 withCallback:(id)arg2 error:(*id)arg3 ;
-(BOOL)saveNetwork:(id)arg0 inplace:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)saveTrainingNetwork:(id)arg0 checkpoint:(id)arg1 error:(*id)arg2 ;
-(BOOL)setParameterOfType:(NSUInteger)arg0 forLayerNamed:(id)arg1 withValue:(id)arg2 error:(*id)arg3 ;
-(BOOL)setTensorNamed:(id)arg0 withValue:(id)arg1 error:(*id)arg2 ;
-(BOOL)setWeightsOfInferenceNetworkLoadedFrom:(id)arg0 AndSaveTo:(id)arg1 error:(*id)arg2 ;
-(NSUInteger)dataTypeForParameterOfType:(NSUInteger)arg0 fromLayerNamed:(id)arg1 ;
-(NSUInteger)platformForLayerNamed:(id)arg0 error:(*id)arg1 ;
-(id)description;
-(id)doInferenceOnData:(id)arg0 error:(*id)arg1 ;
-(id)getParameterOfType:(NSUInteger)arg0 forLayerNamed:(id)arg1 error:(*id)arg2 ;
-(id)getTensorNamed:(id)arg0 ;
-(id)getTensorNamed:(id)arg0 directBind:(BOOL)arg1 ;
-(id)initWithModelDefinition:(id)arg0 lossDefinition:(id)arg1 variablesDefinition:(id)arg2 optimizerDefinition:(id)arg3 forPlatform:(NSUInteger)arg4 error:(*id)arg5 ;
-(id)initWithTrainingModelDefinition:(id)arg0 forPlatform:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)namesVectorToFoundationArray:(struct vector<std::string, std::allocator<std::string>> )arg0 ;
-(void)checkShapes:(*void)arg0 withSample:(*void)arg1 withError:(*id)arg2 ;
-(void)reloadOnRuntimePlatform:(*id)arg0 ;
-(void)setupInputOutputShapes:(*id)arg0 ;
-(void)setupShapes:(*void)arg0 forBlobs:(id)arg1 withError:(*id)arg2 ;
-(void)shareWeights;


@end


#endif