// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDFETCHDATABASECHANGESURLREQUEST_H
#define CKDFETCHDATABASECHANGESURLREQUEST_H

@class NSArray, NSString, NSData, CKRecordZoneID;
@protocol CKDURLRequestPipelining;


#import "CKDURLRequest.h"

@interface CKDFetchDatabaseChangesURLRequest : CKDURLRequest <CKDURLRequestPipelining>



@property (copy, nonatomic) id *anonymousShareProcessingBlock; // ivar: _anonymousShareProcessingBlock
@property (readonly, nonatomic) NSArray *changedZoneIDs; // ivar: _changedZoneIDs
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *deletedZoneIDs; // ivar: _deletedZoneIDs
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *encryptedDataResetDeletedZoneIDs; // ivar: _encryptedDataResetDeletedZoneIDs
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSData *previousServerChangeTokenData; // ivar: _previousServerChangeTokenData
@property (readonly, nonatomic) NSArray *purgedZoneIDs; // ivar: _purgedZoneIDs
@property (retain, nonatomic) CKRecordZoneID *recordZoneID; // ivar: _recordZoneID
@property (nonatomic) NSUInteger resultsLimit; // ivar: _resultsLimit
@property (retain, nonatomic) NSData *serverChangeTokenData; // ivar: _serverChangeTokenData
@property (nonatomic) NSInteger status; // ivar: _status
@property (readonly) Class superclass;
@property (copy, nonatomic) id *zoneChangedBlock; // ivar: _zoneChangedBlock
@property (copy, nonatomic) id *zoneDeletedBlock; // ivar: _zoneDeletedBlock
@property (copy, nonatomic) id *zoneDeletedDueToEncryptedDataResetBlock; // ivar: _zoneDeletedDueToEncryptedDataResetBlock
@property (copy, nonatomic) id *zonePurgedBlock; // ivar: _zonePurgedBlock


-(BOOL)allowsAnonymousAccount;
-(BOOL)requiresCKAnonymousUserIDs;
-(id)generateRequestOperations;
-(id)initWithOperation:(id)arg0 previousServerChangeTokenData:(id)arg1 ;
-(id)requestDidParseProtobufObject:(id)arg0 ;
-(id)requestOperationClasses;


@end


#endif