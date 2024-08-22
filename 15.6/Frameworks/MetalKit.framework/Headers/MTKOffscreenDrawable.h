// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTKOFFSCREENDRAWABLE_H
#define MTKOFFSCREENDRAWABLE_H

@class NSString, CAMetalLayer;
@protocol CAMetalDrawable, MTLTexture, MTLDevice;

#import <Foundation/Foundation.h>


@interface MTKOffscreenDrawable : NSObject <CAMetalDrawable>

 {
    id<MTLTexture> *_texture;
    NSUInteger _pixelFormat;
    CGSize _size;
    BOOL _textureDirty;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<MTLDevice> *device; // ivar: _device
@property (readonly, nonatomic) NSUInteger drawableID; // ivar: _drawableID
@property (readonly) NSUInteger hash;
@property (readonly) CAMetalLayer *layer; // ivar: _layer
@property (nonatomic) NSUInteger pixelFormat;
@property (readonly, nonatomic) CGFloat presentedTime; // ivar: _presentedTime
@property (nonatomic) CGSize size;
@property (readonly) Class superclass;
@property (readonly) NSObject<MTLTexture> *texture;


-(id)initWithDevice:(id)arg0 pixelFormat:(NSUInteger)arg1 size:(struct CGSize )arg2 drawableID:(NSUInteger)arg3 ;
-(void)addPresentedHandler:(id)arg0 ;
-(void)present;
-(void)presentAfterMinimumDuration:(CGFloat)arg0 ;
-(void)presentAtTime:(CGFloat)arg0 ;


@end


#endif