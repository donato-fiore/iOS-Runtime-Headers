// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDFETCHSUBSCRIPTIONSURLREQUEST_H
#define CKDFETCHSUBSCRIPTIONSURLREQUEST_H

@class NSMutableDictionary, NSArray, NSMutableArray;


#import "CKDURLRequest.h"

@interface CKDFetchSubscriptionsURLRequest : CKDURLRequest

@property (copy, nonatomic) id *errorFetchingAllSubscriptionsBlock; // ivar: _errorFetchingAllSubscriptionsBlock
@property (copy, nonatomic) id *subscriptionFetchedBlock; // ivar: _subscriptionFetchedBlock
@property (retain, nonatomic) NSMutableDictionary *subscriptionIDByRequestID; // ivar: _subscriptionIDByRequestID
@property (retain, nonatomic) NSArray *subscriptionIDs; // ivar: _subscriptionIDs
@property (retain, nonatomic) NSMutableArray *subscriptions; // ivar: _subscriptions


-(id)generateRequestOperations;
-(id)initWithOperation:(id)arg0 subscriptionIDs:(id)arg1 ;
-(id)requestDidParseProtobufObject:(id)arg0 ;
-(id)requestOperationClasses;
-(void)requestDidParseNodeFailure:(id)arg0 ;


@end


#endif