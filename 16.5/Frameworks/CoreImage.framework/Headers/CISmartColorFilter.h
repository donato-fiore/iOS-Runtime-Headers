// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CISMARTCOLORFILTER_H
#define CISMARTCOLORFILTER_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"
#import "CIContext.h"

@interface CISmartColorFilter : CIFilter {
    CIImage *_cubeImage;
    CIContext *_cubeContext;
}


@property (retain, nonatomic) NSNumber *inputCast; // ivar: inputCast
@property (retain, nonatomic) NSNumber *inputContrast; // ivar: inputContrast
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) NSNumber *inputUseCube; // ivar: inputUseCube
@property (retain, nonatomic) id *inputUseCubeColorSpace; // ivar: inputUseCubeColorSpace
@property (retain, nonatomic) NSNumber *inputVibrancy; // ivar: inputVibrancy


+(id)customAttributes;
-(BOOL)_isIdentity;
-(id)_kernelCNeg;
-(id)_kernelCPos;
-(id)_kernelCast;
-(id)_kernelV_gt1;
-(id)_kernelV_lt1;
-(id)outputImage;
-(void)dealloc;
-(void)setValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif