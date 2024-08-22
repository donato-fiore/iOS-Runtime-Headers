// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CIREDEYECORRECTIONS_H
#define CIREDEYECORRECTIONS_H

@class NSString, NSArray;
@protocol _CIFilterProperties;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIRedEyeCorrections : CIFilter <_CIFilterProperties>



@property (copy, nonatomic) NSString *inputCameraModel; // ivar: inputCameraModel
@property (copy, nonatomic) NSArray *inputCorrectionInfo; // ivar: inputCorrectionInfo
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage


-(BOOL)_isIdentity;
-(id)_initFromProperties:(id)arg0 ;
-(id)_outputProperties;
-(id)outputImage;
-(void)setDefaults;


@end


#endif