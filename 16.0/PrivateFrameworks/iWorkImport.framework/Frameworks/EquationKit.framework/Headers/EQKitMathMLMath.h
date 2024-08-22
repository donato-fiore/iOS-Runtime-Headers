// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EQKITMATHMLMATH_H
#define EQKITMATHMLMATH_H

@class NSString;
@protocol EQKitMathMLNode, EQKitRootNode, EQKitExpression, EQKitLayoutNode;

#import <Foundation/Foundation.h>

#import "EQKitMathMLNode.h"
#import "EQKitEnvironmentInstance.h"

@interface EQKitMathMLMath : NSObject <EQKitMathMLNode, EQKitRootNode, EQKitExpression>

 {
    EQKitMathMLNode *mExpression;
    *void mAttributeCollection;
    EQKitEnvironmentInstance *mEnvironment;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<EQKitLayoutNode> *parent;
@property (readonly) Class superclass;


-(*void)mathMLAttributes;
-(BOOL)isAttributeDefaultInheritableFromStyle:(int)arg0 ;
-(BOOL)isBaseFontNameUsed;
-(BOOL)isEmbellishedOperator;
-(BOOL)isNumber;
-(BOOL)isSpaceLike;
-(NSInteger)scriptLevelWithBase:(NSInteger)arg0 ;
-(id)init;
-(id)initFromXMLNode:(struct _xmlNode *)arg0 parser:(id)arg1 ;
-(id)layoutStyleNode;
-(id)newLayout;
-(id)operatorCore;
-(int)isOperatorPaddingRequired;
-(struct AttributeCollection *)attributeCollection;
-(struct Schemata )layoutSchemata;
-(void)dealloc;


@end


#endif