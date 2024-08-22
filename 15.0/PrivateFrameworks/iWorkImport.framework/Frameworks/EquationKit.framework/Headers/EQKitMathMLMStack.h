// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EQKITMATHMLMSTACK_H
#define EQKITMATHMLMSTACK_H

@class NSArray, NSString;
@protocol EQKitMathMLNode, EQKitLayoutSchemataStack;


#import "EQKitMathMLNode.h"

@interface EQKitMathMLMStack : EQKitMathMLNode <EQKitMathMLNode, EQKitLayoutSchemataStack>

 {
    NSArray *mChildren;
    int mAlign;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(*void)mathMLAttributes;
-(BOOL)isBaseFontNameUsed;
-(id)initFromXMLNode:(struct _xmlNode *)arg0 parser:(id)arg1 ;
-(id)initWithChildren:(id)arg0 ;
-(id)schemataChildren;
-(int)schemataAlign;
-(struct Schemata )layoutSchemata;
-(void)dealloc;


@end


#endif