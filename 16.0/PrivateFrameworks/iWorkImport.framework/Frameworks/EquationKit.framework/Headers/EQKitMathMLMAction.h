// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EQKITMATHMLMACTION_H
#define EQKITMATHMLMACTION_H

@protocol EQKitMathMLNode;


#import "EQKitMathMLNode.h"

@interface EQKitMathMLMAction : EQKitMathMLNode <EQKitMathMLNode>

 {
    EQKitMathMLNode *mExpression;
}




-(*void)mathMLAttributes;
-(BOOL)isEmbellishedOperator;
-(id)initFromXMLNode:(struct _xmlNode *)arg0 parser:(id)arg1 ;
-(id)operatorCore;
-(struct Schemata )layoutSchemata;
-(void)dealloc;


@end


#endif