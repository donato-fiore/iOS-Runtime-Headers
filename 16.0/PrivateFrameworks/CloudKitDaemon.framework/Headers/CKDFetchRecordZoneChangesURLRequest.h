// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDFETCHRECORDZONECHANGESURLREQUEST_H
#define CKDFETCHRECORDZONECHANGESURLREQUEST_H

@class NSDictionary, NSString, NSSet, NSMutableDictionary, NSMutableArray, NSArray;
@protocol CKDURLRequestPipelining;


#import "CKDURLRequest.h"

@interface CKDFetchRecordZoneChangesURLRequest : CKDURLRequest <CKDURLRequestPipelining>



@property (nonatomic) NSInteger changeTypes; // ivar: _changeTypes
@property (retain, nonatomic) NSDictionary *configurationsByRecordZoneID; // ivar: _configurationsByRecordZoneID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSSet *desiredAssetKeys; // ivar: _desiredAssetKeys
@property (nonatomic) BOOL fetchChangesForMergeableValues; // ivar: _fetchChangesForMergeableValues
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *nodeErrorsByZoneID; // ivar: _nodeErrorsByZoneID
@property (copy, nonatomic) id *recordDeletedBlock; // ivar: _recordDeletedBlock
@property (retain, nonatomic) NSMutableArray *recordResponses; // ivar: _recordResponses
@property (copy, nonatomic) NSArray *recordZoneIDs; // ivar: _recordZoneIDs
@property (copy, nonatomic) id *recordsChangedBlock; // ivar: _recordsChangedBlock
@property (retain, nonatomic) NSMutableDictionary *requestResultsByRecordZoneID; // ivar: _requestResultsByRecordZoneID
@property (readonly, nonatomic) NSDictionary *resultsByRecordZoneID;
@property (nonatomic) BOOL shouldFetchAssetContent; // ivar: _shouldFetchAssetContent
@property (readonly) Class superclass;
@property (retain, nonatomic) NSDictionary *supplementalChangeTokenByZoneID; // ivar: _supplementalChangeTokenByZoneID
@property (readonly, nonatomic) NSDictionary *zoneErrorsByZoneID;
@property (retain, nonatomic) NSMutableDictionary *zoneIDsByRequestOperationUUID; // ivar: _zoneIDsByRequestOperationUUID


-(BOOL)allowsAnonymousAccount;
-(BOOL)handlesAnonymousCKUserIDPropagation;
-(BOOL)requestGETPreAuth;
-(id)_handleRecordChanges:(id)arg0 deltaChanges:(id)arg1 forZoneID:(id)arg2 ;
-(id)generateRequestOperations;
-(id)initWithOperation:(id)arg0 recordZoneIDs:(id)arg1 configurationsByRecordZoneID:(id)arg2 ;
-(id)requestDidParseProtobufObject:(id)arg0 ;
-(id)requestOperationClasses;
-(id)zoneIDsToLock;
-(void)requestDidComplete;
-(void)requestDidParseNodeFailure:(id)arg0 ;


@end


#endif