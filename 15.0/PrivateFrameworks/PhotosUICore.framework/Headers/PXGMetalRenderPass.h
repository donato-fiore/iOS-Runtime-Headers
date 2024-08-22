// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXGMETALRENDERPASS_H
#define PXGMETALRENDERPASS_H

@class MTLRenderPassDescriptor;

#import <Foundation/Foundation.h>

#import "PXGMetalCaptureSpriteTexture.h"
#import "PXGEffect.h"

@interface PXGMetalRenderPass : NSObject

@property (retain, nonatomic) PXGMetalCaptureSpriteTexture *captureSpriteTexture; // ivar: _captureSpriteTexture
@property (nonatomic) float captureSpriteZPosition; // ivar: _captureSpriteZPosition
@property (nonatomic) NSInteger drawCalls; // ivar: _drawCalls
@property (nonatomic) CGFloat drawingScale; // ivar: _drawingScale
@property (nonatomic) float maxZ; // ivar: _maxZ
@property (nonatomic) float minZ; // ivar: _minZ
@property (retain, nonatomic) PXGEffect *offscreenKernelEffect; // ivar: _offscreenKernelEffect
@property (retain, nonatomic) MTLRenderPassDescriptor *renderPassDescriptor; // ivar: _renderPassDescriptor


-(id)description;
-(id)init;


@end


#endif