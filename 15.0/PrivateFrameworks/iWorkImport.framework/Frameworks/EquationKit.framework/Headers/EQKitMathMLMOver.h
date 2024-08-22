// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EQKITMATHMLMOVER_H
#define EQKITMATHMLMOVER_H

@class NSString;
@protocol EQKitLayoutSchemataUnderover;


#import "EQKitMathMLBinaryNode.h"

@interface EQKitMathMLMOver : EQKitMathMLBinaryNode <EQKitLayoutSchemataUnderover>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(*void)mathMLAttributes;
-(BOOL)isEmbellishedOperator;
-(id)initFromXMLNode:(struct _xmlNode *)arg0 parser:(id)arg1 ;
-(id)operatorCore;
-(id)schemataBase;
-(id)schemataOver;
-(id)schemataUnder;
-(struct Schemata )layoutSchemata;


@end


#endif