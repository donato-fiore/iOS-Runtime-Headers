// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CICIRCULARITYDESCRIPTOR_H
#define CICIRCULARITYDESCRIPTOR_H



#import "CIFilter.h"
#import "CIImage.h"
#import "CIVector.h"

@interface CICircularityDescriptor : CIFilter {
    CIImage *inputImage;
}


@property (retain, nonatomic) CIImage *inputCentroid; // ivar: inputCentroid
@property (retain, nonatomic) CIVector *inputExtent; // ivar: inputExtent


-(id)outputImage;


@end


#endif