// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CITONECURVE_H
#define CITONECURVE_H

@protocol _CIFilterProperties;


#import "CIFilter.h"
#import "CIImage.h"
#import "CIVector.h"

@interface CIToneCurve : CIFilter <_CIFilterProperties>

 {
    CIImage *_curveImage;
}


@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (copy, nonatomic) CIVector *inputPoint0; // ivar: inputPoint0
@property (copy, nonatomic) CIVector *inputPoint1; // ivar: inputPoint1
@property (copy, nonatomic) CIVector *inputPoint2; // ivar: inputPoint2
@property (copy, nonatomic) CIVector *inputPoint3; // ivar: inputPoint3
@property (copy, nonatomic) CIVector *inputPoint4; // ivar: inputPoint4


+(id)curveImageFromPoints:(struct CGPoint *)arg0 ;
+(id)curveImageFromPoints:(struct CGPoint *)arg0 linear:(BOOL)arg1 ;
+(id)customAttributes;
+(void)splineCurveTable:(*CGFloat)arg0 tableSize:(int)arg1 gamma:(CGFloat)arg2 from:(struct CGPoint *)arg3 ;
-(BOOL)_isIdentity;
-(id)_initFromProperties:(id)arg0 ;
-(id)_kernel16;
-(id)_outputProperties;
-(id)outputImage;
-(void)dealloc;


@end


#endif