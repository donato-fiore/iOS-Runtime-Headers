// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNFETCHSUGGESTEDFOCUSACTIONSCONNECTIONOPERATION_H
#define LNFETCHSUGGESTEDFOCUSACTIONSCONNECTIONOPERATION_H

@class LNActionMetadata, NSArray;


#import "LNConnectionOperation.h"
#import "LNFocusConfigurationSuggestionContext.h"

@interface LNFetchSuggestedFocusActionsConnectionOperation : LNConnectionOperation

@property (retain, nonatomic) LNActionMetadata *actionMetadata; // ivar: _actionMetadata
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (copy, nonatomic) NSArray *results; // ivar: _results
@property (retain, nonatomic) LNFocusConfigurationSuggestionContext *suggestionContext; // ivar: _suggestionContext


-(id)initWithConnectionInterface:(id)arg0 actionMetadata:(id)arg1 suggestionContext:(id)arg2 completionHandler:(id)arg3 ;
-(void)finishWithError:(id)arg0 ;
-(void)start;


@end


#endif