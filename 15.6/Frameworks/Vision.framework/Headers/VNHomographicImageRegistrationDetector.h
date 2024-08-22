// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNHOMOGRAPHICIMAGEREGISTRATIONDETECTOR_H
#define VNHOMOGRAPHICIMAGEREGISTRATIONDETECTOR_H



#import "VNDetector.h"

@interface VNHomographicImageRegistrationDetector : VNDetector {
    *void _glContext;
}




-(?)_createN:(?)arg0 CVPixelBuffers:(?)arg1 withPixelFormat:(?)arg2 width:(?)arg3 heighterror;
-(BOOL)_calculateHomographicWarpTransform:(struct ? *)arg0 ofFloatingImagePixelBuffer:(struct __CVBuffer *)arg1 ontoReferenceImagePixelBuffer:(struct __CVBuffer *)arg2 usingImageRegistrationContext:(struct ImageRegistrationCtx_s *)arg3 glContext:(*void)arg4 seededWithPreviousWarpTransform:(struct ? *)arg5 error:(*id)arg6 ;
-(BOOL)completeInitializationForSession:(id)arg0 error:(*id)arg1 ;
-(id)_validatedImageBufferForKey:(id)arg0 inOptions:(id)arg1 error:(*id)arg2 ;
-(id)processWithOptions:(id)arg0 regionOfInterest:(struct CGRect )arg1 warningRecorder:(id)arg2 error:(*id)arg3 progressHandler:(id)arg4 ;
-(struct __CVBuffer *)_createHomographicPixelBufferFromImageBuffer:(id)arg0 cropRect:(struct CGRect )arg1 options:(id)arg2 error:(*id)arg3 ;
-(void)dealloc;


@end


#endif