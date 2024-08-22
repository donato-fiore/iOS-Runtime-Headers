// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDMETALRENDERTARGET_H
#define TSDMETALRENDERTARGET_H

@class MTLRenderPassDescriptor, NSArray;
@protocol MTLTexture;

#import <Foundation/Foundation.h>


@interface TSDMetalRenderTarget : NSObject

@property (readonly) MTLRenderPassDescriptor *passDescriptor; // ivar: _passDescriptor
@property (readonly) CGSize size; // ivar: _size
@property (readonly, nonatomic) NSObject<MTLTexture> *texture;
@property (readonly) NSArray *textures; // ivar: _textures


-(id)initWithSize:(struct CGSize )arg0 metalContext:(id)arg1 ;
-(id)initWithSize:(struct CGSize )arg0 metalContext:(id)arg1 numberOfAttachments:(NSUInteger)arg2 ;
-(id)textureAtAttachmentIndex:(NSUInteger)arg0 ;
-(struct CATransform3D )orthoProjectionWithVerticalFlip:(BOOL)arg0 ;
-(void)setClearColor:(struct ? )arg0 ;
-(void)setClearColor:(struct ? )arg0 atAttachmentIndex:(NSUInteger)arg1 ;


@end


#endif