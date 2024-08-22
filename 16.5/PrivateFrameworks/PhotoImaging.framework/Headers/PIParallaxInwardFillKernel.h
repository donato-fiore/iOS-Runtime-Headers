// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PIPARALLAXINWARDFILLKERNEL_H
#define PIPARALLAXINWARDFILLKERNEL_H

@class NUComputeKernel;
@protocol MTLTexture;



@interface PIParallaxInwardFillKernel : NUComputeKernel

@property (retain, nonatomic) NSObject<MTLTexture> *sourceTexture; // ivar: _sourceTexture


+(void)fillSourceTexture:(id)arg0 intoDestinationTexture:(id)arg1 withCommandBuffer:(id)arg2 ;
-(void)encodeToCommandBuffer:(id)arg0 destinationTexture:(id)arg1 ;


@end


#endif