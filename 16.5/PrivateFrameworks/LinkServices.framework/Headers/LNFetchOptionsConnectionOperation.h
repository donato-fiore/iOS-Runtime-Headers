// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNFETCHOPTIONSCONNECTIONOPERATION_H
#define LNFETCHOPTIONSCONNECTIONOPERATION_H

@class LNActionMetadata, NSString, LNActionParameterMetadata;


#import "LNRuntimeAssertionsTakingConnectionOperation.h"
#import "LNDynamicOptionsResult.h"

@interface LNFetchOptionsConnectionOperation : LNRuntimeAssertionsTakingConnectionOperation

@property (retain, nonatomic) LNActionMetadata *actionMetadata; // ivar: _actionMetadata
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) NSString *localeIdentifier; // ivar: _localeIdentifier
@property (retain, nonatomic) LNActionParameterMetadata *parameterMetadata; // ivar: _parameterMetadata
@property (retain, nonatomic) LNDynamicOptionsResult *result; // ivar: _result
@property (copy, nonatomic) NSString *searchTerm; // ivar: _searchTerm


-(id)initWithConnectionInterface:(id)arg0 actionMetadata:(id)arg1 parameterMetadata:(id)arg2 searchTerm:(id)arg3 localeIdentifier:(id)arg4 completionHandler:(id)arg5 ;
-(void)finishWithError:(id)arg0 ;
-(void)start;


@end


#endif