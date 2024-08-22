// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKMETALFRAMEBUFFER_H
#define PKMETALFRAMEBUFFER_H

@protocol MTLTexture, MTLDevice;

#import <Foundation/Foundation.h>


@interface PKMetalFramebuffer : NSObject {
    NSInteger _nonVolatileLockCount;
    BOOL _isVolatile;
    BOOL _canBeMadeVolatile;
    BOOL _memoryless;
    BOOL _backedByIOSurface;
    id<MTLTexture> *_colorTexture;
    id<MTLDevice> *_device;
    NSUInteger _pixelFormat;
    NSUInteger _sampleCount;
    *__IOSurface _ioSurface;
    NSInteger _blendMode;
    CGSize _size;
    ? _clearColor;
}




-(id)init;
-(void)dealloc;


@end


#endif