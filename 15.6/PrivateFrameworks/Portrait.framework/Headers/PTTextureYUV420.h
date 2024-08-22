// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PTTEXTUREYUV420_H
#define PTTEXTUREYUV420_H

@protocol MTLTexture;


#import "PTTexture.h"

@interface PTTextureYUV420 : PTTexture

@property (retain) NSObject<MTLTexture> *texChroma; // ivar: _texChroma
@property (retain) NSObject<MTLTexture> *texLuma; // ivar: _texLuma




@end


#endif