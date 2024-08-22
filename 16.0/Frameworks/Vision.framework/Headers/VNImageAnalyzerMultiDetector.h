// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNIMAGEANALYZERMULTIDETECTOR_H
#define VNIMAGEANALYZERMULTIDETECTOR_H

@class NSMutableDictionary;


#import "VNDetector.h"
#import "_VNImageAnalyzerMultiDetectorSceneOperationPointsCache.h"

@interface VNImageAnalyzerMultiDetector : VNDetector {
    NSUInteger _model;
    ? _defaultSceneClassificationHierarchicalModel;
    shared_ptr<vision::mod::ImageAnalyzer> _imageAnalyzer;
    map<unsigned long, std::shared_ptr<std::vector<std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>>, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, std::shared_ptr<std::vector<std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>>>>> _imageAnalyzerJunkCustomClassifiers;
    unique_ptr<vision::mod::ImageAnalyzer_PCA, std::default_delete<vision::mod::ImageAnalyzer_PCA>> _imageAnalyzerPCA256;
    _VNImageAnalyzerMultiDetectorSceneOperationPointsCache *_operationPointsCache;
    map<unsigned long, std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>>> _VNVYvzEtX1JlUdu8xx5qhDICustomClassifiers;
    map<unsigned long, std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>>> _potentialLandmarkCustomClassifiers;
    map<unsigned long, std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>>> _VN5kJNH3eYuyaLxNpZr5Z7ziCustomClassifiers;
    map<unsigned long, std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>>> _significantEventCustomClassifiers;
    map<unsigned long, std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>>> _cityNatureGatingCustomClassifiers;
    os_unfair_lock_s _cachedAllSceneClassificationsFromLastAnalysisAccessLock;
    shared_ptr<const std::vector<std::tuple<std::string, float, bool>>> _cachedAllSceneClassificationsFromLastAnalysis;
    NSMutableDictionary *_cachedSaliencyHeatmapBoundingBoxGenerators;
    BOOL _hasherInitialized;
}


@property (readonly) BOOL hasObjDetNet;
@property (readonly) BOOL hasSliderNet;


+(?)createHierarchicalModelForMultiDetectorModelerror;
+(BOOL)_getAnalyzerName:(*id)arg0 version:(*id)arg1 forModel:(NSUInteger)arg2 configuredWithOptions:(id)arg3 error:(*id)arg4 ;
+(Class)detectorClassForConfigurationOptions:(id)arg0 error:(*id)arg1 ;
+(NSUInteger)modelForRequestClass:(Class)arg0 revision:(NSUInteger)arg1 ;
+(id)_inputImageBlobNameForModel:(NSUInteger)arg0 configuredWithOptions:(id)arg1 ;
+(id)allPhotosAdjustmentKeysForOptions:(id)arg0 error:(*id)arg1 ;
+(id)availableVNInferenceNetworkIdentifierSceneNetObjDetNetSliderNetVersions;
+(id)availableVNInferenceNetworkIdentifierSceneNetVersions;
+(id)blacklistForModel:(NSUInteger)arg0 ;
+(id)configurationOptionKeysForDetectorKey;
+(id)inferenceNetworkIdentifiers;
+(id)primaryInferenceNetworkDescriptorForVNInferenceNetworkIdentifierSceneNetObjDetNetSliderNet_3_0_0;
+(id)primaryInferenceNetworkDescriptorForVNInferenceNetworkIdentifierSceneNet_3_0_0;
+(id)primaryInferenceNetworkDescriptorForVNInferenceNetworkIdentifierSceneNet_5_10_0;
+(id)supportedImageSizeSetForOptions:(id)arg0 error:(*id)arg1 ;
+(void)recordDefaultConfigurationOptionsInDictionary:(id)arg0 ;
-(?)createRegionOfInterestCrop:(?)arg0 options:(?)arg1 warningRecorder:(?)arg2 pixelBuffer:(?)arg3 errorprogressHandler;
-(BOOL)canBehaveAsDetectorOfClass:(Class)arg0 withConfiguration:(id)arg1 ;
-(BOOL)completeInitializationForSession:(id)arg0 error:(*id)arg1 ;
-(BOOL)shouldBeReplacedByDetectorOfClass:(Class)arg0 withConfiguration:(id)arg1 ;
-(BOOL)warmUpSession:(id)arg0 withOptions:(id)arg1 error:(*id)arg2 ;
-(NSUInteger)signPostAdditionalParameter;
-(id)_junkObservationsForLastAnalysisWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)_processFullImagePixelBuffer:(struct __CVBuffer *)arg0 options:(id)arg1 regionOfInterest:(struct CGRect )arg2 warningRecorder:(id)arg3 error:(*id)arg4 progressHandler:(id)arg5 ;
-(id)allCityNatureIdentifiersWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)allJunkIdentifiersForOptions:(id)arg0 error:(*id)arg1 ;
-(id)allRecognizedObjectsIdentifiersWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)allSceneIdentifiersWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)allSignificantEventIdentifiersWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)allVN5kJNH3eYuyaLxNpZr5Z7ziIdentifiersWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)initWithConfigurationOptions:(id)arg0 ;
-(id)internalProcessUsingQualityOfServiceClass:(unsigned int)arg0 options:(id)arg1 regionOfInterest:(struct CGRect )arg2 warningRecorder:(id)arg3 error:(*id)arg4 progressHandler:(id)arg5 ;
-(id)processRegionOfInterest:(struct CGRect )arg0 croppedPixelBuffer:(struct __CVBuffer *)arg1 options:(id)arg2 qosClass:(unsigned int)arg3 warningRecorder:(id)arg4 error:(*id)arg5 progressHandler:(id)arg6 ;
-(id)sceneLabelOperationPointsForOriginatingRequestSpecifier:(id)arg0 error:(*id)arg1 ;


@end


#endif