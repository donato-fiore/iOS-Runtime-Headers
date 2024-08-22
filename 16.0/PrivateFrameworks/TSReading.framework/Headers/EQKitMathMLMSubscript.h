// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EQKITMATHMLMSUBSCRIPT_H
#define EQKITMATHMLMSUBSCRIPT_H

@class NSString;
@protocol EQKitLayoutSchemataSubsuperscript;


#import "EQKitMathMLBinaryNode.h"

@interface EQKitMathMLMSubscript : EQKitMathMLBinaryNode <EQKitLayoutSchemataSubsuperscript>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isEmbellishedOperator;
-(id)operatorCore;
-(id)schemataKernel;
-(id)schemataSubscript;
-(id)schemataSuperscript;
-(struct Schemata )layoutSchemata;


@end


#endif