// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNTORSOPRINTGENERATORFACEBASED_H
#define VNTORSOPRINTGENERATORFACEBASED_H



#import "VNTorsoprintGeneratorBase.h"

@interface VNTorsoprintGeneratorFaceBased : VNTorsoprintGeneratorBase



+(float)magnifiedBBoxScaleFactor;
+(float)minimumTorsoInsideInputImageThreshold;
+(struct CGSize )torsoprintDescriptorSize;
+(struct CGSize )torsoprintInputImageSizeForFaceOrientation:(int)arg0 ;
-(BOOL)_calculateTorsoBBoxFromFaceBBox:(struct CGRect )arg0 insideImageWithSize:(struct CGSize )arg1 faceOrientationRelativeToUpright:(int)arg2 torsoBBox:(struct CGRect *)arg3 error:(*id)arg4 ;
-(id)processWithOptions:(id)arg0 regionOfInterest:(struct CGRect )arg1 warningRecorder:(id)arg2 error:(*id)arg3 progressHandler:(id)arg4 ;
-(id)torsoprintForImageBuffer:(struct __CVBuffer *)arg0 requestRevision:(NSUInteger)arg1 error:(*id)arg2 ;


@end


#endif