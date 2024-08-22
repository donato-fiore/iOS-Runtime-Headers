// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLKUIMETALATLAS_H
#define CLKUIMETALATLAS_H

@protocol MTLTexture, OS_dispatch_queue;


#import "CLKUIAtlas.h"

@interface CLKUIMetalAtlas : CLKUIAtlas {
    id<MTLTexture> *_texture;
    NSObject<OS_dispatch_queue> *_loaderQueue;
    id<MTLTexture> *_loaderQueue_prewarmedTexture;
    NSUInteger _mainQueue_prewarmState;
}


@property (readonly, nonatomic) NSObject<MTLTexture> *nilTexture; // ivar: _nilTexture


+(id)_createMTLTextureWithBacking:(id)arg0 device:(id)arg1 encoder:(id)arg2 ;
-(id)initWithUuid:(id)arg0 nilTexture:(id)arg1 ;
-(void)bind:(id)arg0 slot:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)prewarm;
-(void)purge;


@end


#endif