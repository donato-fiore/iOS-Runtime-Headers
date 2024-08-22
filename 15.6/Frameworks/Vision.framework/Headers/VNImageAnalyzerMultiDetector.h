// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNIMAGEANALYZERMULTIDETECTOR_H
#define VNIMAGEANALYZERMULTIDETECTOR_H

@class NSMutableDictionary;


#import "VNDetector.h"
#import "_VNImageAnalyzerMultiDetectorSceneOperationPointsCache.h"

@interface VNImageAnalyzerMultiDetector : VNDetector {
    NSUInteger _model;
    ? _defaultSceneClassificationHierarchicalModel;
    unique_ptr<vision::mod::ImageAnalyzer, std::default_delete<vision::mod::ImageAnalyzer>> _imageAnalyzer;
    map<unsigned long, std::shared_ptr<std::vector<std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>>, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, std::shared_ptr<std::vector<std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>>>>> _imageAnalyzerJunkCustomClassifiers;
    unique_ptr<vision::mod::ImageAnalyzer_PCA, std::default_delete<vision::mod::ImageAnalyzer_PCA>> _imageAnalyzerPCA256;
    _VNImageAnalyzerMultiDetectorSceneOperationPointsCache *_operationPointsCache;
    map<unsigned long, std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>>> _VNVYvzEtX1JlUdu8xx5qhDICustomClassifiers;
    map<unsigned long, std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>>> _potentialLandmarkCustomClassifiers;
    map<unsigned long, std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>>> _VN5kJNH3eYuyaLxNpZr5Z7ziCustomClassifiers;
    map<unsigned long, std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>>> _significantEventCustomClassifiers;
    vector<std::tuple<std::string, float, bool>, std::allocator<std::tuple<std::string, float, bool>>> _cachedAllSceneClassificationsFromLastAnalysis;
    NSMutableDictionary *_cachedSaliencyHeatmapBoundingBoxGenerators;
}


@property (readonly) BOOL hasObjDetNet;
@property (readonly) BOOL hasSliderNet;


+(?)createHierarchicalModelForMultiDetectorModelerror;
+(Class)detectorClassForConfigurationOptions:(id)arg0 error:(*id)arg1 ;
+(NSUInteger)modelForRequestClass:(Class)arg0 revision:(NSUInteger)arg1 ;
+(id)_analyzerNameForModel:(NSUInteger)arg0 configuredWithOptions:(id)arg1 ;
+(id)_inputImageBlobNameForModel:(NSUInteger)arg0 configuredWithOptions:(id)arg1 ;
+(id)blacklistForModel:(NSUInteger)arg0 ;
+(id)configurationOptionKeysForDetectorKey;
+(id)supportedImageSizeSetForOptions:(id)arg0 error:(*id)arg1 ;
+(void)recordDefaultConfigurationOptionsInDictionary:(id)arg0 ;
-(BOOL)canBehaveAsDetectorOfClass:(Class)arg0 withConfiguration:(id)arg1 ;
-(BOOL)completeInitializationForSession:(id)arg0 error:(*id)arg1 ;
-(BOOL)shouldBeReplacedByDetectorOfClass:(Class)arg0 withConfiguration:(id)arg1 ;
-(BOOL)warmUpSession:(id)arg0 withOptions:(id)arg1 error:(*id)arg2 ;
-(id)_junkObservationsForLastAnalysisWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)allJunkIdentifiersForOptions:(id)arg0 error:(*id)arg1 ;
-(id)allRecognizedObjectsIdentifiersWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)allSceneIdentifiersWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)allSignificantEventIdentifiersWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)allVN5kJNH3eYuyaLxNpZr5Z7ziIdentifiersWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)initWithConfigurationOptions:(id)arg0 ;
-(id)processWithOptions:(id)arg0 regionOfInterest:(struct CGRect )arg1 warningRecorder:(id)arg2 error:(*id)arg3 progressHandler:(id)arg4 ;
-(id)sceneLabelOperationPointsForOriginatingRequestSpecifier:(id)arg0 error:(*id)arg1 ;


@end


#endif