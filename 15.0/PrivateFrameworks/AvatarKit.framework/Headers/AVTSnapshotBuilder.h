// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTSNAPSHOTBUILDER_H
#define AVTSNAPSHOTBUILDER_H

@class MTLRenderPassDescriptor, NSString, SCNRenderer;
@protocol SCNSceneRendererDelegate, _SCNSceneRendererDelegateSPI, MTLCommandQueue;

#import <Foundation/Foundation.h>

#import "AVTAvatar.h"
#import "AVTRenderer.h"

@interface AVTSnapshotBuilder : NSObject <SCNSceneRendererDelegate, _SCNSceneRendererDelegateSPI>

 {
    AVTAvatar *_avatar;
    AVTAvatar *_snapshotedAvatar;
    AVTRenderer *_renderer;
    id<MTLCommandQueue> *_commandQueue;
    MTLRenderPassDescriptor *_renderPassDescriptor;
    *CGContext _bitmapContext;
}


@property (retain, nonatomic) AVTAvatar *avatar;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SCNRenderer *renderer;
@property (readonly) Class superclass;


+(id)sharedInstance;
+(struct CGImage *)copyRescaledCGImage:(struct CGImage *)arg0 by:(float)arg1 ;
-(id)_imageWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 options:(id)arg2 ;
-(id)_imageWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 options:(id)arg2 useACopy:(BOOL)arg3 ;
-(id)animatedImageWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 options:(id)arg2 ;
-(id)imageWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 options:(id)arg2 ;
-(id)init;
-(void)_applyOptions:(id)arg0 ;
-(void)dealloc;
-(void)setupAvatarWithOptions:(id)arg0 useACopy:(BOOL)arg1 ;


@end


#endif