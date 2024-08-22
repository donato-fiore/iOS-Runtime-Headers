// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EQKITMATHMLMSQRT_H
#define EQKITMATHMLMSQRT_H

@class NSString;
@protocol EQKitLayoutSchemataRadical;


#import "EQKitMathMLUnaryNode.h"

@interface EQKitMathMLMSqrt : EQKitMathMLUnaryNode <EQKitLayoutSchemataRadical>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)schemataIndex;
-(id)schemataRadicand;
-(struct Schemata )layoutSchemata;


@end


#endif