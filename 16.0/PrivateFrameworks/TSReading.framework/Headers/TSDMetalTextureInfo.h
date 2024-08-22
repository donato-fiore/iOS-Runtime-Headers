// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDMETALTEXTUREINFO_H
#define TSDMETALTEXTUREINFO_H

@protocol MTLTexture;

#import <Foundation/Foundation.h>


@interface TSDMetalTextureInfo : NSObject

@property (readonly, nonatomic) BOOL containsMipmaps; // ivar: _containsMipmaps
@property (readonly, nonatomic) unsigned int height; // ivar: _height
@property (readonly, nonatomic) NSObject<MTLTexture> *name; // ivar: _name
@property (readonly, nonatomic) CGSize size;
@property (readonly, nonatomic) unsigned int width; // ivar: _width


+(id)textureInfoWithCGImage:(struct CGImage *)arg0 forDevice:(id)arg1 ;
+(id)textureInfoWithName:(id)arg0 width:(unsigned int)arg1 height:(unsigned int)arg2 containsMipmaps:(BOOL)arg3 ;
-(id)description;
-(id)initWithName:(id)arg0 width:(unsigned int)arg1 height:(unsigned int)arg2 containsMipmaps:(BOOL)arg3 ;
-(void)teardown;


@end


#endif