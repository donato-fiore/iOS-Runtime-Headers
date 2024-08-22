// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EQKITMATHMLMOPERATOR_H
#define EQKITMATHMLMOPERATOR_H

@class NSString;
@protocol EQKitOperator, EQKitLayoutSchemataOperator;


#import "EQKitMathMLMToken.h"

@interface EQKitMathMLMOperator : EQKitMathMLMToken <EQKitOperator, EQKitLayoutSchemataOperator>

 {
    unsigned short mOperatorId;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(*void)mathMLAttributes;
-(?)initFromXMLNodeparser;
-(BOOL)isEmbellishedOperator;
-(id)initWithString:(id)arg0 environment:(id)arg1 ;
-(id)operatorCore;
-(id)schemataOperator;
-(struct Schemata )layoutSchemata;
-(unsigned int)operatorUnicharOrNul;
-(unsigned short)operatorId;


@end


#endif