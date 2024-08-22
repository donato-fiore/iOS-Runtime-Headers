// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCNOFFSCREENRENDERER_H
#define SCNOFFSCREENRENDERER_H



#import "SCNRenderer.h"

@interface SCNOffscreenRenderer : SCNRenderer

@property (nonatomic) NSUInteger antialiasingMode;
@property (nonatomic) CGSize size;
@property (readonly, nonatomic) unsigned int textureID;


+(id)offscreenRendererWithContext:(id)arg0 size:(struct CGSize )arg1 ;
+(id)offscreenRendererWithDevice:(id)arg0 size:(struct CGSize )arg1 ;
-(id)snapshot;


@end


#endif