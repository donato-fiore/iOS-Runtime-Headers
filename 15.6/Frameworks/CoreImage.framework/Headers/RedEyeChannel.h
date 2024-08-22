// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REDEYECHANNEL_H
#define REDEYECHANNEL_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface RedEyeChannel : CIFilter {
    CIImage *inputImage;
    NSNumber *inputChannel;
    NSNumber *inputParam1;
    NSNumber *inputParam2;
    NSNumber *inputParam3;
    NSNumber *inputParam4;
}




-(id)filterNameForChannel:(int)arg0 ;
-(id)outputImage;
-(id)parameterNamesForChannel:(int)arg0 ;


@end


#endif