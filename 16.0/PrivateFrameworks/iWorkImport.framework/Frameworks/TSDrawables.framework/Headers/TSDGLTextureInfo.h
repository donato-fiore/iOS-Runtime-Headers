// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDGLTEXTUREINFO_H
#define TSDGLTEXTUREINFO_H


#import <Foundation/Foundation.h>


@interface TSDGLTextureInfo : NSObject

@property (readonly, nonatomic) BOOL containsMipmaps; // ivar: _containsMipmaps
@property (readonly, nonatomic) unsigned int height; // ivar: _height
@property (readonly, nonatomic) unsigned int name; // ivar: _name
@property (readonly, nonatomic) CGSize size;
@property (readonly, nonatomic) unsigned int target; // ivar: _target
@property (readonly, nonatomic) unsigned int width; // ivar: _width


+(id)textureInfoWithName:(unsigned int)arg0 target:(unsigned int)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3 containsMipmaps:(BOOL)arg4 ;
-(id)description;
-(id)initWithName:(unsigned int)arg0 target:(unsigned int)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3 containsMipmaps:(BOOL)arg4 ;
-(void)teardown;


@end


#endif