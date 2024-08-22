// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDMODIFYSUBSCRIPTIONSURLREQUEST_H
#define CKDMODIFYSUBSCRIPTIONSURLREQUEST_H

@class NSMutableDictionary, NSArray, CKRecordZoneID;


#import "CKDURLRequest.h"

@interface CKDModifySubscriptionsURLRequest : CKDURLRequest

@property (retain, nonatomic) NSMutableDictionary *subscriptionIDByRequestID; // ivar: _subscriptionIDByRequestID
@property (retain, nonatomic) NSArray *subscriptionIDsToDelete; // ivar: _subscriptionIDsToDelete
@property (copy, nonatomic) id *subscriptionModifiedBlock; // ivar: _subscriptionModifiedBlock
@property (retain, nonatomic) NSArray *subscriptionsToSave; // ivar: _subscriptionsToSave
@property (copy, nonatomic) CKRecordZoneID *zoneID; // ivar: _zoneID


-(BOOL)requiresCKAnonymousUserIDs;
-(id)generateRequestOperations;
-(id)initWithOperation:(id)arg0 subscriptionsToSave:(id)arg1 subscriptionIDsToDelete:(id)arg2 ;
-(id)requestDidParseProtobufObject:(id)arg0 ;
-(id)requestOperationClasses;
-(void)requestDidParseNodeFailure:(id)arg0 ;


@end


#endif