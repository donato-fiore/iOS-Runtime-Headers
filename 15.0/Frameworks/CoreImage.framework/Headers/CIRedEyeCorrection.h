// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CIREDEYECORRECTION_H
#define CIREDEYECORRECTION_H

@class NSString, NSDictionary;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIRedEyeCorrection : CIFilter

@property (copy, nonatomic) NSString *inputCameraModel; // ivar: inputCameraModel
@property (copy, nonatomic) NSDictionary *inputCorrectionInfo; // ivar: inputCorrectionInfo
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage


-(BOOL)_isIdentity;
-(id)outputImage;
-(void)setDefaults;


@end


#endif