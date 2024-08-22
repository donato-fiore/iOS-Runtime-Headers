// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCRFACEDETECTOR_H
#define FCRFACEDETECTOR_H


#import <Foundation/Foundation.h>


@interface FCRFaceDetector : NSObject {
    *void api;
    NSObject *lock;
}




+(id)faceDetector;
+(id)faceDetectorWithOptions:(id)arg0 ;
+(id)fastFaceDetector;
+(id)keypointTrackingDetector;
+(id)preciseFaceDetector;
+(id)standardTrackingDetector;
+(int)findProfileInParameters:(id)arg0 ;
-(float)compareFace:(id)arg0 toFace:(id)arg1 error:(*id)arg2 ;
-(float)interpretAsFloat:(id)arg0 withDefault:(float)arg1 ;
-(id)convertRectsToString:(id)arg0 ;
-(id)createFCRFace:(*void)arg0 image:(id)arg1 ;
-(id)createFCRImage:(struct CGImage *)arg0 ;
-(id)detectFacesInCGImage:(struct CGImage *)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)detectFacesInData:(id)arg0 width:(NSUInteger)arg1 height:(NSUInteger)arg2 bytesPerRow:(NSUInteger)arg3 options:(id)arg4 error:(*id)arg5 ;
-(id)detectFacesInImage:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)extractDetailsForFaces:(id)arg0 inCGImage:(struct CGImage *)arg1 options:(id)arg2 error:(*id)arg3 ;
-(id)extractDetailsForFaces:(id)arg0 inData:(id)arg1 width:(NSUInteger)arg2 height:(NSUInteger)arg3 bytesPerRow:(NSUInteger)arg4 options:(id)arg5 error:(*id)arg6 ;
-(id)extractDetailsForFaces:(id)arg0 inImage:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
-(id)initWithOptions:(id)arg0 ;
-(id)initWithProfile:(int)arg0 parameters:(id)arg1 ;
-(id)parseNumericOrBoolValue:(id)arg0 ;
-(id)parseOption:(id)arg0 value:(id)arg1 ;
-(id)parseRegionOfInterestParam:(id)arg0 ;
-(id)transformROIs:(id)arg0 image:(id)arg1 usingBlock:(id)arg2 ;
-(id)version;
-(struct CGPoint )makeYFlippedPointFromCoord:(struct coord *)arg0 image:(id)arg1 ;
-(struct CGRect )makeYFlippedRectFromRect:(struct CGRect )arg0 image:(id)arg1 ;
-(struct coord )makeYFlippedCoordFromPoint:(struct CGPoint )arg0 image:(id)arg1 ;
-(struct face )createFace:(id)arg0 image:(id)arg1 ;
-(struct image )createImage:(id)arg0 ;
-(void)addLandmarkOfType:(id)arg0 fromMesh:(*void)arg1 indexes:(id)arg2 to:(id)arg3 image:(id)arg4 ;
-(void)createFaceCoreLightApiWithProfile:(int)arg0 parameters:(id)arg1 ;
-(void)dealloc;
-(void)setParam:(id)arg0 toValue:(id)arg1 withDefaultValue:(id)arg2 usingApi:(struct FaceCoreAPI *)arg3 ;
-(void)updateDetectionParamsValues:(id)arg0 image:(id)arg1 ;
-(void)updateExtractionParamsValues:(id)arg0 ;
-(void)updateFCRFace:(id)arg0 from:(*void)arg1 image:(id)arg2 ;


@end


#endif