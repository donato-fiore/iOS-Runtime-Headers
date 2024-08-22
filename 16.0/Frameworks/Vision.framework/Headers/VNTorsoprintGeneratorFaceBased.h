// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNTORSOPRINTGENERATORFACEBASED_H
#define VNTORSOPRINTGENERATORFACEBASED_H



#import "VNTorsoprintGeneratorBase.h"

@interface VNTorsoprintGeneratorFaceBased : VNTorsoprintGeneratorBase



+(float)magnifiedBBoxScaleFactor;
+(float)minimumTorsoInsideInputImageThreshold;
+(struct CGSize )torsoprintDescriptorSize;
+(struct CGSize )torsoprintInputImageSizeForFaceOrientation:(int)arg0 ;
-(?)createRegionOfInterestCrop:(?)arg0 options:(?)arg1 warningRecorder:(?)arg2 pixelBuffer:(?)arg3 errorprogressHandler;
-(BOOL)_calculateTorsoBBoxFromFaceBBox:(struct CGRect )arg0 insideImageWithSize:(struct CGSize )arg1 faceOrientationRelativeToUpright:(int)arg2 torsoBBox:(struct CGRect *)arg3 error:(*id)arg4 ;
-(id)internalProcessUsingQualityOfServiceClass:(unsigned int)arg0 options:(id)arg1 regionOfInterest:(struct CGRect )arg2 warningRecorder:(id)arg3 error:(*id)arg4 progressHandler:(id)arg5 ;
-(id)processRegionOfInterest:(struct CGRect )arg0 croppedPixelBuffer:(struct __CVBuffer *)arg1 options:(id)arg2 qosClass:(unsigned int)arg3 warningRecorder:(id)arg4 error:(*id)arg5 progressHandler:(id)arg6 ;
-(id)torsoprintForImageBuffer:(struct __CVBuffer *)arg0 requestRevision:(NSUInteger)arg1 error:(*id)arg2 ;


@end


#endif