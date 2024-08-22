// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DTEXTUREVARIABLES_H
#define TSCH3DTEXTUREVARIABLES_H


#import <Foundation/Foundation.h>

#import "TSCH3DShaderVariable.h"

@interface TSCH3DTextureVariables : NSObject

@property (readonly, copy, nonatomic) TSCH3DShaderVariable *texcoords; // ivar: _texcoords
@property (readonly, copy, nonatomic) TSCH3DShaderVariable *texture; // ivar: _texture
@property (readonly, copy, nonatomic) TSCH3DShaderVariable *textureMatrix; // ivar: _textureMatrix


+(id)variablesWithTexture:(id)arg0 texcoords:(id)arg1 textureMatrix:(id)arg2 ;
-(id)initWithTexture:(id)arg0 texcoords:(id)arg1 textureMatrix:(id)arg2 ;


@end


#endif