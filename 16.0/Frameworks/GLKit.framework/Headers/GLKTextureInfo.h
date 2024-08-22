// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GLKTEXTUREINFO_H
#define GLKTEXTUREINFO_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface GLKTextureInfo : NSObject <NSCopying>

 {
    BOOL lossyCompressedSource;
}


@property (readonly) int alphaState; // ivar: alphaState
@property (readonly) unsigned int arrayLength; // ivar: arrayLength
@property (readonly) BOOL containsMipmaps; // ivar: containsMipmaps
@property (readonly) unsigned int depth; // ivar: depth
@property (readonly) unsigned int height; // ivar: height
@property (readonly) unsigned int mimapLevelCount; // ivar: mimapLevelCount
@property (readonly) unsigned int name; // ivar: name
@property (readonly) unsigned int target; // ivar: target
@property (readonly) int textureOrigin; // ivar: textureOrigin
@property (readonly) unsigned int width; // ivar: width


-(BOOL)lossyCompressedSource;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithTexture:(id)arg0 textureName:(unsigned int)arg1 ;
-(id)initWithTextureTXR:(id)arg0 textureName:(unsigned int)arg1 ;
-(void)dealloc;


@end


#endif