// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RESAMPLERTEXTURES_H
#define RESAMPLERTEXTURES_H

@protocol MTLTexture;

#import <Foundation/Foundation.h>


@interface ResamplerTextures : NSObject

@property (retain) NSObject<MTLTexture> *inputTexture; // ivar: _inputTexture
@property (retain) NSObject<MTLTexture> *inputTexureUV; // ivar: _inputTexureUV
@property (retain) NSObject<MTLTexture> *outputTextureUV; // ivar: _outputTextureUV
@property (retain) NSObject<MTLTexture> *outputTextureY; // ivar: _outputTextureY
@property (retain) NSObject<MTLTexture> *tempTextureUV; // ivar: _tempTextureUV
@property (retain) NSObject<MTLTexture> *tempTextureY; // ivar: _tempTextureY




@end


#endif