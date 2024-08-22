// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EQKITMATHMLMPHANTOM_H
#define EQKITMATHMLMPHANTOM_H

@class NSString;
@protocol EQKitMathMLNode, EQKitLayoutSchemataPhantom;


#import "EQKitMathMLUnaryNode.h"

@interface EQKitMathMLMPhantom : EQKitMathMLUnaryNode <EQKitMathMLNode, EQKitLayoutSchemataPhantom>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isEmbellishedOperator;
-(id)init;
-(id)operatorCore;
-(id)schemataChild;
-(struct Schemata )layoutSchemata;


@end


#endif