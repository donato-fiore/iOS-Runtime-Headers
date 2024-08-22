// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DSHADERCONTEXT_H
#define TSCH3DSHADERCONTEXT_H

@class NSSet;

#import <Foundation/Foundation.h>

#import "TSCH3DShaderResource.h"
#import "TSCH3DVersion.h"

@interface TSCH3DShaderContext : NSObject {
    ObjectStateMatchObject _state;
}


@property (copy, nonatomic) NSSet *debugEffects; // ivar: _debugEffects
@property (retain, nonatomic) TSCH3DShaderResource *shader; // ivar: _shader
@property (retain, nonatomic) TSCH3DVersion *version; // ivar: _version


-(*void)state;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)diffEffects:(id)arg0 ;
-(id)discardStatement;
-(id)initWithObjectState:(*void)arg0 version:(id)arg1 ;
-(id)textureFunctionNameForVariable:(id)arg0 projective:(BOOL)arg1 ;
-(id)textureVariables;
-(struct TextureAttributes )textureAttributesForVariable:(id)arg0 ;


@end


#endif