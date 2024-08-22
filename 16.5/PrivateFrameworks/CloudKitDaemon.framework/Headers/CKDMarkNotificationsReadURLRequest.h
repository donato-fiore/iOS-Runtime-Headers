// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDMARKNOTIFICATIONSREADURLREQUEST_H
#define CKDMARKNOTIFICATIONSREADURLREQUEST_H

@class NSArray, NSMutableDictionary;


#import "CKDURLRequest.h"

@interface CKDMarkNotificationsReadURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *notificationIDs; // ivar: _notificationIDs
@property (retain, nonatomic) NSMutableDictionary *notificationIDsByRequestID; // ivar: _notificationIDsByRequestID
@property (copy, nonatomic) id *notificationMarkedReadProgressBlock; // ivar: _notificationMarkedReadProgressBlock


-(id)generateRequestOperations;
-(id)initWithOperation:(id)arg0 notificationIDsToMarkRead:(id)arg1 ;
-(id)requestDidParseProtobufObject:(id)arg0 ;
-(id)requestOperationClasses;
-(id)zoneIDsToLock;
-(void)requestDidParseNodeFailure:(id)arg0 ;


@end


#endif