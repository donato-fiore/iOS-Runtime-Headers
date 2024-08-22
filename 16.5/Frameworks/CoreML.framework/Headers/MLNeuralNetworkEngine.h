// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLNEURALNETWORKENGINE_H
#define MLNEURALNETWORKENGINE_H

@class NSMutableDictionary, NSString, NSArray, NSDictionary, EspressoProfilingNetworkInfo;
@protocol MLNeuralNetwork, MLClassifier, MLRegressor, MLCompiledModelLoader, OS_dispatch_semaphore, OS_dispatch_queue;


#import "MLModel.h"
#import "MLCompilerNeuralNetworkOutput.h"
#import "MLVersionInfo.h"
#import "MLModelMetadata.h"
#import "MLModelDescription.h"

@interface MLNeuralNetworkEngine : MLModel <MLNeuralNetwork, MLClassifier, MLRegressor, MLCompiledModelLoader>

 {
    vector<std::map<std::string, espresso_buffer_t *>, std::allocator<std::map<std::string, espresso_buffer_t *>>> _inputBuffers;
    vector<std::map<std::string, espresso_buffer_t *>, std::allocator<std::map<std::string, espresso_buffer_t *>>> _outputBuffers;
    map<std::string, Espresso::vimage2espresso_param, std::less<std::string>, std::allocator<std::pair<const std::string, Espresso::vimage2espresso_param>>> _params;
    map<std::string, int, std::less<std::string>, std::allocator<std::pair<const std::string, int>>> _widths;
    map<std::string, int, std::less<std::string>, std::allocator<std::pair<const std::string, int>>> _heights;
    map<std::string, int, std::less<std::string>, std::allocator<std::pair<const std::string, int>>> _ks;
    map<std::string, int, std::less<std::string>, std::allocator<std::pair<const std::string, int>>> _batches;
    map<std::string, int, std::less<std::string>, std::allocator<std::pair<const std::string, int>>> _sequences;
    map<std::string, int, std::less<std::string>, std::allocator<std::pair<const std::string, int>>> _ranks;
    vector<bool, std::allocator<bool>> _bufferAvailable;
    set<std::string, std::less<std::string>, std::allocator<std::string>> _flexibleShapesConfigNamesInNet;
    basic_string<char, std::char_traits<char>, std::allocator<char>> _currentConfigurationName;
    map<std::string, bool, std::less<std::string>, std::allocator<std::pair<const std::string, bool>>> _OutputBlobIsDynamic;
    NSMutableDictionary *_pixelBufferPoolCache;
    *OpaqueVTPixelTransferSession _transferSession;
    MLCompilerNeuralNetworkOutput *_compilerOutput;
}


@property (retain, nonatomic) NSString *activeFunction; // ivar: _activeFunction
@property (retain) NSObject<OS_dispatch_semaphore> *bufferSemaphore; // ivar: _bufferSemaphore
@property (retain, nonatomic) NSArray *classLabels; // ivar: _classLabels
@property (retain, nonatomic) NSString *classScoreVectorName; // ivar: _classScoreVectorName
@property (readonly, retain, nonatomic) MLVersionInfo *compilerVersionInfo; // ivar: _compilerVersionInfo
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
@property (readonly, nonatomic) NSMutableDictionary *inputBlobNameToLastBackingMode; // ivar: _inputBlobNameToLastBackingMode
@property (readonly, retain, nonatomic) NSArray *inputLayers; // ivar: _inputLayers
@property BOOL isANEPathForbidden; // ivar: _isANEPathForbidden
@property (nonatomic) BOOL isEspressoBiasPreprocessingShared; // ivar: _isEspressoBiasPreprocessingShared
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
@property (readonly, nonatomic) NSDictionary *optionalInputTypes; // ivar: _optionalInputTypes
@property (readonly, nonatomic) NSMutableDictionary *outputBlobNameToLastBackingMode; // ivar: _outputBlobNameToLastBackingMode
@property (readonly, retain, nonatomic) NSArray *outputLayers; // ivar: _outputLayers
@property (nonatomic) *void plan; // ivar: _plan
@property (nonatomic) int precision; // ivar: _precision
@property (retain) NSObject<OS_dispatch_queue> *predictionsQueue; // ivar: _predictionsQueue
@property (retain, nonatomic) id *probabilityDictionarySharedKeySet; // ivar: _probabilityDictionarySharedKeySet
@property (nonatomic) int qos; // ivar: _qos
@property (retain) NSObject<OS_dispatch_semaphore> *submitSemaphore; // ivar: _submitSemaphore
@property (readonly) Class superclass;
@property (nonatomic) BOOL usingCPU; // ivar: _usingCPU


+(Class)containerClass;
+(id)loadModelFromCompiledArchive:(*void)arg0 modelVersionInfo:(id)arg1 compilerVersionInfo:(id)arg2 configuration:(id)arg3 error:(*id)arg4 ;
+(id)neuralNetworkFromContainer:(id)arg0 configuration:(id)arg1 error:(*id)arg2 ;
+(id)neuralNetworkFromContainer:(id)arg0 error:(*id)arg1 ;
+(int)gpuEngine;
+(int)gpuPrecision;
-(BOOL)_addCompiledNetworkOrProgramToPlan:(*void)arg0 error:(*id)arg1 ;
-(BOOL)_addNetworkToPlan:(*void)arg0 error:(*id)arg1 ;
-(BOOL)_espressoOutputShapeForFeatureName:(id)arg0 matchesShapeOfMLMultiArray:(id)arg1 ;
-(BOOL)_matchEngineToOptions:(id)arg0 error:(*id)arg1 ;
-(BOOL)_setMultiArrayOutputBacking:(id)arg0 forOutputFeatureName:(id)arg1 toEbuf:(struct ? *)arg2 error:(*id)arg3 ;
-(BOOL)_setMultipleBuffersOnPlan:(*void)arg0 error:(*id)arg1 ;
-(BOOL)_setupContextAndPlanWithConfiguration:(id)arg0 error:(*id)arg1 ;
-(BOOL)_setupContextAndPlanWithConfiguration:(id)arg0 usingCPU:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)_setupContextAndPlanWithConfiguration:(id)arg0 usingCPU:(BOOL)arg1 reshapeWithContainer:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)_setupContextAndPlanWithForceCPU:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)bindDirectlyInputFeatureNamed:(id)arg0 pixelBuffer:(struct __CVBuffer *)arg1 cleanUpBlocks:(id)arg2 error:(*id)arg3 ;
-(BOOL)bindDynamicOutputBuffers:(*void)arg0 error:(*id)arg1 ;
-(BOOL)bindInputFeatureNamed:(id)arg0 convertingMultiArray:(id)arg1 bufferIndex:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)bindInputFeatureNamed:(id)arg0 featureValue:(id)arg1 bufferIndex:(NSUInteger)arg2 cleanUpBlocks:(id)arg3 error:(*id)arg4 ;
-(BOOL)bindInputFeatureNamed:(id)arg0 pixelBuffer:(struct __CVBuffer *)arg1 cleanUpBlocks:(id)arg2 error:(*id)arg3 ;
-(BOOL)bindInputFeatures:(id)arg0 bufferIndex:(NSUInteger)arg1 cleanUpBlocks:(id)arg2 error:(*id)arg3 ;
-(BOOL)bindInputsAndOutputs:(id)arg0 cleanUpBlocks:(id)arg1 bufferIndex:(NSUInteger)arg2 options:(id)arg3 error:(*id)arg4 ;
-(BOOL)bindOutputBuffers:(*void)arg0 outputBackings:(id)arg1 automaticOutputBackingMode:(id)arg2 directlyBoundOutputFeatureNames:(id)arg3 error:(*id)arg4 ;
-(BOOL)collectParametersFromContainer:(id)arg0 configuration:(id)arg1 error:(*id)arg2 ;
-(BOOL)copyEbuf:(struct ? *)arg0 ofPixelType:(NSUInteger)arg1 toPixelBuffer:(struct __CVBuffer *)arg2 error:(*id)arg3 ;
-(BOOL)copyImagePreprocessingParametersTo:(*void)arg0 error:(*id)arg1 ;
-(BOOL)executePlan:(*void)arg0 error:(*id)arg1 ;
-(BOOL)lockPixelBuffer:(struct __CVBuffer *)arg0 cleanUpBlocks:(id)arg1 error:(*id)arg2 ;
-(BOOL)opacifyAndPermutePixelBuffer:(struct __CVBuffer *)arg0 bufferContainsBGRA:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)rebuildPlan:(*id)arg0 ;
-(BOOL)rebuildPlan:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)resetSizes:(id)arg0 error:(*id)arg1 ;
-(BOOL)resetSizesNoAutoRelease:(id)arg0 error:(*id)arg1 ;
-(BOOL)resetSizesWithEspressoConfigurations:(id)arg0 error:(*id)arg1 ;
-(BOOL)sequenceConcatConsumesOptionalInputNamed:(id)arg0 ;
-(BOOL)setEspressoBlobShapes:(*void)arg0 widths:(*void)arg1 heights:(*void)arg2 ks:(*void)arg3 batches:(*void)arg4 sequences:(*void)arg5 ranks:(*void)arg6 error:(*id)arg7 ;
-(BOOL)transferOneComponent16HalfPixelBuffer:(struct __CVBuffer *)arg0 toPixelBuffer:(struct __CVBuffer *)arg1 withScale:(float)arg2 bias:(float)arg3 ;
-(BOOL)transferPixelBuffer:(struct __CVBuffer *)arg0 toPixelBuffer:(struct __CVBuffer *)arg1 ;
-(BOOL)tryToSetOutputBacking:(id)arg0 forFeatureName:(id)arg1 toEbuf:(struct ? *)arg2 reportPointerFlags:(*int)arg3 error:(*id)arg4 ;
-(BOOL)updateDynamicOutputBlobIndicatorCacheAndReturnError:(*id)arg0 ;
-(BOOL)usingEspressoConfigurations;
-(BOOL)verifyMultiArrayOutputBacking:(id)arg0 forFeature:(id)arg1 error:(*id)arg2 ;
-(BOOL)verifyOutputBacking:(id)arg0 forFeature:(id)arg1 error:(*id)arg2 ;
-(BOOL)verifyPixelBufferOutputBacking:(struct __CVBuffer *)arg0 forFeature:(id)arg1 error:(*id)arg2 ;
-(NSInteger)inputBindStateForFeatureValue:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)obtainBuffer;
-(NSUInteger)supportFromEspressoLayerInfo:(id)arg0 ;
-(NSUInteger)supportFromEspressoPlatform:(int)arg0 ;
-(id)addClassifierInformationToOutput:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)availableOutputBlobList;
-(id)classify:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)completeOutputBackings:(id)arg0 automaticOutputBackingMode:(id)arg1 error:(*id)arg2 ;
-(id)convertPredictionToClassifierResult:(id)arg0 withOptions:(id)arg1 error:(*id)arg2 ;
-(id)evaluate:(id)arg0 error:(*id)arg1 ;
-(id)evaluateBatch:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)evaluateInputs:(id)arg0 bufferIndex:(NSUInteger)arg1 options:(id)arg2 error:(*id)arg3 ;
-(id)evaluateInputs:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)evaluateInputs:(id)arg0 options:(id)arg1 verifyInputs:(BOOL)arg2 error:(*id)arg3 ;
-(id)executionSchedule;
-(id)imageFeatureValueFromEbuf:(struct ? *)arg0 backingCVPixelBuffer:(struct __CVBuffer *)arg1 description:(id)arg2 error:(*id)arg3 ;
-(id)imageFeatureValueFromPixelBuffer:(struct __CVBuffer *)arg0 usingPixelFormat:(unsigned int)arg1 ;
-(id)initWithContainer:(id)arg0 configuration:(id)arg1 error:(*id)arg2 ;
-(id)initWithContainer:(id)arg0 error:(*id)arg1 ;
-(id)multiArrayFeatureValueFromEbuf:(struct ? *)arg0 backingMultiArray:(id)arg1 description:(id)arg2 outputName:(id)arg3 error:(*id)arg4 ;
-(id)outputBackingMultiArrayForFeatureName:(id)arg0 ;
-(id)parameterValueForKey:(id)arg0 error:(*id)arg1 ;
-(id)pixelBufferBackedMultiArrayWithShape:(id)arg0 ;
-(id)populateOutputs:(NSUInteger)arg0 outputBackings:(id)arg1 directlyBoundOutputFeatureNames:(id)arg2 error:(*id)arg3 ;
-(id)predictionFromFeatures:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)predictionsFromBatch:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)regress:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)sortBatchByShape:(id)arg0 withMap:(*id)arg1 error:(*id)arg2 ;
-(id)verifyInputs:(id)arg0 error:(*id)arg1 ;
-(int)_espressoDeviceForConfiguration:(id)arg0 error:(*id)arg1 ;
-(int)sequenceNamed:(id)arg0 ;
-(struct __CVBuffer *)_pixelBufferFromEbuf:(struct ? *)arg0 description:(id)arg1 error:(*id)arg2 ;
-(struct __CVBuffer *)copyPixelBufferByApplyingImagePreprocessing:(struct vimage2espresso_param *)arg0 toPixelBuffer:(struct __CVBuffer *)arg1 ;
-(struct __CVBuffer *)copyPixelBufferByApplyingImagePreprocessingForFeatureNamed:(id)arg0 toPixelBuffer:(struct __CVBuffer *)arg1 ;
-(struct __CVBuffer *)copyPixelBufferFromPixelBuffer:(struct __CVBuffer *)arg0 usingPixelFormat:(unsigned int)arg1 ;
-(struct __CVBuffer *)createPixelBufferWithSize:(struct CGSize )arg0 pixelFormat:(unsigned int)arg1 ;
-(struct __CVBuffer *)pixelBufferFromOutputBacking:(id)arg0 forFeature:(id)arg1 ;
-(struct __CVPixelBufferPool *)pixelBufferPoolWithSize:(struct CGSize )arg0 pixelFormat:(unsigned int)arg1 ;
-(void)_deallocContextAndPlan;
-(void)dealloc;
-(void)dumpTestVectorsToPath:(id)arg0 ;
-(void)enableInstrumentsTracing;
-(void)populateMultiArrayShape:(*id)arg0 strides:(*id)arg1 forEbuf:(struct ? *)arg2 featureDescription:(id)arg3 ndArrayInterpretation:(BOOL)arg4 ;
-(void)prepareBlobNamed:(id)arg0 forNewBlobBackingMode:(NSInteger)arg1 bindMode:(int)arg2 ;
-(void)releaseBuffer:(NSUInteger)arg0 ;


@end


#endif