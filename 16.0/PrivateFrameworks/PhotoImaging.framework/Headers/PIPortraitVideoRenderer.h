// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PIPORTRAITVIDEORENDERER_H
#define PIPORTRAITVIDEORENDERER_H

@class PTRenderPipeline, NSDate;
@protocol PTRenderState, MTLDevice;

#import <Foundation/Foundation.h>


@interface PIPortraitVideoRenderer : NSObject {
    PTRenderPipeline *_renderPipeline;
    id<PTRenderState> *_renderState;
}


@property (readonly, nonatomic) ? colorSize; // ivar: _colorSize
@property (readonly, nonatomic) NSInteger debugMode; // ivar: _debugMode
@property (readonly, nonatomic) NSObject<MTLDevice> *device; // ivar: _device
@property (readonly, nonatomic) ? disparitySize; // ivar: _disparitySize
@property (nonatomic, getter=isInUse) BOOL inUse; // ivar: _inUse
@property (retain, nonatomic) NSDate *lastUseTime; // ivar: _lastUseTime
@property (readonly, nonatomic) int quality; // ivar: _quality


+(void)prewarmRendererForDevice:(id)arg0 colorSize:(struct ? )arg1 disparitySize:(struct ? )arg2 quality:(int)arg3 debugMode:(NSInteger)arg4 globalRenderingMetadata:(id)arg5 ;
+(void)renderOnDevice:(id)arg0 colorSize:(struct ? )arg1 disparitySize:(struct ? )arg2 quality:(int)arg3 debugMode:(NSInteger)arg4 globalRenderingMetadata:(id)arg5 usingBlock:(id)arg6 ;
-(BOOL)renderState:(id)arg0 matchesMetadata:(id)arg1 ;
-(id)description;
-(id)initWithDevice:(id)arg0 colorSize:(struct ? )arg1 disparitySize:(struct ? )arg2 quality:(int)arg3 debugMode:(NSInteger)arg4 ;
-(void)prepareToRenderWithMetadata:(id)arg0 ;


@end


#endif