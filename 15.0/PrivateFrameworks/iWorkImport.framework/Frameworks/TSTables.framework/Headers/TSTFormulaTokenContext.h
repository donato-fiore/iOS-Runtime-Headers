// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTFORMULATOKENCONTEXT_H
#define TSTFORMULATOKENCONTEXT_H


#import <Foundation/Foundation.h>

#import "TSTExpressionNode.h"

@interface TSTFormulaTokenContext : NSObject

@property (readonly, nonatomic) NSUInteger argumentIndex; // ivar: _argumentIndex
@property (readonly, nonatomic) TSTExpressionNode *expressionNode; // ivar: _expressionNode
@property (readonly, nonatomic) NSUInteger parenNestingLevel; // ivar: _parenNestingLevel


+(id)tokenContextWithExpressionNode:(id)arg0 parenNestingLevel:(NSUInteger)arg1 ;
+(id)tokenContextWithExpressionNode:(id)arg0 parenNestingLevel:(NSUInteger)arg1 argumentIndex:(NSUInteger)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)debugDescription;
-(id)init;
-(id)initWithExpressionNode:(id)arg0 parenNestingLevel:(NSUInteger)arg1 ;
-(id)initWithExpressionNode:(id)arg0 parenNestingLevel:(NSUInteger)arg1 argumentIndex:(NSUInteger)arg2 ;


@end


#endif