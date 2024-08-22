// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCNRENDERERVIEWPOINT_H
#define SCNRENDERERVIEWPOINT_H

@class MTLRenderPassDescriptor;

#import <Foundation/Foundation.h>


@interface SCNRendererViewPoint : NSObject {
    MTLRenderPassDescriptor *_passDescriptor;
    ? _viewport;
}


@property (retain, nonatomic) MTLRenderPassDescriptor *passDescriptor;
@property (nonatomic) SCNMatrix4 projectionMatrix; // ivar: _projectionMatrix
@property (nonatomic) ? simdProjectionMatrix;
@property (nonatomic) ? simdViewMatrix;
@property (nonatomic) SCNMatrix4 viewMatrix; // ivar: _viewMatrix
@property (nonatomic) ? viewport;


-(void)dealloc;


@end


#endif