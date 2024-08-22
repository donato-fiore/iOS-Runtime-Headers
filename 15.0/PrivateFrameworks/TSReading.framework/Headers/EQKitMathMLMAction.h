// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EQKITMATHMLMACTION_H
#define EQKITMATHMLMACTION_H

@protocol EQKitMathMLNode;


#import "EQKitMathMLNode.h"

@interface EQKitMathMLMAction : EQKitMathMLNode <EQKitMathMLNode>

 {
    EQKitMathMLNode *mExpression;
}




-(*void)mathMLAttributes;
-(?)initFromXMLNodeparser;
-(BOOL)isEmbellishedOperator;
-(id)operatorCore;
-(struct Schemata )layoutSchemata;
-(void)dealloc;


@end


#endif