// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PIFAKEBOOST_H
#define PIFAKEBOOST_H

@class CIFilter, CIImage, NSArray, NSString;



@interface PIFakeBoost : CIFilter

@property CGFloat inputBoost; // ivar: _inputBoost
@property (retain) CIImage *inputImage; // ivar: _inputImage
@property (copy) NSArray *inputParams; // ivar: _inputParams
@property (copy) NSString *inputVersion; // ivar: _inputVersion


+(id)boostParametersFromRawProperties:(id)arg0 ;
+(id)currentVersion;
+(id)kernelFB0;
+(id)kernelFB3;
-(id)outputImage;
-(id)outputImageFB0;
-(id)outputImageFB3;


@end


#endif