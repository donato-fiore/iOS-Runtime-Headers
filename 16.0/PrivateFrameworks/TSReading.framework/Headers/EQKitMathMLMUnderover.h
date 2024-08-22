// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EQKITMATHMLMUNDEROVER_H
#define EQKITMATHMLMUNDEROVER_H

@class NSString;
@protocol EQKitLayoutSchemataUnderover;


#import "EQKitMathMLTernaryNode.h"

@interface EQKitMathMLMUnderover : EQKitMathMLTernaryNode <EQKitLayoutSchemataUnderover>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(*void)mathMLAttributes;
-(?)initFromXMLNodeparser;
-(BOOL)isEmbellishedOperator;
-(id)operatorCore;
-(id)schemataBase;
-(id)schemataOver;
-(id)schemataUnder;
-(struct Schemata )layoutSchemata;


@end


#endif