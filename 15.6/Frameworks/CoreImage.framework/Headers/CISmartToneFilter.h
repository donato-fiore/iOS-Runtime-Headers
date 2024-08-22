// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CISMARTTONEFILTER_H
#define CISMARTTONEFILTER_H

@class NSData, NSNumber;


#import "CIFilter.h"
#import "CIImage.h"
#import "CIContext.h"

@interface CISmartToneFilter : CIFilter {
    CIImage *_cubeImage;
    NSData *_cubeData;
    CIContext *_cubeContext;
}


@property (retain, nonatomic) NSNumber *inputBlack; // ivar: inputBlack
@property (retain, nonatomic) NSNumber *inputBrightness; // ivar: inputBrightness
@property (retain, nonatomic) NSNumber *inputContrast; // ivar: inputContrast
@property (retain, nonatomic) NSNumber *inputExposure; // ivar: inputExposure
@property (retain, nonatomic) NSNumber *inputHighlights; // ivar: inputHighlights
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) NSData *inputLightMap; // ivar: _inputLightMap
@property (retain, nonatomic) NSNumber *inputLocalLight; // ivar: inputLocalLight
@property (retain, nonatomic) NSNumber *inputRawHighlights; // ivar: inputRawHighlights
@property (retain, nonatomic) NSNumber *inputShadows; // ivar: inputShadows
@property (retain, nonatomic) NSNumber *inputUseCube; // ivar: inputUseCube
@property (retain, nonatomic) id *inputUseCubeColorSpace; // ivar: inputUseCubeColorSpace


+(id)customAttributes;
-(BOOL)_isIdentity;
-(id)_kernelBneg;
-(id)_kernelBpos;
-(id)_kernelC;
-(id)_kernelH;
-(id)_kernelRH;
-(id)outputImage;
-(void)dealloc;
-(void)setValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif