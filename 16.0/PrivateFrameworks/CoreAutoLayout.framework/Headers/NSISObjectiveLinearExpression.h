// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSISOBJECTIVELINEAREXPRESSION_H
#define NSISOBJECTIVELINEAREXPRESSION_H


#import <Foundation/Foundation.h>

#import "NSISEngine.h"

@interface NSISObjectiveLinearExpression : NSObject {
    NSISEngine *_engine;
    ? _priorityMap;
    ? _constant;
}




-(BOOL)_restrictedVarWithCoefficientOfLargestNegativeMagnitudeOutVar:(struct ? *)arg0 ;
-(NSUInteger)_variableCount;
-(id)_initWithEngine:(id)arg0 ;
-(id)description;
-(id)init;
-(void)_addVar:(struct ? )arg0 priority:(CGFloat)arg1 times:(CGFloat)arg2 ;
-(void)_removeVar:(struct ? )arg0 ;
// -(void)_replaceVar:(struct ? )arg0 withExpression:(struct ? *)arg1 processVarNewToReceiver:(id)arg2 processVarDroppedFromReceiver:(unk)arg3  ;
-(void)dealloc;


@end


#endif