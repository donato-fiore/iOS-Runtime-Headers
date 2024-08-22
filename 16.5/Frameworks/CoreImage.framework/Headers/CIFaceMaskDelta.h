// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CIFACEMASKDELTA_H
#define CIFACEMASKDELTA_H

@class NSNumber, NSDictionary;


#import "CIFilter.h"
#import "CIVector.h"
#import "CIImage.h"

@interface CIFaceMaskDelta : CIFilter

@property (copy, nonatomic) NSNumber *inputAdditiveMaxBlur; // ivar: inputAdditiveMaxBlur
@property (copy, nonatomic) NSNumber *inputApertureScaling; // ivar: inputApertureScaling
@property (copy, nonatomic) NSNumber *inputDistanceAdd; // ivar: inputDistanceAdd
@property (copy, nonatomic) CIVector *inputFacesCenterX; // ivar: inputFacesCenterX
@property (copy, nonatomic) CIVector *inputFacesCenterY; // ivar: inputFacesCenterY
@property (copy, nonatomic) CIVector *inputFacesChinX; // ivar: inputFacesChinX
@property (copy, nonatomic) CIVector *inputFacesChinY; // ivar: inputFacesChinY
@property (copy, nonatomic) CIVector *inputFacesLeftEyeX; // ivar: inputFacesLeftEyeX
@property (copy, nonatomic) CIVector *inputFacesLeftEyeY; // ivar: inputFacesLeftEyeY
@property (copy, nonatomic) CIVector *inputFacesRightEyeX; // ivar: inputFacesRightEyeX
@property (copy, nonatomic) CIVector *inputFacesRightEyeY; // ivar: inputFacesRightEyeY
@property (copy, nonatomic) CIVector *inputFocusRect; // ivar: inputFocusRect
@property (retain, nonatomic) CIVector *inputImageSize; // ivar: inputImageSize
@property (copy, nonatomic) CIVector *inputK0; // ivar: inputK0
@property (copy, nonatomic) CIVector *inputK1; // ivar: inputK1
@property (copy, nonatomic) CIVector *inputK2; // ivar: inputK2
@property (copy, nonatomic) CIVector *inputK3; // ivar: inputK3
@property (copy, nonatomic) NSNumber *inputMaxBlur; // ivar: inputMaxBlur
@property (retain, nonatomic) CIImage *inputParameterImage; // ivar: inputParameterImage
@property (copy, nonatomic) NSNumber *inputSubjectDistanceMaximumFocusDistance; // ivar: inputSubjectDistanceMaximumFocusDistance
@property (copy, nonatomic) NSNumber *inputSubjectDistanceMinimumFocusDistance; // ivar: inputSubjectDistanceMinimumFocusDistance
@property (copy, nonatomic) NSNumber *inputSubjectDistanceOffset; // ivar: inputSubjectDistanceOffset
@property (copy, nonatomic) NSNumber *inputSubjectDistanceScalingFactor; // ivar: inputSubjectDistanceScalingFactor
@property (copy, nonatomic) NSNumber *inputSubtractiveMaxBlur; // ivar: inputSubtractiveMaxBlur
@property (copy, nonatomic) NSDictionary *inputTuningParameters; // ivar: inputTuningParameters


-(BOOL)_isValidFace:(unsigned int)arg0 ;
-(CGFloat)_landmarksToDist:(unsigned int)arg0 minimumDistance:(float)arg1 maximumDistance:(float)arg2 scalingFactor:(float)arg3 offset:(float)arg4 ;
-(float)distanceToAdd;
-(id)outputImage;
-(unsigned int)findMostProminentFace;


@end


#endif