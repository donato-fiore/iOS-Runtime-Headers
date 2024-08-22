// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EQKITMATHMLMTD_H
#define EQKITMATHMLMTD_H

@class NSArray, NSString;
@protocol EQKitMathMLNode, EQKitLayoutSchemataTd;


#import "EQKitMathMLNode.h"

@interface EQKitMathMLMTd : EQKitMathMLNode <EQKitMathMLNode, EQKitLayoutSchemataTd>

 {
    NSArray *mChildren;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(*void)mathMLAttributes;
-(?)initWithChildrennode;
-(BOOL)isBaseFontNameUsed;
-(id)init;
-(id)initFromXMLNode:(struct _xmlNode *)arg0 parser:(id)arg1 ;
-(id)initWithChildren:(id)arg0 ;
-(id)schemataChildren;
-(int)isOperatorPaddingRequired;
-(struct Schemata )layoutSchemata;
-(void)dealloc;


@end


#endif