// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RBMETALRENDERSTATE_H
#define RBMETALRENDERSTATE_H

@class MTLRenderPassDescriptor;
@protocol MTLCommandBuffer, MTLRenderCommandEncoder;

#import <Foundation/Foundation.h>


@interface RBMetalRenderState : NSObject

@property (nonatomic) CGAffineTransform CTM; // ivar: _CTM
@property (nonatomic) float alpha; // ivar: _alpha
@property (nonatomic) int blendMode; // ivar: _blendMode
@property (nonatomic) ? bounds; // ivar: _bounds
@property (retain, nonatomic) NSObject<MTLCommandBuffer> *commandBuffer; // ivar: _commandBuffer
@property (retain, nonatomic) MTLRenderPassDescriptor *descriptor; // ivar: _descriptor
@property (retain, nonatomic) NSObject<MTLRenderCommandEncoder> *encoder; // ivar: _encoder
@property (nonatomic) unsigned int flags; // ivar: _flags
@property (nonatomic) NSUInteger formatKey; // ivar: _formatKey
@property (nonatomic) CGSize size; // ivar: _size


-(void)dealloc;


@end


#endif