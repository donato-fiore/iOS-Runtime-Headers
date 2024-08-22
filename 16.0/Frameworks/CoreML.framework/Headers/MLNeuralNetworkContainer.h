// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLNEURALNETWORKCONTAINER_H
#define MLNEURALNETWORKCONTAINER_H

@class NSString, NSArray, NSDictionary;

#import <Foundation/Foundation.h>

#import "MLCompilerNeuralNetworkOutput.h"
#import "MLVersionInfo.h"
#import "MLModel.h"
#import "MLNeuralNetworksCompileTimeParams.h"

@interface MLNeuralNetworkContainer : NSObject {
    map<std::string, int, std::less<std::string>, std::allocator<std::pair<const std::string, int>>> widths;
    map<std::string, int, std::less<std::string>, std::allocator<std::pair<const std::string, int>>> heights;
    map<std::string, int, std::less<std::string>, std::allocator<std::pair<const std::string, int>>> ks;
    map<std::string, int, std::less<std::string>, std::allocator<std::pair<const std::string, int>>> batches;
    map<std::string, int, std::less<std::string>, std::allocator<std::pair<const std::string, int>>> sequences;
    map<std::string, int, std::less<std::string>, std::allocator<std::pair<const std::string, int>>> ranks;
}


@property (readonly, nonatomic) NSString *activeFunction;
@property (retain) NSArray *classLabels; // ivar: _classLabels
@property (retain) NSString *classScoreVectorName; // ivar: _classScoreVectorName
@property (retain, nonatomic) MLCompilerNeuralNetworkOutput *compilerOutput; // ivar: _compilerOutput
@property (retain, nonatomic) MLVersionInfo *compilerVersionInfo; // ivar: _compilerVersionInfo
@property (retain, nonatomic) NSArray *configurationList; // ivar: _configurationList
@property (nonatomic) int engine; // ivar: _engine
@property (nonatomic) BOOL hasBidirectionalLayer; // ivar: _hasBidirectionalLayer
@property (nonatomic) BOOL hasDynamicLayer; // ivar: _hasDynamicLayer
@property (nonatomic) BOOL hasOptionalInputSequenceConcat; // ivar: _hasOptionalInputSequenceConcat
@property (retain, nonatomic) NSDictionary *imageParameters; // ivar: _imageParameters
@property (retain, nonatomic) NSDictionary *imagePreprocessingParams; // ivar: _imagePreprocessingParams
@property (retain, nonatomic) NSDictionary *inputDescription; // ivar: _inputDescription
@property (retain, nonatomic) NSArray *inputLayerNames; // ivar: _inputLayerNames
@property (retain, nonatomic) NSString *modelFilePath; // ivar: _modelFilePath
@property (nonatomic) BOOL modelIsEncrypted; // ivar: _modelIsEncrypted
@property (nonatomic) BOOL modelIsMIL; // ivar: _modelIsMIL
@property (nonatomic) BOOL modelIsTrainingProgram; // ivar: _modelIsTrainingProgram
@property (retain, nonatomic) MLVersionInfo *modelVersionInfo; // ivar: _modelVersionInfo
@property (retain, nonatomic) NSString *name; // ivar: _name
@property BOOL ndArrayInterpretation; // ivar: _ndArrayInterpretation
@property (retain, nonatomic) NSDictionary *optionalInputDefaultValues; // ivar: _optionalInputDefaultValues
@property (retain, nonatomic) NSDictionary *optionalInputTypes; // ivar: _optionalInputTypes
@property (retain, nonatomic) NSDictionary *outputDescription; // ivar: _outputDescription
@property (retain, nonatomic) NSArray *outputLayerNames; // ivar: _outputLayerNames
@property (nonatomic) int precision; // ivar: _precision
@property (retain) MLModel *transformDesc; // ivar: _transformDesc
@property (retain, nonatomic) MLNeuralNetworksCompileTimeParams *updatableModelCompiledParams; // ivar: _updatableModelCompiledParams


+(BOOL)readIsClassifier:(*void)arg0 ;
+(id)containerFromCompiledArchive:(*void)arg0 modelVersionInfo:(id)arg1 compilerVersionInfo:(id)arg2 configuration:(id)arg3 error:(*id)arg4 ;
+(id)containerFromCompiledArchiveCommon:(*void)arg0 filename:(id)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 configuration:(id)arg4 error:(*id)arg5 ;
+(id)containerFromFilePath:(id)arg0 inputLayerNames:(id)arg1 outputLayerNames:(id)arg2 parameters:(id)arg3 ;
-(id)initWithFeatureDescriptions:(id)arg0 transformDesc:(id)arg1 outputLayerNames:(id)arg2 classScoreVectorName:(id)arg3 classLabels:(id)arg4 isEncrypted:(BOOL)arg5 modelVersionInfo:(id)arg6 ;
-(id)initWithFeatureDescriptions:(id)arg0 transformDesc:(id)arg1 outputLayerNames:(id)arg2 classScoreVectorName:(id)arg3 classLabels:(id)arg4 isEncrypted:(BOOL)arg5 modelVersionInfo:(id)arg6 compilerVersionInfo:(id)arg7 ;
-(id)initWithFilePath:(id)arg0 inputLayerNames:(id)arg1 outputLayerNames:(id)arg2 parameters:(id)arg3 ;


@end


#endif