// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDFETCHMERGEABLEDELTASURLREQUEST_H
#define CKDFETCHMERGEABLEDELTASURLREQUEST_H

@class NSArray, NSMutableDictionary, NSDictionary;


#import "CKDURLRequest.h"

@interface CKDFetchMergeableDeltasURLRequest : CKDURLRequest

@property (copy, nonatomic) id *deltasFetchedBlock; // ivar: _deltasFetchedBlock
@property (retain, nonatomic) NSArray *mergeableValueIDs; // ivar: _mergeableValueIDs
@property (retain, nonatomic) NSMutableDictionary *mergeableValueIDsByRequestID; // ivar: _mergeableValueIDsByRequestID
@property (readonly, nonatomic) NSDictionary *previousContinuationTokens; // ivar: _previousContinuationTokens


-(BOOL)allowsAnonymousAccount;
-(BOOL)handlesAnonymousCKUserIDPropagation;
-(id)anonymousUserIDForHTTPHeader;
-(id)generateRequestOperations;
-(id)initWithOperation:(id)arg0 mergeableValueIDs:(id)arg1 previousContinuationTokens:(id)arg2 ;
-(id)requestDidParseProtobufObject:(id)arg0 ;
-(id)requestOperationClasses;
-(id)zoneIDsToLock;
-(void)requestDidParseNodeFailure:(id)arg0 ;


@end


#endif