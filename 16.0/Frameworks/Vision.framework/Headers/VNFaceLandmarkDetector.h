// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNFACELANDMARKDETECTOR_H
#define VNFACELANDMARKDETECTOR_H

@class NSString;
@protocol VNDetectorKeyProviding;


#import "VNEspressoModelFileBasedDetector.h"

@interface VNFaceLandmarkDetector : VNEspressoModelFileBasedDetector <VNDetectorKeyProviding>

 {
    shared_ptr<vision::mod::LandmarkAttributes> _faceAttributesPupilRefiner;
    BOOL _requireFaceAttributesPupilRefiner;
    BOOL _modelFilesWereMemmapped;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(*void)allLandmarksPointsIndexesForConstellation:(NSUInteger)arg0 ;
+(Class)detectorClassForConfigurationOptions:(id)arg0 error:(*id)arg1 ;
+(id)configurationOptionKeysForDetectorKey;
+(struct _Geometry2D_point2D_ )computeCentroidUsingPoints:(struct _Geometry2D_point2D_ *)arg0 indicies:(*int)arg1 numberOfIndicies:(int)arg2 ;
+(struct _LandmarkDetector_faceMeshParts_ *)landmarksMeshPartsForConstellation:(NSUInteger)arg0 ;
-(BOOL)completeInitializationForSession:(id)arg0 error:(*id)arg1 ;
-(BOOL)detectBlinkOnFaceImage:(struct vImage_Buffer *)arg0 faceObservation:(id)arg1 lumaRec2DInImageCoordinates:(struct _Geometry2D_rect2D_ *)arg2 landmarks:(*void)arg3 warningRecorder:(id)arg4 error:(*id)arg5 ;
-(BOOL)loadRefinersAndReturnError:(*id)arg0 ;
-(BOOL)postprocessLandmarkResultsForLandmarks:(*void)arg0 imageBuffer:(id)arg1 outputFace:(id)arg2 options:(id)arg3 warningRecorder:(id)arg4 error:(*id)arg5 ;
-(id)computeLandmarksScoreOnImage:(struct vImage_Buffer *)arg0 withFaceBoundingBox:(struct _Geometry2D_rect2D_ *)arg1 andLandmarks:(*void)arg2 error:(*id)arg3 ;
-(struct CGRect )normalizedFaceBBoxForLandmarks:(id)arg0 ;
-(void)calculatePupilLocationAndUpdateLandmarkPoints:(*void)arg0 ;
-(void)dealloc;


@end


#endif