// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARUISPRITETEXTURE_H
#define ARUISPRITETEXTURE_H

@protocol NSCopying, MTLTexture;

#import <Foundation/Foundation.h>


@interface ARUISpriteTexture : NSObject <NSCopying>



@property (readonly, nonatomic) float height; // ivar: _height
@property (readonly, nonatomic) NSObject<MTLTexture> *texture; // ivar: _texture
@property (readonly, nonatomic) float width; // ivar: _width


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithImage:(id)arg0 ;


@end


#endif