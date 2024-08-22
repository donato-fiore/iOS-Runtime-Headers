// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLNEURALNETWORKENGINE_H
#define MLNEURALNETWORKENGINE_H

@class NSMutableDictionary, NSSet, NSArray, NSString, NSDictionary, EspressoProfilingNetworkInfo;
@protocol MLNeuralNetwork, MLClassifier, MLRegressor, MLModelSpecificationLoader, MLCompiledModelLoader, OS_dispatch_semaphore, OS_dispatch_queue;


#import "MLModel.h"
#import "MLModelMetadata.h"
#import "MLModelDescription.h"
#import "MLVersionInfo.h"
#import "MLPredictionEvent.h"
#import "MLProbabilityDictionary.h"

@interface MLNeuralNetworkEngine : MLModel <MLNeuralNetwork, MLClassifier, MLRegressor, MLModelSpecificationLoader, MLCompiledModelLoader>

 {
    vector<std::map<std::string, espresso_buffer_t *>, std::allocator<std::map<std::string, espresso_buffer_t *>>> _inputBuffers;
    vector<std::map<std::string, espresso_buffer_t *>, std::allocator<std::map<std::string, espresso_buffer_t *>>> _outputBuffers;
    map<std::string, espresso_simple_image_preprocessing_params_t, std::less<std::string>, std::allocator<std::pair<const std::string, espresso_simple_image_preprocessing_params_t>>> _params;
    map<std::string, int, std::less<std::string>, std::allocator<std::pair<const std::string, int>>> _widths;
    map<std::string, int, std::less<std::string>, std::allocator<std::pair<const std::string, int>>> _heights;
    map<std::string, int, std::less<std::string>, std::allocator<std::pair<const std::string, int>>> _ks;
    map<std::string, int, std::less<std::string>, std::allocator<std::pair<const std::string, int>>> _batches;
    map<std::string, int, std::less<std::string>, std::allocator<std::pair<const std::string, int>>> _sequences;
    map<std::string, int, std::less<std::string>, std::allocator<std::pair<const std::string, int>>> _ranks;
    map<std::string, MLOptionalNNInputType, std::less<std::string>, std::allocator<std::pair<const std::string, MLOptionalNNInputType>>> _optionalInputTypes;
    vector<bool, std::allocator<bool>> _bufferAvailable;
    set<std::string, std::less<std::string>, std::allocator<std::string>> _flexibleShapesConfigNamesInNet;
    basic_string<char, std::char_traits<char>, std::allocator<char>> _currentConfigurationName;
    map<std::string, bool, std::less<std::string>, std::allocator<std::pair<const std::string, bool>>> _OutputBlobIsDynamic;
    NSMutableDictionary *_frameSizeToPixelBufferPoolMap;
    *OpaqueVTPixelTransferSession _transferSession;
    NSSet *_directBindingSupportedBlobs;
}


@property (readonly, nonatomic) NSMutableDictionary *blobNameToLastPtrFlags; // ivar: _blobNameToLastPtrFlags
@property (retain) NSObject<OS_dispatch_semaphore> *bufferSemaphore; // ivar: _bufferSemaphore
@property (retain, nonatomic) NSArray *classLabels; // ivar: _classLabels
@property (retain, nonatomic) NSString *classScoreVectorName; // ivar: _classScoreVectorName
@property (nonatomic) *void context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSDictionary *defaultOptionalValues; // ivar: _defaultOptionalValues
@property (readonly, copy) NSString *description;
@property (nonatomic) int engine; // ivar: _engine
@property (retain, nonatomic) NSDictionary *espressoInputShapes; // ivar: _espressoInputShapes
@property (retain, nonatomic) NSDictionary *espressoInputStrides; // ivar: _espressoInputStrides
@property (retain, nonatomic) EspressoProfilingNetworkInfo *espressoProfileInfo; // ivar: _espressoProfileInfo
@property (retain) NSObject<OS_dispatch_queue> *espressoQueue; // ivar: _espressoQueue
@property (nonatomic) BOOL hardwareFallbackDetected; // ivar: _hardwareFallbackDetected
@property (nonatomic) BOOL hasBidirectionalLayer; // ivar: _hasBidirectionalLayer
@property (nonatomic) BOOL hasOptionalInputSequenceConcat; // ivar: _hasOptionalInputSequenceConcat
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDictionary *imagePreprocessingParameters; // ivar: _imagePreprocessingParameters
@property (readonly, retain, nonatomic) NSArray *inputLayers; // ivar: _inputLayers
@property BOOL isANEPathForbidden; // ivar: _isANEPathForbidden
@property (nonatomic) BOOL isEspresoBiasPreprocessingShared; // ivar: _isEspresoBiasPreprocessingShared
@property BOOL isGPUPathForbidden; // ivar: _isGPUPathForbidden
@property (readonly) MLModelMetadata *metadata;
@property (retain, nonatomic) MLModelDescription *modelDescription;
@property (retain, nonatomic) NSString *modelFilePath; // ivar: _modelFilePath
@property (readonly, nonatomic) BOOL modelIsEncrypted; // ivar: _modelIsEncrypted
@property (nonatomic) BOOL modelIsMIL; // ivar: _modelIsMIL
@property (readonly, nonatomic) MLVersionInfo *modelVersionInfo; // ivar: _modelVersionInfo
@property (nonatomic) BOOL ndArrayInterpretation; // ivar: _ndArrayInterpretation
@property (nonatomic) ? network; // ivar: _network
@property (readonly, nonatomic) NSUInteger numInputs; // ivar: _numInputs
@property (readonly, nonatomic) NSUInteger numOutputs; // ivar: _numOutputs
@property (readonly, retain, nonatomic) NSArray *outputLayers; // ivar: _outputLayers
@property (nonatomic) *void plan; // ivar: _plan
@property (nonatomic) int precision; // ivar: _precision
@property (retain, nonatomic) MLPredictionEvent *predictionEvent;
@property (retain) NSObject<OS_dispatch_queue> *predictionsQueue; // ivar: _predictionsQueue
@property (retain, nonatomic) MLProbabilityDictionary *probDict; // ivar: _probDict
@property (nonatomic) int qos; // ivar: _qos
@property (retain) NSObject<OS_dispatch_semaphore> *submitSemaphore; // ivar: _submitSemaphore
@property (readonly) Class superclass;
@property (nonatomic) BOOL usingCPU; // ivar: _usingCPU


+(Class)containerClass;
+(id)loadModelFromCompiledArchive:(*void)arg0 modelVersionInfo:(id)arg1 compilerVersionInfo:(id)arg2 configuration:(id)arg3 error:(*id)arg4 ;
+(id)loadModelFromSpecification:(*void)arg0 configuration:(id)arg1 error:(*id)arg2 ;
+(id)neuralNetworkFromContainer:(id)arg0 configuration:(id)arg1 error:(*id)arg2 ;
+(id)neuralNetworkFromContainer:(id)arg0 error:(*id)arg1 ;
+(int)gpuEngine;
+(int)gpuPrecision;
-(BOOL)_espressoOutputShapeForFeatureName:(id)arg0 matchesShapeOfMLMultiArray:(id)arg1 ;
-(BOOL)_matchEngineToOptions:(id)arg0 error:(*id)arg1 ;
-(BOOL)_setMultiArrayOutputBacking:(id)arg0 forOutputFeatureName:(id)arg1 toEbuf:(struct ? *)arg2 error:(*id)arg3 ;
-(BOOL)_setupContextAndPlanWithConfiguration:(id)arg0 error:(*id)arg1 ;
-(BOOL)_setupContextAndPlanWithConfiguration:(id)arg0 usingCPU:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)_setupContextAndPlanWithConfiguration:(id)arg0 usingCPU:(BOOL)arg1 reshapeWithContainer:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)_setupContextAndPlanWithForceCPU:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)bindDynamicOutputBuffers:(*void)arg0 error:(*id)arg1 ;
-(BOOL)bindInputFeatures:(id)arg0 bufferIndex:(NSUInteger)arg1 cleanUpBlocks:(id)arg2 directBindingRequested:(BOOL)arg3 error:(*id)arg4 ;
-(BOOL)bindInputsAndOutputs:(id)arg0 cleanUpBlocks:(id)arg1 bufferIndex:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)bindMILImageInput:(id)arg0 cleanUpBlocks:(id)arg1 imgFormat:(unsigned int)arg2 directBindingRequested:(BOOL)arg3 pixelBuffer:(struct __CVBuffer *)arg4 ;
-(BOOL)bindNNv1ImageInput:(id)arg0 cleanUpBlocks:(id)arg1 imgFormat:(unsigned int)arg2 directBindingRequested:(BOOL)arg3 pixelBuffer:(struct __CVBuffer *)arg4 ;
-(BOOL)bindOutputBuffers:(*void)arg0 outputBackings:(id)arg1 automaticOutputBackingMode:(id)arg2 directBindingRequested:(BOOL)arg3 directOutputBacked:(id)arg4 error:(*id)arg5 ;
-(BOOL)canSupportDirectOutputBindingForPixelBuffer:(struct __CVBuffer *)arg0 pixelType:(NSUInteger)arg1 ;
-(BOOL)collectParametersFromContainer:(id)arg0 configuration:(id)arg1 error:(*id)arg2 ;
-(BOOL)convertPixelBuffer:(struct __CVBuffer *)arg0 toBGRA:(struct __CVBuffer *)arg1 ;
-(BOOL)copyEbuf:(struct ? *)arg0 ofPixelType:(NSUInteger)arg1 toPixelBuffer:(struct __CVBuffer *)arg2 error:(*id)arg3 ;
-(BOOL)executePlan:(*void)arg0 error:(*id)arg1 ;
-(BOOL)opacifyAndPermutePixelBuffer:(struct __CVBuffer *)arg0 bufferContainsBGRA:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)rebuildPlan:(*id)arg0 ;
-(BOOL)rebuildPlan:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)resetSizes:(id)arg0 error:(*id)arg1 ;
-(BOOL)resetSizesNoAutoRelease:(id)arg0 error:(*id)arg1 ;
-(BOOL)resetSizesWithEspressoConfigurations:(id)arg0 error:(*id)arg1 ;
-(BOOL)sequenceConcatConsumesOptionalInputNamed:(id)arg0 ;
-(BOOL)setEspressoBlobShapes:(*void)arg0 widths:(*void)arg1 heights:(*void)arg2 ks:(*void)arg3 batches:(*void)arg4 sequences:(*void)arg5 ranks:(*void)arg6 error:(*id)arg7 ;
-(BOOL)tryToBindPixelBuffer:(struct __CVBuffer *)arg0 toMILImageInput:(id)arg1 cleanUpBlocks:(id)arg2 ;
-(BOOL)tryToBindPixelBuffer:(struct __CVBuffer *)arg0 toNNv1ImageInput:(id)arg1 cleanUpBlocks:(id)arg2 ;
-(BOOL)tryToSetOutputBacking:(id)arg0 forFeature:(id)arg1 toEbuf:(struct ? *)arg2 reportPointerFlags:(*int)arg3 error:(*id)arg4 ;
-(BOOL)updateDynamicOutputBlobIndicatorCacheAndReturnError:(*id)arg0 ;
-(BOOL)usingEspressoConfigurations;
-(NSUInteger)obtainBuffer;
-(id)addClassifierInformationToOutput:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)availableOutputBlobList;
-(id)classify:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)completeOutputBackings:(id)arg0 automaticOutputBackingMode:(id)arg1 directBindingRequested:(BOOL)arg2 error:(*id)arg3 ;
-(id)convertPredictionToClassifierResult:(id)arg0 withOptions:(id)arg1 error:(*id)arg2 ;
-(id)evaluate:(id)arg0 error:(*id)arg1 ;
-(id)evaluateBatch:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)evaluateInputs:(id)arg0 bufferIndex:(NSUInteger)arg1 options:(id)arg2 error:(*id)arg3 ;
-(id)evaluateInputs:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)executionSchedule;
-(id)imageFeatureValueFromEbuf:(struct ? *)arg0 backingCVPixelBuffer:(struct __CVBuffer *)arg1 description:(id)arg2 error:(*id)arg3 ;
-(id)initWithContainer:(id)arg0 configuration:(id)arg1 error:(*id)arg2 ;
-(id)initWithContainer:(id)arg0 error:(*id)arg1 ;
-(id)multiArrayFeatureValueFromEbuf:(struct ? *)arg0 backingMultiArray:(id)arg1 description:(id)arg2 outputName:(id)arg3 error:(*id)arg4 ;
-(id)parameterValueForKey:(id)arg0 error:(*id)arg1 ;
-(id)populateOutputs:(NSUInteger)arg0 outputBackings:(id)arg1 directBackedOutputs:(id)arg2 error:(*id)arg3 ;
-(id)predictionFromFeatures:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)predictionsFromBatch:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)regress:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)sortBatchByShape:(id)arg0 withMap:(*id)arg1 error:(*id)arg2 ;
-(id)verifyInputs:(id)arg0 error:(*id)arg1 ;
-(int)_espressoDeviceForConfiguration:(id)arg0 error:(*id)arg1 ;
-(int)sequenceNamed:(id)arg0 ;
-(struct __CVBuffer *)_pixelBufferFromEbuf:(struct ? *)arg0 description:(id)arg1 error:(*id)arg2 ;
-(struct __CVBuffer *)copy32BGRAPixelBufferFromPixelBuffer:(struct __CVBuffer *)arg0 ;
-(struct __CVPixelBufferPool *)pixelBufferPoolWithSize:(struct CGSize )arg0 pixelFormat:(unsigned int)arg1 ;
-(void)_deallocContextAndPlan;
-(void)dealloc;
-(void)dumpTestVectorsToPath:(id)arg0 ;
-(void)populateMultiArrayShape:(*id)arg0 strides:(*id)arg1 forEbuf:(struct ? *)arg2 featureDescription:(id)arg3 ndArrayInterpretation:(BOOL)arg4 ;
-(void)releaseBuffer:(NSUInteger)arg0 ;


@end


#endif