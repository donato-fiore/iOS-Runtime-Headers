// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDUPLOADMERGEABLEDELTASURLREQUEST_H
#define CKDUPLOADMERGEABLEDELTASURLREQUEST_H

@class NSArray, NSMutableDictionary;


#import "CKDURLRequest.h"

@interface CKDUploadMergeableDeltasURLRequest : CKDURLRequest

@property (readonly, copy, nonatomic) NSArray *deltas; // ivar: _deltas
@property (retain, nonatomic) NSMutableDictionary *deltasByRequestID; // ivar: _deltasByRequestID
@property (copy, nonatomic) id *perDeltaCompletionBlock; // ivar: _perDeltaCompletionBlock
@property (copy, nonatomic) id *perReplaceDeltasRequestCompletionBlock; // ivar: _perReplaceDeltasRequestCompletionBlock
@property (readonly, copy, nonatomic) NSArray *replacementRequests; // ivar: _replacementRequests
@property (retain, nonatomic) NSMutableDictionary *replacementRequestsByRequestID; // ivar: _replacementRequestsByRequestID


-(BOOL)allowsAnonymousAccount;
-(BOOL)handlesAnonymousCKUserIDPropagation;
-(id)anonymousUserIDForHTTPHeader;
-(id)generateRequestOperations;
-(id)initWithOperation:(id)arg0 deltas:(id)arg1 replacementRequests:(id)arg2 ;
-(id)requestDidParseProtobufObject:(id)arg0 ;
-(id)requestOperationClasses;
-(id)zoneIDsToLock;
-(void)requestDidParseNodeFailure:(id)arg0 ;


@end


#endif