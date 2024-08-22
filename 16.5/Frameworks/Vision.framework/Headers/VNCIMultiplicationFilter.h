// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNCIMULTIPLICATIONFILTER_H
#define VNCIMULTIPLICATIONFILTER_H

@class NSNumber;


#import "VNCIFilter.h"

@interface VNCIMultiplicationFilter : VNCIFilter

@property (copy, nonatomic) NSNumber *inputFactor1; // ivar: _inputFactor1
@property (copy, nonatomic) NSNumber *inputFactor2; // ivar: _inputFactor2
@property (copy, nonatomic) NSNumber *inputFactor3; // ivar: _inputFactor3
@property (copy, nonatomic) NSNumber *inputFactor4; // ivar: _inputFactor4


-(id)init;
-(id)outputImage;


@end


#endif