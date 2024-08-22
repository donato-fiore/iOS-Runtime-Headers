// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTVARIANTBATCHSNAPSHOTTER_H
#define AVTVARIANTBATCHSNAPSHOTTER_H

@class MTLRenderPassDescriptor, NSString;
@protocol SCNSceneRendererDelegate, _SCNSceneRendererDelegateSPI, MTLCommandQueue;

#import <Foundation/Foundation.h>

#import "AVTAvatar.h"
#import "AVTRenderer.h"

@interface AVTVariantBatchSnapshotter : NSObject <SCNSceneRendererDelegate, _SCNSceneRendererDelegateSPI>

 {
    AVTAvatar *_avatar;
    CGSize _size;
    CGFloat _scale;
    NSUInteger _antialiasingMode;
    AVTRenderer *_renderer;
    id<MTLCommandQueue> *_commandQueue;
    MTLRenderPassDescriptor *_renderPassDescriptor;
    *CGContext _bitmapContext;
    ? _backgroundGPUWorkHelper;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)imageWithOptions:(id)arg0 modifications:(id)arg1 ;
-(id)initWithAvatar:(id)arg0 size:(struct CGSize )arg1 scale:(CGFloat)arg2 antialiasingMode:(NSUInteger)arg3 device:(id)arg4 ;
-(void)_applicationDidBecomeActive:(id)arg0 ;
-(void)_applicationDidEnterBackground:(id)arg0 ;
-(void)_applicationWillEnterForeground:(id)arg0 ;
-(void)_applicationWillResignActive:(id)arg0 ;
-(void)dealloc;


@end


#endif