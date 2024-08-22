// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PICOMBINERGBKERNEL_H
#define PICOMBINERGBKERNEL_H

@class NUComputeKernel;
@protocol MTLTexture;



@interface PICombineRGBKernel : NUComputeKernel

@property (retain, nonatomic) NSObject<MTLTexture> *blueTexture; // ivar: _blueTexture
@property (retain, nonatomic) NSObject<MTLTexture> *greenTexture; // ivar: _greenTexture
@property (retain, nonatomic) NSObject<MTLTexture> *redTexture; // ivar: _redTexture


+(void)combineRGBTextures:(id)arg0 intoDestinationTexture:(id)arg1 withCommandBuffer:(id)arg2 ;
-(void)encodeToCommandBuffer:(id)arg0 destinationTexture:(id)arg1 ;


@end


#endif