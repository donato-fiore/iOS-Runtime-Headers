// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DSHADERVARIABLELINKAGE_H
#define TSCH3DSHADERVARIABLELINKAGE_H


#import <Foundation/Foundation.h>

#import "TSCH3DShaderVariable.h"

@interface TSCH3DShaderVariableLinkage : NSObject {
    TSCH3DShaderVariableScopes _scope;
    TSCH3DShaderVariableScopes _declaredScope;
}


@property (readonly, nonatomic) BOOL canHaveFragment;
@property ? declaredScope;
@property (readonly, nonatomic) BOOL hasAttribute;
@property (readonly, nonatomic) BOOL hasFragment;
@property (readonly, nonatomic) NSUInteger hasGlobal;
@property (readonly, nonatomic) BOOL hasVertex;
@property (readonly, nonatomic) BOOL isAttribute;
@property (readonly, nonatomic) BOOL isFragment;
@property (readonly, nonatomic) BOOL isFragmentLinkable;
@property (readonly, nonatomic) BOOL isLinked;
@property (readonly, nonatomic) BOOL isSpecial;
@property (readonly, nonatomic) BOOL isUniform;
@property (nonatomic) BOOL isUsed; // ivar: _isUsed
@property (readonly, nonatomic) BOOL isVertex;
@property (readonly, nonatomic) BOOL isVertexLinkable;
@property (readonly, nonatomic) BOOL isVertexVarying;
@property (readonly, nonatomic) TSCH3DShaderType linked; // ivar: _linked
@property (readonly, nonatomic) BOOL notLinked;
@property ? scope;
@property (readonly, nonatomic) BOOL scopeHasFragment;
@property (readonly, nonatomic) BOOL scopedInAll;
@property (readonly, nonatomic) TSCH3DShaderType shaderType;
@property (readonly, nonatomic) TSCH3DShaderVariable *variable; // ivar: _variable


+(id)linkageWithVariable:(id)arg0 ;
-(BOOL)declaredInShader:(struct TSCH3DShaderType )arg0 scope:(struct TSCH3DShaderVariableScopeType )arg1 ;
-(BOOL)hasBody:(struct TSCH3DShaderType )arg0 ;
-(BOOL)hasLinkage:(struct TSCH3DShaderType )arg0 ;
-(BOOL)hasShader:(struct TSCH3DShaderType )arg0 scope:(struct TSCH3DShaderVariableScopeType )arg1 ;
-(BOOL)isGlobalScope:(struct TSCH3DShaderVariableScopeType )arg0 ;
-(BOOL)isVarying:(struct TSCH3DShaderType )arg0 ;
-(BOOL)updateLinkage:(struct TSCH3DShaderType )arg0 ;
-(BOOL)updateShader:(struct TSCH3DShaderType )arg0 scope:(struct TSCH3DShaderVariableScopeType )arg1 ;
-(id)globalNameForShader:(struct TSCH3DShaderType )arg0 scope:(struct TSCH3DShaderVariableScopeType )arg1 ;
-(id)initWithVariable:(id)arg0 ;
-(id)nameForShader:(struct TSCH3DShaderType )arg0 scope:(struct TSCH3DShaderVariableScopeType )arg1 ;
-(id)resolveGlobalNameForShader:(struct TSCH3DShaderType )arg0 scope:(struct TSCH3DShaderVariableScopeType )arg1 defaultTo:(id)arg2 ;
-(id)variableDeclarationInShader:(struct TSCH3DShaderType )arg0 scope:(struct TSCH3DShaderVariableScopeType )arg1 isMetal:(BOOL)arg2 ;
-(id)variableQualifiersWithStorageQualifier:(id)arg0 isMetal:(BOOL)arg1 ;
-(void)addBodyScope:(struct TSCH3DShaderType )arg0 ;
-(void)addDeclaredShader:(struct TSCH3DShaderType )arg0 scope:(struct TSCH3DShaderVariableScopeType )arg1 ;
-(void)addLinkage:(struct TSCH3DShaderType )arg0 ;
-(void)addShader:(struct TSCH3DShaderType )arg0 scope:(struct TSCH3DShaderVariableScopeType )arg1 ;
-(void)removeLinkage:(struct TSCH3DShaderType )arg0 ;
-(void)removeShader:(struct TSCH3DShaderType )arg0 scope:(struct TSCH3DShaderVariableScopeType )arg1 ;


@end


#endif