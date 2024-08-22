// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXGCORNERRADIUSMASK_H
#define PXGCORNERRADIUSMASK_H

@protocol MTLDevice, MTLTexture;

#import <Foundation/Foundation.h>


@interface PXGCornerRadiusMask : NSObject {
    id<MTLDevice> *_device;
}


@property (retain) NSObject<MTLTexture> *atomicTexture; // ivar: _atomicTexture
@property (readonly, nonatomic) NSInteger byteSize; // ivar: _byteSize
@property (readonly, nonatomic) CGFloat maxCornerRadius; // ivar: _maxCornerRadius
@property (readonly, nonatomic) NSInteger numberOfSlices; // ivar: _numberOfSlices
@property (readonly, nonatomic) CGFloat screenScale; // ivar: _screenScale
@property (readonly, nonatomic) NSObject<MTLTexture> *texture;
@property (readonly, nonatomic) NSInteger texturePixelSide; // ivar: _texturePixelSide


+(id)_loadQueue;
+(id)cornerRadiusMaskForDevice:(id)arg0 maxCornerRadius:(CGFloat)arg1 screenScale:(CGFloat)arg2 ;
-(id)init;
-(id)initWithDevice:(id)arg0 maxCornerRadius:(CGFloat)arg1 screenScale:(CGFloat)arg2 ;
-(void)_loadCornerRadiusTexture;


@end


#endif