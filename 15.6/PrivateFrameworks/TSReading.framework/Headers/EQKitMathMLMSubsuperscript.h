// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EQKITMATHMLMSUBSUPERSCRIPT_H
#define EQKITMATHMLMSUBSUPERSCRIPT_H

@class NSString;
@protocol EQKitLayoutSchemataSubsuperscript;


#import "EQKitMathMLTernaryNode.h"

@interface EQKitMathMLMSubsuperscript : EQKitMathMLTernaryNode <EQKitLayoutSchemataSubsuperscript>



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