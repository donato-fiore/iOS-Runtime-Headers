// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CIBLURMAPREFINEMENTTHRESHOLD_H
#define CIBLURMAPREFINEMENTTHRESHOLD_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIBlurmapRefinementThreshold : CIFilter

@property (retain) CIImage *inputImage; // ivar: inputImage
@property (retain) NSNumber *inputThreshold; // ivar: inputThreshold


-(id)kernel;
-(id)outputImage;


@end


#endif