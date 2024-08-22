// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNFETCHACTIONAPPCONTEXTCONNECTIONOPERATION_H
#define LNFETCHACTIONAPPCONTEXTCONNECTIONOPERATION_H

@class LNAction;


#import "LNInterfaceConnectionOperation.h"
#import "LNFocusConfigurationAppContext.h"

@interface LNFetchActionAppContextConnectionOperation : LNInterfaceConnectionOperation

@property (copy, nonatomic) LNAction *action; // ivar: _action
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (copy, nonatomic) LNFocusConfigurationAppContext *result; // ivar: _result


-(id)initWithConnectionInterface:(id)arg0 action:(id)arg1 completionHandler:(id)arg2 ;
-(void)finishWithError:(id)arg0 ;
-(void)start;


@end


#endif