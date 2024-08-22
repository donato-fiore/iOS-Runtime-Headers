// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CICHEATBLUR_H
#define CICHEATBLUR_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CICheatBlur : CIFilter {
    CIImage *inputImage;
    NSNumber *inputAmount;
}




+(id)customAttributes;
-(id)_CIBox4;
-(id)_CIBox6;
-(id)_CICross4;
-(id)outputImage;


@end


#endif