// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TDREAMFRAMEBUFFER_H
#define TDREAMFRAMEBUFFER_H


#import <Foundation/Foundation.h>


@interface TDreamFramebuffer : NSObject {
    BOOL _ownsTexture;
    BOOL _ownsFBO;
    *__CVOpenGLESTextureCache _textureCache;
}


@property (readonly) unsigned int framebuffer; // ivar: _framebuffer
@property (readonly) CGSize size; // ivar: _size
@property (readonly) unsigned int texture; // ivar: _texture
@property (readonly) BOOL validLUT; // ivar: _validLUT


-(id)initWithExistingImageTexture:(struct IPImage )arg0 ;
-(id)initWithSize:(struct CGSize )arg0 ;
-(id)initWithTexName:(id)arg0 ;
-(void)dealloc;
-(void)generateFramebuffer;
-(void)generateFramebufferTex:(id)arg0 ;


@end


#endif