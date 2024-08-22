// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CICOLORCUBE_H
#define CICOLORCUBE_H

@class NSData, NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIColorCube : CIFilter {
    CIImage *_cubeImage;
}


@property (copy, nonatomic) NSData *inputCubeData; // ivar: inputCubeData
@property (retain, nonatomic) NSNumber *inputCubeDimension; // ivar: inputCubeDimension
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage


+(id)customAttributes;
-(BOOL)_checkInputs;
-(id)_kernel;
-(id)_kernelOpaque;
-(id)cubeImage;
-(id)outputImage;
-(void)dealloc;


@end


#endif