// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FXTEXTURE_H
#define FXTEXTURE_H

@protocol NSCopying;


#import "FxImage.h"

@interface FxTexture : FxImage <NSCopying>

 {
    *FxTexturePriv _texturePriv;
}




-(*void)createData:(unsigned int)arg0 withType:(unsigned int)arg1 ;
-(BOOL)_verifyImage;
-(BOOL)isInputImage;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithInfo:(struct ? )arg0 textureId:(unsigned int)arg1 andTarget:(unsigned int)arg2 ;
-(unsigned int)target;
-(unsigned int)textureId;
-(void)bind;
-(void)dealloc;
-(void)disable;
-(void)draw;
-(void)enable;
-(void)getTextureCoords:(*CGFloat)arg0 right:(*CGFloat)arg1 bottom:(*CGFloat)arg2 top:(*CGFloat)arg3 ;
-(void)setAsActiveTexture;
-(void)setData:(*void)arg0 ;
-(void)setIsInputImage:(BOOL)arg0 ;
-(void)setTarget:(unsigned int)arg0 ;
-(void)setTextureId:(unsigned int)arg0 ;


@end


#endif