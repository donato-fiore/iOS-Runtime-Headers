// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CIDOCUMENTENHANCER_H
#define CIDOCUMENTENHANCER_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIDocumentEnhancer : CIFilter

@property (copy, nonatomic) NSNumber *inputAmount; // ivar: inputAmount
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage


+(id)customAttributes;
-(id)outputImage;


@end


#endif