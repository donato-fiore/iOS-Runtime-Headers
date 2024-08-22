// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EQKITMATHMLNODE_H
#define EQKITMATHMLNODE_H

@class NSString;
@protocol EQKitLayoutNode;

#import <Foundation/Foundation.h>


@interface EQKitMathMLNode : NSObject <EQKitLayoutNode>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSObject<EQKitLayoutNode> *parent; // ivar: mParent
@property (readonly) Class superclass;


-(BOOL)isAttributeDefaultInheritableFromStyle:(int)arg0 ;
-(BOOL)isBaseFontNameUsed;
-(BOOL)isEmbellishedOperator;
-(BOOL)isNumber;
-(BOOL)isSpaceLike;
-(NSInteger)scriptLevelWithBase:(NSInteger)arg0 ;
-(id)layoutStyleNode;
-(id)operatorCore;
-(int)isOperatorPaddingRequired;
-(struct Schemata )layoutSchemata;


@end


#endif