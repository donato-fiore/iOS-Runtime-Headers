// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHEAPRANDOMNESS_H
#define CHEAPRANDOMNESS_H

@class NSNumber;


#import "CIFilter.h"

@interface CheapRandomness : CIFilter

@property (retain, nonatomic) NSNumber *inputDither; // ivar: inputDither
@property (retain, nonatomic) NSNumber *inputScale; // ivar: inputScale


-(id)outputImage;


@end


#endif