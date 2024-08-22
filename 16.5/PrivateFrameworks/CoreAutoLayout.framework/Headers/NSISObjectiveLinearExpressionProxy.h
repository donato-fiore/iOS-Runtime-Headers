// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSISOBJECTIVELINEAREXPRESSIONPROXY_H
#define NSISOBJECTIVELINEAREXPRESSIONPROXY_H


#import <Foundation/Foundation.h>

#import "NSISObjectiveLinearExpression.h"

@interface NSISObjectiveLinearExpressionProxy : NSObject {
    NSISObjectiveLinearExpression *_expression;
}




-(BOOL)restrictedVarWithCoefficientOfLargestNegativeMagnitudeOutVar:(struct ? *)arg0 ;
-(NSUInteger)variableCount;
-(id)initWithEngine:(id)arg0 ;
-(void)addVar:(struct ? )arg0 priority:(CGFloat)arg1 times:(CGFloat)arg2 ;
-(void)removeVar:(struct ? )arg0 ;
// -(void)replaceVar:(struct ? )arg0 withExpression:(struct ? *)arg1 processVarNewToReceiver:(id)arg2 processVarDroppedFromReceiver:(unk)arg3  ;


@end


#endif