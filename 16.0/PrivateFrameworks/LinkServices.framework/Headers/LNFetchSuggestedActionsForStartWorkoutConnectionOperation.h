// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNFETCHSUGGESTEDACTIONSFORSTARTWORKOUTCONNECTIONOPERATION_H
#define LNFETCHSUGGESTEDACTIONSFORSTARTWORKOUTCONNECTIONOPERATION_H

@class LNAction, NSArray;


#import "LNConnectionOperation.h"

@interface LNFetchSuggestedActionsForStartWorkoutConnectionOperation : LNConnectionOperation

@property (copy, nonatomic) LNAction *action; // ivar: _action
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (copy, nonatomic) NSArray *results; // ivar: _results


-(id)initWithConnectionInterface:(id)arg0 action:(id)arg1 completionHandler:(id)arg2 ;
-(void)finishWithError:(id)arg0 ;
-(void)start;


@end


#endif