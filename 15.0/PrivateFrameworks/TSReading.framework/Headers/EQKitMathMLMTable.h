// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EQKITMATHMLMTABLE_H
#define EQKITMATHMLMTABLE_H

@class NSArray, NSString;
@protocol EQKitMathMLNode, EQKitLayoutSchemataTable;


#import "EQKitMathMLNode.h"

@interface EQKitMathMLMTable : EQKitMathMLNode <EQKitMathMLNode, EQKitLayoutSchemataTable>

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
-(id)layoutStyleNode;
-(id)schemataChildren;
-(struct Schemata )layoutSchemata;
-(void)dealloc;


@end


#endif