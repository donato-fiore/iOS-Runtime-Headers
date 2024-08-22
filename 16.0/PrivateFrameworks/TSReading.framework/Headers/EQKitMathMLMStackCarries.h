// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EQKITMATHMLMSTACKCARRIES_H
#define EQKITMATHMLMSTACKCARRIES_H

@class NSArray, NSString;
@protocol EQKitMathMLNode, EQKitLayoutSchemataStackCarries;


#import "EQKitMathMLNode.h"

@interface EQKitMathMLMStackCarries : EQKitMathMLNode <EQKitMathMLNode, EQKitLayoutSchemataStackCarries>

 {
    NSArray *mChildren;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(*void)mathMLAttributes;
-(?)initFromXMLNodeparser;
-(BOOL)isBaseFontNameUsed;
-(id)schemataChildren;
-(struct Schemata )layoutSchemata;
-(void)dealloc;


@end


#endif