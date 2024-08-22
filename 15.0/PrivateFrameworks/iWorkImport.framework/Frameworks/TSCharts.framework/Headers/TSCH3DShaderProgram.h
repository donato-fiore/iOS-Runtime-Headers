// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DSHADERPROGRAM_H
#define TSCH3DSHADERPROGRAM_H

@class NSMutableDictionary, NSMutableArray, NSMutableSet, NSMutableString, NSString, NSSet;

#import <Foundation/Foundation.h>

#import "TSCH3DOrderedDictionary.h"
#import "TSCH3DVersion.h"

@interface TSCH3DShaderProgram : NSObject {
    NSMutableDictionary *_links;
    NSMutableArray *_declarationSection;
    NSMutableArray *_temporarySection;
    NSMutableArray *_statementSection;
    NSMutableArray *_resolutionSection;
    NSMutableArray *_outcomeSection;
    NSMutableArray *_conclusionSection;
    NSMutableArray" _sections;
    NSMutableArray *_functions;
    NSMutableSet *_functionNames;
    NSMutableString *_accumulator;
    BOOL _isLinked;
    NSString *_vertex;
    NSString *_fragment;
    TSCH3DOrderedDictionary *_typeDeclarations;
    NSMutableDictionary *_linkedInputVariables;
}


@property (readonly, nonatomic) NSUInteger attributeBindingsCount;
@property (readonly, nonatomic) NSString *fragment;
@property (copy, nonatomic) NSSet *interleavedAttributeVariables; // ivar: _interleavedAttributeVariables
@property (retain, nonatomic) NSMutableArray *sortedLinks; // ivar: _sortedLinks
@property (readonly, nonatomic) NSUInteger textureBindingsCount;
@property (retain, nonatomic) NSMutableDictionary *variableToVertexAttributeLocation; // ivar: _variableToVertexAttributeLocation
@property (copy, nonatomic) NSSet *variablesWithBackingResources; // ivar: _variablesWithBackingResources
@property (readonly, nonatomic) TSCH3DVersion *version; // ivar: _version
@property (readonly, nonatomic) NSString *vertex;


-(BOOL)hasFunction:(id)arg0 ;
-(BOOL)isMetal;
-(BOOL)isSamplerVariable:(id)arg0 ;
-(NSInteger)uniformBufferIndexForType:(struct TSCH3DShaderType )arg0 ;
-(NSUInteger)p_countOfAttributeBindingsForType:(struct TSCH3DShaderType )arg0 ;
-(NSUInteger)p_metalVertexBufferCount;
-(NSUInteger)processSection:(id)arg0 accumulate:(id)arg1 conclusions:(id)arg2 ;
-(NSUInteger)vertexAttributeLocationForVariable:(id)arg0 ;
-(id)existingLinkageOfVariable:(id)arg0 ;
-(id)init;
-(id)initWithVersion:(id)arg0 ;
-(id)interleavedLinkedVertexAttributeVariables;
-(id)linkageOfVariable:(id)arg0 ;
-(id)linkedInputVariablesForType:(struct TSCH3DShaderType )arg0 scope:(struct TSCH3DShaderVariableScopeType )arg1 ;
-(id)linkedTextureVariables;
-(id)linkedUniformVariablesForType:(struct TSCH3DShaderType )arg0 isTexture:(BOOL)arg1 ;
-(id)linkedVertexAttributeVariables;
-(id)p_boundArgumentDeclarationForLinkedVariable:(id)arg0 variableType:(id)arg1 variableName:(id)arg2 bindingType:(id)arg3 bufferIndex:(NSUInteger)arg4 ;
-(id)p_boundBufferArgumentDeclarationForLinkedVariable:(id)arg0 variableType:(id)arg1 variableName:(id)arg2 bufferIndex:(NSUInteger)arg3 ;
-(id)p_boundSamplerArgumentDeclarationForLinkedVariable:(id)arg0 bufferIndex:(NSUInteger)arg1 ;
-(id)p_boundTextureArgumentDeclarationForLinkedVariable:(id)arg0 bufferIndex:(NSUInteger)arg1 ;
-(id)p_generateType:(struct TSCH3DShaderType )arg0 ;
-(id)p_metalVertexInputLines;
-(id)uniformVariablesForType:(struct TSCH3DShaderType )arg0 ;
-(id)usedAttributeNameForVariable:(id)arg0 ;
-(id)usedNameForVariable:(id)arg0 type:(struct TSCH3DShaderType )arg1 scope:(struct TSCH3DShaderVariableScopeType )arg2 ;
-(id)usedUniformNameForVariable:(id)arg0 ;
-(struct TSCH3DShaderType )uniformLinkageFor:(id)arg0 ;
-(struct pair<bool, TSCH3DShaderVariableLinkage *> )resultLinkageOfVariable:(id)arg0 ;
-(void)accumulateSection:(id)arg0 intoArray:(id)arg1 ;
-(void)addAttributeVariable:(id)arg0 ;
-(void)addConclusion:(id)arg0 ;
-(void)addConclusion:(id)arg0 space:(id)arg1 statement:(id)arg2 ;
-(void)addConclusion:(id)arg0 space:(id)arg1 type:(struct TSCH3DShaderType )arg2 format:(id)arg3 arguments:(char *)arg4 ;
-(void)addConclusion:(id)arg0 statement:(id)arg1 ;
-(void)addConclusion:(id)arg0 type:(struct TSCH3DShaderType )arg1 ;
-(void)addConclusion:(id)arg0 type:(struct TSCH3DShaderType )arg1 statement:(id)arg2 ;
-(void)addConclusionWithSpace:(id)arg0 statement:(id)arg1 ;
-(void)addDeclaration:(id)arg0 ;
-(void)addDeclaration:(id)arg0 space:(id)arg1 statement:(id)arg2 ;
-(void)addDeclaration:(id)arg0 space:(id)arg1 type:(struct TSCH3DShaderType )arg2 format:(id)arg3 arguments:(char *)arg4 ;
-(void)addDeclaration:(id)arg0 statement:(id)arg1 ;
-(void)addDeclaration:(id)arg0 type:(struct TSCH3DShaderType )arg1 ;
-(void)addDeclaration:(id)arg0 type:(struct TSCH3DShaderType )arg1 statement:(id)arg2 ;
-(void)addDeclarationWithSpace:(id)arg0 statement:(id)arg1 ;
-(void)addFragmentConclusion:(id)arg0 ;
-(void)addFragmentConclusion:(id)arg0 space:(id)arg1 statement:(id)arg2 ;
-(void)addFragmentConclusion:(id)arg0 statement:(id)arg1 ;
-(void)addFragmentConclusionWithFormat:(id)arg0 ;
-(void)addFragmentDeclaration:(id)arg0 ;
-(void)addFragmentDeclaration:(id)arg0 space:(id)arg1 statement:(id)arg2 ;
-(void)addFragmentDeclaration:(id)arg0 statement:(id)arg1 ;
-(void)addFragmentDeclarationWithFormat:(id)arg0 ;
-(void)addFragmentOutcome:(id)arg0 ;
-(void)addFragmentOutcome:(id)arg0 space:(id)arg1 statement:(id)arg2 ;
-(void)addFragmentOutcome:(id)arg0 statement:(id)arg1 ;
-(void)addFragmentOutcomeWithFormat:(id)arg0 ;
-(void)addFragmentResolution:(id)arg0 ;
-(void)addFragmentResolution:(id)arg0 space:(id)arg1 statement:(id)arg2 ;
-(void)addFragmentResolution:(id)arg0 statement:(id)arg1 ;
-(void)addFragmentResolutionWithFormat:(id)arg0 ;
-(void)addFragmentStatement:(id)arg0 ;
-(void)addFragmentStatement:(id)arg0 space:(id)arg1 statement:(id)arg2 ;
-(void)addFragmentStatement:(id)arg0 statement:(id)arg1 ;
-(void)addFragmentStatementWithFormat:(id)arg0 ;
-(void)addFragmentTemporary:(id)arg0 ;
-(void)addFragmentTemporary:(id)arg0 space:(id)arg1 statement:(id)arg2 ;
-(void)addFragmentTemporary:(id)arg0 statement:(id)arg1 ;
-(void)addFragmentTemporaryWithFormat:(id)arg0 ;
-(void)addFunctionString:(id)arg0 name:(id)arg1 ;
-(void)addOutcome:(id)arg0 ;
-(void)addOutcome:(id)arg0 space:(id)arg1 statement:(id)arg2 ;
-(void)addOutcome:(id)arg0 space:(id)arg1 type:(struct TSCH3DShaderType )arg2 format:(id)arg3 arguments:(char *)arg4 ;
-(void)addOutcome:(id)arg0 statement:(id)arg1 ;
-(void)addOutcome:(id)arg0 type:(struct TSCH3DShaderType )arg1 ;
-(void)addOutcome:(id)arg0 type:(struct TSCH3DShaderType )arg1 statement:(id)arg2 ;
-(void)addOutcomeWithSpace:(id)arg0 statement:(id)arg1 ;
-(void)addResolution:(id)arg0 ;
-(void)addResolution:(id)arg0 space:(id)arg1 statement:(id)arg2 ;
-(void)addResolution:(id)arg0 space:(id)arg1 type:(struct TSCH3DShaderType )arg2 format:(id)arg3 arguments:(char *)arg4 ;
-(void)addResolution:(id)arg0 statement:(id)arg1 ;
-(void)addResolution:(id)arg0 type:(struct TSCH3DShaderType )arg1 ;
-(void)addResolution:(id)arg0 type:(struct TSCH3DShaderType )arg1 statement:(id)arg2 ;
-(void)addResolutionWithSpace:(id)arg0 statement:(id)arg1 ;
-(void)addStatement:(id)arg0 ;
-(void)addStatement:(id)arg0 space:(id)arg1 statement:(id)arg2 ;
-(void)addStatement:(id)arg0 space:(id)arg1 type:(struct TSCH3DShaderType )arg2 format:(id)arg3 arguments:(char *)arg4 ;
-(void)addStatement:(id)arg0 statement:(id)arg1 ;
-(void)addStatement:(id)arg0 type:(struct TSCH3DShaderType )arg1 ;
-(void)addStatement:(id)arg0 type:(struct TSCH3DShaderType )arg1 statement:(id)arg2 ;
-(void)addStatementWithSpace:(id)arg0 statement:(id)arg1 ;
-(void)addTemporary:(id)arg0 ;
-(void)addTemporary:(id)arg0 space:(id)arg1 statement:(id)arg2 ;
-(void)addTemporary:(id)arg0 space:(id)arg1 type:(struct TSCH3DShaderType )arg2 format:(id)arg3 arguments:(char *)arg4 ;
-(void)addTemporary:(id)arg0 statement:(id)arg1 ;
-(void)addTemporary:(id)arg0 type:(struct TSCH3DShaderType )arg1 ;
-(void)addTemporary:(id)arg0 type:(struct TSCH3DShaderType )arg1 statement:(id)arg2 ;
-(void)addTemporaryWithSpace:(id)arg0 statement:(id)arg1 ;
-(void)addToSection:(id)arg0 statement:(id)arg1 type:(struct TSCH3DShaderType )arg2 ;
-(void)addToSection:(id)arg0 variable:(id)arg1 space:(id)arg2 type:(struct TSCH3DShaderType )arg3 format:(id)arg4 arguments:(char *)arg5 ;
-(void)addUniformVariable:(id)arg0 ;
-(void)addVertexConclusion:(id)arg0 ;
-(void)addVertexConclusion:(id)arg0 space:(id)arg1 statement:(id)arg2 ;
-(void)addVertexConclusion:(id)arg0 statement:(id)arg1 ;
-(void)addVertexConclusionWithFormat:(id)arg0 ;
-(void)addVertexDeclaration:(id)arg0 ;
-(void)addVertexDeclaration:(id)arg0 space:(id)arg1 statement:(id)arg2 ;
-(void)addVertexDeclaration:(id)arg0 statement:(id)arg1 ;
-(void)addVertexDeclarationWithFormat:(id)arg0 ;
-(void)addVertexOutcome:(id)arg0 ;
-(void)addVertexOutcome:(id)arg0 space:(id)arg1 statement:(id)arg2 ;
-(void)addVertexOutcome:(id)arg0 statement:(id)arg1 ;
-(void)addVertexOutcomeWithFormat:(id)arg0 ;
-(void)addVertexResolution:(id)arg0 ;
-(void)addVertexResolution:(id)arg0 space:(id)arg1 statement:(id)arg2 ;
-(void)addVertexResolution:(id)arg0 statement:(id)arg1 ;
-(void)addVertexResolutionWithFormat:(id)arg0 ;
-(void)addVertexStatement:(id)arg0 ;
-(void)addVertexStatement:(id)arg0 space:(id)arg1 statement:(id)arg2 ;
-(void)addVertexStatement:(id)arg0 statement:(id)arg1 ;
-(void)addVertexStatementWithFormat:(id)arg0 ;
-(void)addVertexTemporary:(id)arg0 ;
-(void)addVertexTemporary:(id)arg0 space:(id)arg1 statement:(id)arg2 ;
-(void)addVertexTemporary:(id)arg0 statement:(id)arg1 ;
-(void)addVertexTemporaryWithFormat:(id)arg0 ;
-(void)assignVariable:(id)arg0 statement:(id)arg1 substitutes:(id)arg2 type:(struct TSCH3DShaderType )arg3 toSection:(int)arg4 ;
-(void)declareType:(id)arg0 name:(id)arg1 ;
-(void)link;
-(void)p_addCompatibilityFunctions;
-(void)p_addToSection:(id)arg0 variable:(id)arg1 space:(id)arg2 type:(struct TSCH3DShaderType )arg3 format:(id)arg4 substitutes:(id)arg5 ;
-(void)p_generateFunctions;
-(void)p_generateGlobalsForType:(struct TSCH3DShaderType )arg0 ;
-(void)p_generateMetalFragmentGlobals;
-(void)p_generateMetalFragmentInputs;
-(void)p_generateMetalFragmentTextureVariable;
-(void)p_generateMetalVertexAttributes;
-(void)p_generateMetalVertexGlobals;
-(void)p_generateMetalVertexInputs;
-(void)p_generatePreprocessorDefinitionsForType:(struct TSCH3DShaderType )arg0 ;
-(void)p_generateSection:(id)arg0 type:(struct TSCH3DShaderType )arg1 ;
-(void)p_generateType:(struct TSCH3DShaderType )arg0 globalType:(struct TSCH3DShaderVariableScopeType )arg1 storageQualifier:(id)arg2 ;
-(void)p_generateTypeDeclarations;


@end


#endif