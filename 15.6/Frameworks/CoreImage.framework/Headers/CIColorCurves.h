// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CICOLORCURVES_H
#define CICOLORCURVES_H

@class NSData;


#import "CIFilter.h"
#import "CIImage.h"
#import "CIVector.h"

@interface CIColorCurves : CIFilter {
    CIImage *_curvesImage;
}


@property (retain, nonatomic) id *inputColorSpace; // ivar: inputColorSpace
@property (copy, nonatomic) NSData *inputCurvesData; // ivar: inputCurvesData
@property (retain, nonatomic) CIVector *inputCurvesDomain; // ivar: inputCurvesDomain
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage


+(id)customAttributes;
-(BOOL)_checkInputs;
-(id)_kernel;
-(id)curvesImage;
-(id)outputImage;
-(void)dealloc;


@end


#endif