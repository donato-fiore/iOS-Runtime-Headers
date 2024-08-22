// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUFILLKERNEL_H
#define NUFILLKERNEL_H



#import "NUComputeKernel.h"

@interface NUFillKernel : NUComputeKernel

@property (nonatomic) ? color; // ivar: _color
@property (nonatomic) ? region; // ivar: _region


+(void)fillTexture:(id)arg0 color:(struct ? )arg1 withCommandBuffer:(id)arg2 ;
+(void)fillTexture:(id)arg0 region:(struct ? )arg1 color:(struct ? )arg2 withCommandBuffer:(id)arg3 ;
-(void)encodeToCommandBuffer:(id)arg0 destinationTexture:(id)arg1 ;


@end


#endif