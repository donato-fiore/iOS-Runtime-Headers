// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDGLFRAMEBUFFERTEXTURECONFIG_H
#define TSDGLFRAMEBUFFERTEXTURECONFIG_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface TSDGLFrameBufferTextureConfig : NSObject {
    BOOL _isTextureNameGenerated;
}


@property (readonly, nonatomic) unsigned int GLFormat; // ivar: _GLFormat
@property (readonly, nonatomic) int GLInternalFormat; // ivar: _GLInternalFormat
@property (readonly, nonatomic) unsigned int GLType; // ivar: _GLType
@property (readonly, nonatomic) unsigned int attachment; // ivar: _attachment
@property (readonly, nonatomic) *__IOSurface backingSurface; // ivar: _backingSurface
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) CGSize size; // ivar: _textureSize
@property (readonly, nonatomic) unsigned int target;
@property (readonly, nonatomic) NSArray *textureParameters; // ivar: _textureParameters


+(id)textureConfigWithSize:(struct CGSize )arg0 attachment:(unsigned int)arg1 textureParameters:(id)arg2 name:(id)arg3 ;
+(id)textureConfigWithSize:(struct CGSize )arg0 internalFormat:(int)arg1 format:(unsigned int)arg2 type:(unsigned int)arg3 attachment:(unsigned int)arg4 textureParameters:(id)arg5 name:(id)arg6 ;
+(id)textureConfigWithSize:(struct CGSize )arg0 internalFormat:(int)arg1 format:(unsigned int)arg2 type:(unsigned int)arg3 attachment:(unsigned int)arg4 textureParameters:(id)arg5 name:(id)arg6 backingSurface:(struct __IOSurface *)arg7 ;
+(id)textureConfigWithSize:(struct CGSize )arg0 name:(id)arg1 ;
+(id)textureConfigWithSize:(struct CGSize )arg0 textureParameters:(id)arg1 name:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSize:(struct CGSize )arg0 internalFormat:(int)arg1 format:(unsigned int)arg2 type:(unsigned int)arg3 attachment:(unsigned int)arg4 textureParameters:(id)arg5 name:(id)arg6 backingSurface:(struct __IOSurface *)arg7 ;
-(void)dealloc;


@end


#endif