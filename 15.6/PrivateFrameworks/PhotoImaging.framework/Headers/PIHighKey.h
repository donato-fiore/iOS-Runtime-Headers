// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PIHIGHKEY_H
#define PIHIGHKEY_H

@class CIFilter, CIImage, NSNumber;



@interface PIHighKey : CIFilter

@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) NSNumber *inputStrength; // ivar: inputStrength


+(id)kernel;
-(id)outputImage;


@end


#endif