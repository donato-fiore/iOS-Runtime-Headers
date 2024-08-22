// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNCIFILTER_H
#define VNCIFILTER_H

@class CIFilter, CIColorKernel, CIImage;



@interface VNCIFilter : CIFilter {
    CIColorKernel *_kernel;
}


@property (retain, nonatomic) CIImage *inputImage; // ivar: _inputImage


-(id)initWithKernelName:(id)arg0 ;
-(id)initWithKernelName:(id)arg0 inputParameters:(id)arg1 ;


@end


#endif