// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDREPLACEMERGEABLEDELTASURLREQUEST_H
#define CKDREPLACEMERGEABLEDELTASURLREQUEST_H

@class NSArray, NSMutableDictionary;


#import "CKDURLRequest.h"

@interface CKDReplaceMergeableDeltasURLRequest : CKDURLRequest

@property (nonatomic) BOOL ignoreMissingDeltas; // ivar: _ignoreMissingDeltas
@property (copy, nonatomic) id *perReplacementCompletionBlock; // ivar: _perReplacementCompletionBlock
@property (retain, nonatomic) NSArray *replaceDeltasRequests; // ivar: _replaceDeltasRequests
@property (retain, nonatomic) NSMutableDictionary *replacementRequestsByRequestID; // ivar: _replacementRequestsByRequestID


+(id)requestOperationsForRequest:(id)arg0 replaceDeltasRequests:(id)arg1 ignoreMissingDeltas:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)allowsAnonymousAccount;
-(BOOL)handlesAnonymousCKUserIDPropagation;
-(id)anonymousUserIDForHTTPHeader;
-(id)generateRequestOperations;
-(id)initWithOperation:(id)arg0 replaceDeltasRequests:(id)arg1 ignoreMissingDeltas:(BOOL)arg2 ;
-(id)requestDidParseProtobufObject:(id)arg0 ;
-(id)requestOperationClasses;
-(id)zoneIDsToLock;
-(int)isolationLevel;
-(void)requestDidParseNodeFailure:(id)arg0 ;


@end


#endif