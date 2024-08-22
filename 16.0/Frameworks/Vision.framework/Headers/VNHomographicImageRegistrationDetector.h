// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNHOMOGRAPHICIMAGEREGISTRATIONDETECTOR_H
#define VNHOMOGRAPHICIMAGEREGISTRATIONDETECTOR_H



#import "VNDetector.h"

@interface VNHomographicImageRegistrationDetector : VNDetector



-(?)_createN:(?)arg0 CVPixelBuffers:(?)arg1 withPixelFormat:(?)arg2 width:(?)arg3 heighterror;
-(?)createRegionOfInterestCrop:(?)arg0 options:(?)arg1 warningRecorder:(?)arg2 pixelBuffer:(?)arg3 errorprogressHandler;
-(BOOL)_calculateHomographicWarpTransform:(struct ? *)arg0 ofFloatingImagePixelBuffer:(struct __CVBuffer *)arg1 ontoReferenceImagePixelBuffer:(struct __CVBuffer *)arg2 usingImageRegistrationContext:(struct ImageRegistrationCtx_s *)arg3 seededWithPreviousWarpTransform:(struct ? *)arg4 error:(*id)arg5 ;
-(BOOL)completeInitializationForSession:(id)arg0 error:(*id)arg1 ;
-(id)_validatedImageBufferForKey:(id)arg0 inOptions:(id)arg1 error:(*id)arg2 ;
-(id)processRegionOfInterest:(struct CGRect )arg0 croppedPixelBuffer:(struct __CVBuffer *)arg1 options:(id)arg2 qosClass:(unsigned int)arg3 warningRecorder:(id)arg4 error:(*id)arg5 progressHandler:(id)arg6 ;
-(struct __CVBuffer *)_createHomographicPixelBufferFromImageBuffer:(id)arg0 cropRect:(struct CGRect )arg1 options:(id)arg2 error:(*id)arg3 ;


@end


#endif