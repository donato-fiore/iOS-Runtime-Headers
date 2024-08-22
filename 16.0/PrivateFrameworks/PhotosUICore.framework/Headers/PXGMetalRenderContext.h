// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXGMETALRENDERCONTEXT_H
#define PXGMETALRENDERCONTEXT_H

@protocol MTLCommandQueue, MTLDevice;

#import <Foundation/Foundation.h>


@interface PXGMetalRenderContext : NSObject

@property (readonly, nonatomic) NSObject<MTLCommandQueue> *commandQueue; // ivar: _commandQueue
@property (readonly, nonatomic) NSObject<MTLDevice> *device; // ivar: _device


+(id)privateContextWithDevice:(id)arg0 ;
+(id)privateContextWithDevice:(id)arg0 commandQueue:(id)arg1 ;
+(id)sharedContextWithDevice:(id)arg0 commandQueue:(id)arg1 ;
-(id)initWithDevice:(id)arg0 commandQueue:(id)arg1 ;
-(id)newTextureWithDescriptor:(id)arg0 ;
-(void)copyBytes:(*void)arg0 toTexture:(id)arg1 inRegion:(struct ? )arg2 length:(NSUInteger)arg3 bytesPerRow:(NSUInteger)arg4 bytesPerImage:(NSUInteger)arg5 ;
-(void)fastCopyBytes:(*void)arg0 toTexture:(id)arg1 inRegion:(struct ? )arg2 length:(NSUInteger)arg3 bytesPerRow:(NSUInteger)arg4 bytesPerImage:(NSUInteger)arg5 ;


@end


#endif