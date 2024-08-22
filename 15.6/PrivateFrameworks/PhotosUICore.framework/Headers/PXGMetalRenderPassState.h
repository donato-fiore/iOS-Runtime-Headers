// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXGMETALRENDERPASSSTATE_H
#define PXGMETALRENDERPASSSTATE_H

@protocol MTLDevice, MTLBuffer;

#import <Foundation/Foundation.h>


@interface PXGMetalRenderPassState : NSObject

@property (readonly, nonatomic) NSInteger capacity; // ivar: _capacity
@property (readonly, nonatomic) NSObject<MTLDevice> *device; // ivar: _device
@property (readonly, nonatomic) *unsigned int spriteIndexes; // ivar: _spriteIndexes
@property (readonly, nonatomic) NSObject<MTLBuffer> *spriteIndexesMetalBuffer; // ivar: _spriteIndexesMetalBuffer
@property (readonly, nonatomic) NSObject<MTLBuffer> *spriteTextureInfosMetalBuffer; // ivar: _spriteTextureInfosMetalBuffer
@property (readonly, nonatomic) *? textureInfos; // ivar: _textureInfos


-(id)description;
-(id)initWithDevice:(id)arg0 capacity:(NSInteger)arg1 ;


@end


#endif