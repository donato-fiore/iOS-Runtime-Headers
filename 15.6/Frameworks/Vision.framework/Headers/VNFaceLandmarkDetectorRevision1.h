// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNFACELANDMARKDETECTORREVISION1_H
#define VNFACELANDMARKDETECTORREVISION1_H



#import "VNFaceLandmarkDetector.h"

@interface VNFaceLandmarkDetectorRevision1 : VNFaceLandmarkDetector {
    shared_ptr<vision::mod::LandmarkDetectorERT> mFaceLandmarkAlgorithmImpl;
    shared_ptr<vision::mod::LandmarkDetectorERT> mFaceLandmarkMouthRefinerImpl;
    shared_ptr<vision::mod::LandmarkDetectorERT> mFaceLandmarkRightEyeRefinerImpl;
    shared_ptr<vision::mod::LandmarkDetectorERT> mFaceLandmarkLeftEyeRefinerImpl;
    BOOL _modelFilesWereMemmapped;
}




+(id)configurationOptionKeysForDetectorKey;
+(id)espressoModelFileNameForConfigurationOptions:(id)arg0 ;
+(id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg0 ;
+(void)dumpDebugIntermediatesWithImageBuffer:(id)arg0 lumaIntermediate:(struct __CVBuffer *)arg1 alignedBBoxInLumaIntermediateCoordinates:(struct _Geometry2D_rect2D_ )arg2 meanShapeInLumaIntermediate:(*void)arg3 landmarkPointsInLumaIntermediate:(*void)arg4 ;
-(BOOL)_loadEspressoModelWithConfigurationOptions:(id)arg0 error:(*id)arg1 ;
-(BOOL)completeInitializationForSession:(id)arg0 error:(*id)arg1 ;
-(BOOL)loadRefinersAndReturnError:(*id)arg0 ;
-(NSUInteger)cascadeStepCountInOriginalModel;
-(NSUInteger)cascadeStepCountLoaded;
-(id)processWithOptions:(id)arg0 regionOfInterest:(struct CGRect )arg1 warningRecorder:(id)arg2 error:(*id)arg3 progressHandler:(id)arg4 ;
-(void)dealloc;


@end


#endif