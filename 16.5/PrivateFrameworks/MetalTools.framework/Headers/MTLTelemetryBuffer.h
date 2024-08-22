// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLTELEMETRYBUFFER_H
#define MTLTELEMETRYBUFFER_H



#import "MTLToolsBuffer.h"

@interface MTLTelemetryBuffer : MTLToolsBuffer



-(id)initWithBuffer:(id)arg0 device:(id)arg1 bytes:(*void)arg2 options:(NSUInteger)arg3 ;
-(id)initWithBuffer:(id)arg0 device:(id)arg1 options:(NSUInteger)arg2 ;
-(id)newLinearTextureWithDescriptor:(id)arg0 offset:(NSUInteger)arg1 bytesPerRow:(NSUInteger)arg2 bytesPerImage:(NSUInteger)arg3 ;
-(id)newTextureWithDescriptor:(id)arg0 offset:(NSUInteger)arg1 bytesPerRow:(NSUInteger)arg2 ;
-(void)accumBufferDistribution:(id)arg0 options:(NSUInteger)arg1 ;


@end


#endif