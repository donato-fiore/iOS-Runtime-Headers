// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNFETCHSUGGESTEDACTIONSCONNECTIONOPERATION_H
#define LNFETCHSUGGESTEDACTIONSCONNECTIONOPERATION_H

@class NSArray, NSString;


#import "LNConnectionOperation.h"

@interface LNFetchSuggestedActionsConnectionOperation : LNConnectionOperation

@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (copy, nonatomic) NSArray *results; // ivar: _results
@property (copy, nonatomic) NSString *siriLanguageCode; // ivar: _siriLanguageCode


-(id)initWithConnectionInterface:(id)arg0 siriLanguageCode:(id)arg1 completionHandler:(id)arg2 ;
-(void)finishWithError:(id)arg0 ;
-(void)start;


@end


#endif