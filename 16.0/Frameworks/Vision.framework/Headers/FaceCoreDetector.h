// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FACECOREDETECTOR_H
#define FACECOREDETECTOR_H


#import <Foundation/Foundation.h>


@interface FaceCoreDetector : NSObject {
    unique_ptr<apple::vision::libraries::facecore::FaceCoreAPI, std::default_delete<apple::vision::libraries::facecore::FaceCoreAPI>> _api;
}




+(float)_interpretAsFloat:(id)arg0 withDefault:(float)arg1 ;
+(id)_convertRectsToString:(id)arg0 ;
+(id)_createFCRFaceFromFace:(*void)arg0 image:(id)arg1 ;
+(id)_parseNumericOrBoolValue:(id)arg0 ;
+(id)_parseOption:(id)arg0 value:(id)arg1 ;
+(id)_parseRegionOfInterestParam:(id)arg0 ;
+(id)_transformROIs:(id)arg0 image:(id)arg1 usingBlock:(id)arg2 ;
+(id)faceDetector;
+(id)faceDetectorWithOptions:(id)arg0 ;
+(id)fastFaceDetector;
+(id)keypointTrackingDetector;
+(id)preciseFaceDetector;
+(id)standardTrackingDetector;
+(int)findProfileInParameters:(id)arg0 ;
+(struct CGPoint )_makeYFlippedPointFromCoord:(struct coord *)arg0 image:(id)arg1 ;
+(struct CGRect )_makeYFlippedRectFromRect:(struct CGRect )arg0 image:(id)arg1 ;
+(struct Face )_createFaceFromFCRFace:(id)arg0 image:(id)arg1 ;
+(struct coord )_makeYFlippedCoordFromPoint:(struct CGPoint )arg0 image:(id)arg1 ;
+(struct image )_createImage:(id)arg0 ;
+(void)_addLandmarkOfType:(id)arg0 fromMesh:(*void)arg1 indexes:(id)arg2 to:(id)arg3 image:(id)arg4 ;
+(void)_updateFCRFace:(id)arg0 fromFace:(*void)arg1 image:(id)arg2 ;
-(id)detectFacesInImage:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)extractDetailsForFaces:(id)arg0 inImage:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
-(id)initWithOptions:(id)arg0 ;
-(id)initWithProfile:(int)arg0 parameters:(id)arg1 ;
-(id)version;
-(void)_createFaceCoreLightApiWithProfile:(int)arg0 parameters:(id)arg1 ;
-(void)_setParam:(id)arg0 toValue:(id)arg1 withDefaultValue:(id)arg2 ;
-(void)_updateDetectionParamsValues:(id)arg0 ;
-(void)_updateExtractionParamsValues:(id)arg0 ;


@end


#endif