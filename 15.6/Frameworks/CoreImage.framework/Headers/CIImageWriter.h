// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CIIMAGEWRITER_H
#define CIIMAGEWRITER_H

@class NSString, NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIImageWriter : CIFilter

@property (retain) NSString *inputFilename; // ivar: inputFilename
@property (retain) CIImage *inputImage; // ivar: inputImage
@property (retain) CIFilter *inputOriginalFilter; // ivar: inputOriginalFilter
@property (retain) NSNumber *inputShouldDumpInputValues; // ivar: inputShouldDumpInputValues


+(id)customAttributes;
-(id)outputImage;


@end


#endif