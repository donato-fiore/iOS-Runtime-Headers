// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EQKITMATHMLMFRACTION_H
#define EQKITMATHMLMFRACTION_H

@class NSString;
@protocol EQKitLayoutSchemataFraction;


#import "EQKitMathMLBinaryNode.h"

@interface EQKitMathMLMFraction : EQKitMathMLBinaryNode <EQKitLayoutSchemataFraction>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(*void)mathMLAttributes;
-(?)initFromXMLNodeparser;
-(BOOL)isEmbellishedOperator;
-(id)operatorCore;
-(id)schemataDenominator;
-(id)schemataNumerator;
-(struct Schemata )layoutSchemata;


@end


#endif