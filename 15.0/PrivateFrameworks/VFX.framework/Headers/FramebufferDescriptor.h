// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FRAMEBUFFERDESCRIPTOR_H
#define FRAMEBUFFERDESCRIPTOR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface FramebufferDescriptor : NSObject <NSCopying>



@property (nonatomic) NSUInteger colorPixelFormat; // ivar: _colorPixelFormat
@property (nonatomic) NSUInteger depthPixelFormat; // ivar: _depthPixelFormat
@property (nonatomic) NSUInteger sampleCount; // ivar: _sampleCount
@property (nonatomic) NSUInteger stencilPixelFormat; // ivar: _stencilPixelFormat


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRenderPassDescriptor:(id)arg0 ;


@end


#endif