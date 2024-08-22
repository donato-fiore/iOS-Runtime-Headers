// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EQKITMATHMLMFENCED_H
#define EQKITMATHMLMFENCED_H

@class NSArray, NSString;
@protocol EQKitMathMLNode, EQKitLayoutNode, EQKitLayoutSchemataFenced;


#import "EQKitMathMLNode.h"

@interface EQKitMathMLMFenced : EQKitMathMLNode <EQKitMathMLNode, EQKitLayoutNode, EQKitLayoutSchemataFenced>

 {
    NSArray *mChildren;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<EQKitLayoutNode> *parent;
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