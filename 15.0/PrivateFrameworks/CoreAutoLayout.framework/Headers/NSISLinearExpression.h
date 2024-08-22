// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSISLINEAREXPRESSION_H
#define NSISLINEAREXPRESSION_H

@protocol NSFastEnumeration;

#import <Foundation/Foundation.h>

#import "NSISEngine.h"

@interface NSISLinearExpression : NSObject <NSFastEnumeration>

 {
    NSISEngine *engine;
    ? linExp;
}


@property CGFloat constant;
@property (readonly) NSISEngine *engine;


+(id)acquireFromPoolForUseCase:(NSInteger)arg0 ;
+(id)acquireFromPoolForUseCase:(NSInteger)arg0 engine:(id)arg1 ;
+(id)newExpressionWithCapacity:(NSUInteger)arg0 ;
+(id)newExpressionWithCapacity:(NSUInteger)arg0 engine:(id)arg1 ;
+(void)initialize;
-(BOOL)enumerateVariablesAndCoefficientsUntil:(id)arg0 ;
-(BOOL)isConstant;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)coefficientForVariable:(id)arg0 ;
-(CGFloat)incrementConstant:(CGFloat)arg0 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)hash;
-(NSUInteger)variableCount;
-(id)copyContentsAndReturnToPool;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithEngine:(id)arg0 ;
-(id)variablesArray;
-(void)addExpression:(id)arg0 times:(CGFloat)arg1 ;
// -(void)addExpression:(id)arg0 times:(CGFloat)arg1 processVariableNewToReceiver:(id)arg2 processVariableDroppedFromReceiver:(unk)arg3  ;
-(void)addVariable:(id)arg0 coefficient:(CGFloat)arg1 ;
// -(void)addVariable:(id)arg0 coefficient:(CGFloat)arg1 processVariableNewToReceiver:(id)arg2 processVariableDroppedFromReceiver:(unk)arg3  ;
-(void)dealloc;
-(void)enumerateVariables:(id)arg0 ;
-(void)enumerateVariablesAndCoefficients:(id)arg0 ;
-(void)removeVariable:(id)arg0 ;
// -(void)replaceVariable:(id)arg0 withExpression:(id)arg1 processVariableNewToReceiver:(id)arg2 processVariableDroppedFromReceiver:(unk)arg3  ;
-(void)replaceVariable:(id)arg0 withVariable:(id)arg1 coefficient:(CGFloat)arg2 ;
-(void)replaceVariable:(id)arg0 withVariablePlusDelta:(CGFloat)arg1 ;
// -(void)replaceVariable:(id)arg0 withVariablePlusDelta:(CGFloat)arg1 timesVariable:(id)arg2 processVariableNewToReceiver:(id)arg3 processVariableDroppedFromReceiver:(unk)arg4  ;
-(void)returnToPool;
-(void)scaleBy:(CGFloat)arg0 ;
-(void)setCoefficient:(CGFloat)arg0 forVariable:(id)arg1 ;
-(void)verifyInternalIntegrity;


@end


#endif