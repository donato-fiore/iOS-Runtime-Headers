// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSTARGETINGVALIDATOR_H
#define TPSTARGETINGVALIDATOR_H


#import <Foundation/Foundation.h>


@interface TPSTargetingValidator : NSObject



+(BOOL)validateConditions:(id)arg0 joinType:(NSInteger)arg1 context:(id)arg2 cache:(id)arg3 completionQueue:(id)arg4 error:(*id)arg5 ;
+(void)_validateCondition:(id)arg0 joinType:(NSInteger)arg1 context:(id)arg2 cache:(id)arg3 completionQueue:(id)arg4 completionHandler:(id)arg5 ;
+(void)validateConditions:(id)arg0 joinType:(NSInteger)arg1 context:(id)arg2 cache:(id)arg3 completionQueue:(id)arg4 completionHandler:(id)arg5 ;


@end


#endif