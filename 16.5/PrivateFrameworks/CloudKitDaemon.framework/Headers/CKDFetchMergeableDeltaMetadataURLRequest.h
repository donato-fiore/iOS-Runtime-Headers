// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDFETCHMERGEABLEDELTAMETADATAURLREQUEST_H
#define CKDFETCHMERGEABLEDELTAMETADATAURLREQUEST_H

@class NSDictionary, NSMutableDictionary, NSArray;


#import "CKDURLRequest.h"

@interface CKDFetchMergeableDeltaMetadataURLRequest : CKDURLRequest

@property (retain, nonatomic) NSDictionary *continuationTokens; // ivar: _continuationTokens
@property (retain, nonatomic) NSMutableDictionary *mergeableValueIDByRequestID; // ivar: _mergeableValueIDByRequestID
@property (retain, nonatomic) NSArray *mergeableValueIDs; // ivar: _mergeableValueIDs
@property (copy, nonatomic) id *metadataFetchedBlock; // ivar: _metadataFetchedBlock


-(BOOL)allowsAnonymousAccount;
-(BOOL)handlesAnonymousCKUserIDPropagation;
-(id)anonymousUserIDForHTTPHeader;
-(id)generateRequestOperations;
-(id)initWithOperation:(id)arg0 mergeableValueIDs:(id)arg1 continuationTokens:(id)arg2 ;
-(id)requestDidParseProtobufObject:(id)arg0 ;
-(id)requestOperationClasses;
-(id)zoneIDsToLock;
-(int)isolationLevel;
-(void)requestDidParseNodeFailure:(id)arg0 ;


@end


#endif