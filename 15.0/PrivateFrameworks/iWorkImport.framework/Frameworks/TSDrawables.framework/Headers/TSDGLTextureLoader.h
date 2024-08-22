// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDGLTEXTURELOADER_H
#define TSDGLTEXTURELOADER_H


#import <Foundation/Foundation.h>


@interface TSDGLTextureLoader : NSObject



+(id)p_textureInfoFromCGImage:(struct CGImage *)arg0 generateMipmaps:(BOOL)arg1 ;
+(id)textureWithCGImage:(struct CGImage *)arg0 generateMipmaps:(BOOL)arg1 error:(*id)arg2 ;
+(id)textureWithContentsOfFile:(id)arg0 generateMipmaps:(BOOL)arg1 error:(*id)arg2 ;


@end


#endif