// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EQKITMATHMLMSTACKROW_H
#define EQKITMATHMLMSTACKROW_H

@class NSArray, NSString;
@protocol EQKitMathMLNode, EQKitLayoutSchemataStackRow;


#import "EQKitMathMLNode.h"

@interface EQKitMathMLMStackRow : EQKitMathMLNode <EQKitMathMLNode, EQKitLayoutSchemataStackRow>

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
-(id)initWithChildren:(id)arg0 ;
-(id)schemataChildren;
-(struct Schemata )layoutSchemata;
-(void)dealloc;


@end


#endif