// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DMATERIALSHADERVARIABLES_H
#define TSCH3DMATERIALSHADERVARIABLES_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TSCH3DShaderVariable.h"

@interface TSCH3DMaterialShaderVariables : NSObject <NSCopying>



@property (readonly, retain, nonatomic) TSCH3DShaderVariable *color; // ivar: _color
@property (readonly, retain, nonatomic) TSCH3DShaderVariable *factor; // ivar: _factor
@property (readonly, retain, nonatomic) TSCH3DShaderVariable *intensity; // ivar: _intensity
@property (readonly, retain, nonatomic) TSCH3DShaderVariable *modulation; // ivar: _modulation
@property (readonly, retain, nonatomic) TSCH3DShaderVariable *texcoords; // ivar: _texcoords
@property (readonly, retain, nonatomic) TSCH3DShaderVariable *texture; // ivar: _texture
@property (readonly, retain, nonatomic) TSCH3DShaderVariable *textureColor; // ivar: _textureColor
@property (readonly, retain, nonatomic) TSCH3DShaderVariable *textureMatrix; // ivar: _textureMatrix


+(id)variablesWithTexture:(id)arg0 intensity:(id)arg1 factor:(id)arg2 textureColor:(id)arg3 color:(id)arg4 modulation:(id)arg5 texcoords:(id)arg6 textureMatrix:(id)arg7 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithTexture:(id)arg0 intensity:(id)arg1 factor:(id)arg2 textureColor:(id)arg3 color:(id)arg4 modulation:(id)arg5 texcoords:(id)arg6 textureMatrix:(id)arg7 ;


@end


#endif