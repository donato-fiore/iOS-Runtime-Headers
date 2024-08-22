// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLTEXTUREARGUMENT_H
#define MTLTEXTUREARGUMENT_H



#import "MTLArgumentInternal.h"

@interface MTLTextureArgument : MTLArgumentInternal {
    BOOL _textureType;
    BOOL _isDepthTexture;
    unsigned short _textureDataType;
}




-(BOOL)isDepthTexture;
-(NSUInteger)textureDataType;
-(NSUInteger)textureType;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)initWithName:(id)arg0 access:(NSUInteger)arg1 isActive:(BOOL)arg2 locationIndex:(NSUInteger)arg3 arraySize:(NSUInteger)arg4 dataType:(NSUInteger)arg5 textureType:(NSUInteger)arg6 isDepthTexture:(BOOL)arg7 ;


@end


#endif