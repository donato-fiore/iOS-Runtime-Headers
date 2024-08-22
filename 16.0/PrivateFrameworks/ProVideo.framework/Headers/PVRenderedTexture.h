// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PVRENDEREDTEXTURE_H
#define PVRENDEREDTEXTURE_H


#import <Foundation/Foundation.h>


@interface PVRenderedTexture : NSObject {
    HGRef<HGGLTexture> _glTexture;
}


@property (readonly, nonatomic) CGRect bitmapRect;
@property (readonly, nonatomic) unsigned int textureName;
@property (readonly, nonatomic) CGRect textureRect;
@property (readonly, nonatomic) unsigned int textureTarget;


-(id)initWithHGGLTexture:(struct HGRef<HGGLTexture> )arg0 ;
-(struct CGSize )textureSize;


@end


#endif