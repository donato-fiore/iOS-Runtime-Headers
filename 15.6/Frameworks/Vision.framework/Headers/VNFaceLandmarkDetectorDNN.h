// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNFACELANDMARKDETECTORDNN_H
#define VNFACELANDMARKDETECTORDNN_H



#import "VNFaceLandmarkDetector.h"

@interface VNFaceLandmarkDetectorDNN : VNFaceLandmarkDetector {
    shared_ptr<vision::mod::LandmarkDetectorDNN> _landmarkDetector;
    vector<_Geometry2D_point2D_, std::allocator<_Geometry2D_point2D_>> _landmarkPoints65;
}


@property (readonly) *void landmarkPoints65;


+(*void)_requestConstellationToDetectorConstellationMap;
+(id)configurationOptionKeysForDetectorKey;
+(id)inputBlobNames;
+(id)outputBlobNames;
+(void)recordDefaultConfigurationOptionsInDictionary:(id)arg0 ;
-(BOOL)getConstellation:(*NSUInteger)arg0 cvmlConstellation:(*int)arg1 fromOptions:(id)arg2 error:(*id)arg3 ;
-(BOOL)getLandmarkErrorEstimates:(*void)arg0 forConstellation:(int)arg1 error:(*id)arg2 ;
-(BOOL)getLandmarkOcclusionFlags:(*void)arg0 forConstellation:(int)arg1 error:(*id)arg2 ;
-(BOOL)getLandmarkPoints:(*void)arg0 forConstellation:(int)arg1 error:(*id)arg2 ;
-(BOOL)translateAndNormalizeLandmarkPointsWrtLLCofAlignedFaceBBox:(*void)arg0 imageBuffer:(id)arg1 outputFace:(id)arg2 error:(*id)arg3 ;
-(id)processWithOptions:(id)arg0 regionOfInterest:(struct CGRect )arg1 warningRecorder:(id)arg2 error:(*id)arg3 progressHandler:(id)arg4 ;
-(void)releaseResources;


@end


#endif