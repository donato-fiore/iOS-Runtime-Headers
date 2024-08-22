// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GLKTEXTURETXR_H
#define GLKTEXTURETXR_H

@class TXRTexture, NSString;

#import <Foundation/Foundation.h>


@interface GLKTextureTXR : NSObject {
    unsigned int _loadTarget;
    TXRTexture *_texture;
    NSUInteger _API;
}


@property (nonatomic) unsigned int GLTextureName; // ivar: _GLTextureName
@property (nonatomic) unsigned int arrayLength; // ivar: _arrayLength
@property (nonatomic) unsigned int depth; // ivar: _depth
@property (nonatomic) BOOL hasAlpha; // ivar: _hasAlpha
@property (nonatomic) unsigned int height; // ivar: _height
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) BOOL lossyCompressedSource; // ivar: _lossyCompressedSource
@property (nonatomic) unsigned int mipmapLevelCount; // ivar: _mipmapLevelCount
@property (nonatomic) unsigned int target; // ivar: _target
@property (nonatomic) unsigned int width; // ivar: _width


-(BOOL)uploadToGLTexture:(unsigned int)arg0 error:(*id)arg1 ;
-(id)initWithTexture:(id)arg0 API:(NSUInteger)arg1 options:(id)arg2 error:(*id)arg3 ;
-(void)dealloc;


@end


#endif