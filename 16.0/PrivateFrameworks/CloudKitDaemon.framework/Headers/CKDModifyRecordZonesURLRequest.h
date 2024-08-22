// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDMODIFYRECORDZONESURLREQUEST_H
#define CKDMODIFYRECORDZONESURLREQUEST_H

@class NSDate, NSMutableDictionary, NSArray;


#import "CKDURLRequest.h"

@interface CKDModifyRecordZonesURLRequest : CKDURLRequest

@property (retain, nonatomic) NSDate *lastMissingManateeIdentityErrorDate; // ivar: _lastMissingManateeIdentityErrorDate
@property (nonatomic) BOOL markZonesAsUserPurged; // ivar: _markZonesAsUserPurged
@property (retain, nonatomic) NSMutableDictionary *recordZoneIDByRequestID; // ivar: _recordZoneIDByRequestID
@property (retain, nonatomic) NSArray *recordZoneIDsToDelete; // ivar: _recordZoneIDsToDelete
@property (copy, nonatomic) id *recordZoneModifiedBlock; // ivar: _recordZoneModifiedBlock
@property (retain, nonatomic) NSArray *recordZonesToSave; // ivar: _recordZonesToSave


-(BOOL)requiresCKAnonymousUserIDs;
-(id)generateRequestOperations;
-(id)initWithOperation:(id)arg0 recordZonesToSave:(id)arg1 recordZoneIDsToDelete:(id)arg2 ;
-(id)requestDidParseProtobufObject:(id)arg0 ;
-(id)requestOperationClasses;
-(id)zoneIDsToLock;
-(void)requestDidParseNodeFailure:(id)arg0 ;


@end


#endif