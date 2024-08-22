// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCNSHADABLEHELPER_H
#define SCNSHADABLEHELPER_H

@class NSDictionary, NSArray, NSNumber, NSMutableArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SCNProgram.h"

@interface SCNShadableHelper : NSObject <NSSecureCoding>

 {
    id *_owner;
    SCNProgram *_program;
    NSDictionary *_shaderModifiers;
    NSArray *_c3dShaderModifierCache;
    NSNumber *_minimumLanguageVersion;
    NSMutableArray *_argumentsNames;
    NSDictionary *_symbolToBinder;
    NSDictionary *_symbolToUnbinder;
}


@property (retain, nonatomic) NSNumber *minimumLanguageVersion;
@property (readonly, nonatomic) id *owner;
@property (retain, nonatomic) SCNProgram *program;
@property (copy, nonatomic) NSDictionary *shaderModifiers;
@property (readonly, nonatomic) NSArray *shaderModifiersArgumentsNames;


+(BOOL)supportsSecureCoding;
-(*void)__CFObject;
-(?)_technique;
-(BOOL)_bindValueForSymbol:(id)arg0 atLocation:(unsigned int)arg1 programID:(unsigned int)arg2 node:(id)arg3 renderer:(id)arg4 ;
-(BOOL)isOpaque;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOwner:(id)arg0 ;
-(struct __C3DFXGLSLProgram *)_programFromPassAtIndex:(NSInteger)arg0 ;
-(void)_commonInit;
-(void)_customDecodingOfSCNShadableHelper:(id)arg0 ;
-(void)_customEncodingOfSCNShadableHelper:(id)arg0 ;
-(void)_didDecodeSCNShadableHelper:(id)arg0 ;
-(void)_parseAndSetShaderModifier:(id)arg0 ;
-(void)_programDidChange:(id)arg0 ;
-(void)_setC3DProgram;
-(void)_setC3DProgramDelegate;
-(void)_startObservingProgram;
-(void)_stopObservingProgram;
-(void)_unbindValueForSymbol:(id)arg0 atLocation:(unsigned int)arg1 programID:(unsigned int)arg2 node:(id)arg3 renderer:(id)arg4 ;
-(void)_updateAllC3DProgramInputs;
-(void)_updateC3DProgramInput:(struct __C3DFXGLSLProgram *)arg0 forSymbol:(id)arg1 ;
-(void)_updateC3DProgramInputForSymbol:(id)arg0 ;
-(void)copyModifiersFrom:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleBindingOfSymbol:(id)arg0 usingBlock:(id)arg1 ;
-(void)handleUnbindingOfSymbol:(id)arg0 usingBlock:(id)arg1 ;


@end


#endif