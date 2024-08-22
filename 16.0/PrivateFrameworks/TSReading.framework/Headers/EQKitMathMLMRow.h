// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EQKITMATHMLMROW_H
#define EQKITMATHMLMROW_H

@class NSArray, NSString;
@protocol EQKitMathMLNode, EQKitLayoutSchemataRow;


#import "EQKitMathMLNode.h"

@interface EQKitMathMLMRow : EQKitMathMLNode <EQKitMathMLNode, EQKitLayoutSchemataRow>

 {
    NSArray *mChildren;
    ? mFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(*void)mathMLAttributes;
-(?)initFromXMLNodeparser;
-(?)initWithChildrennode;
-(BOOL)isBaseFontNameUsed;
-(BOOL)isEmbellishedOperator;
-(id)init;
-(id)initWithChildren:(id)arg0 ;
-(id)operatorCore;
-(id)schemataChildren;
-(int)isOperatorPaddingRequired;
-(struct Schemata )layoutSchemata;
-(void)dealloc;


@end


#endif