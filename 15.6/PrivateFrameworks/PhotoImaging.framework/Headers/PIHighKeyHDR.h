// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PIHIGHKEYHDR_H
#define PIHIGHKEYHDR_H

@class CIFilter, CIImage, NSNumber;



@interface PIHighKeyHDR : CIFilter

@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) NSNumber *inputStrength; // ivar: inputStrength


+(id)customAttributes;
-(id)_highKeyHDR;
-(id)outputImage;


@end


#endif