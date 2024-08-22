// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNPERFORMACTIONCONNECTIONOPERATION_H
#define LNPERFORMACTIONCONNECTIONOPERATION_H

@class LNAction;


#import "LNRuntimeAssertionsTakingConnectionOperation.h"
#import "LNActionExecutor.h"
#import "LNSuccessResult.h"

@interface LNPerformActionConnectionOperation : LNRuntimeAssertionsTakingConnectionOperation

@property (readonly, nonatomic) LNAction *action; // ivar: _action
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, nonatomic) LNActionExecutor *executor; // ivar: _executor
@property (retain, nonatomic) LNSuccessResult *result; // ivar: _result


-(id)initWithConnectionInterface:(id)arg0 action:(id)arg1 metadata:(id)arg2 executor:(id)arg3 executorActivity:(id)arg4 completionHandler:(id)arg5 ;
-(void)finishWithError:(id)arg0 ;
-(void)start;


@end


#endif