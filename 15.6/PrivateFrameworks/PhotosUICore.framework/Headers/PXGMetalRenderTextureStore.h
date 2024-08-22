// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXGMETALRENDERTEXTURESTORE_H
#define PXGMETALRENDERTEXTURESTORE_H


#import <Foundation/Foundation.h>


@interface PXGMetalRenderTextureStore : NSObject {
    *? _textures;
    NSInteger _count;
    NSInteger _capacity;
    BOOL _sorted;
}




-(id)init;
-(void)_sortIfNeeded;
-(void)addTexture:(struct ? )arg0 ;
-(void)dealloc;
-(void)drawWithOrder:(NSUInteger)arg0 enumerationBlock:(id)arg1 ;
-(void)removeAllTextures;


@end


#endif