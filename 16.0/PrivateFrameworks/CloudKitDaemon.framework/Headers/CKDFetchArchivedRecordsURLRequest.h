// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDFETCHARCHIVEDRECORDSURLREQUEST_H
#define CKDFETCHARCHIVEDRECORDSURLREQUEST_H

@class NSDictionary, NSString, NSSet, NSMutableDictionary, NSArray;
@protocol CKDURLRequestPipelining;


#import "CKDURLRequest.h"

@interface CKDFetchArchivedRecordsURLRequest : CKDURLRequest <CKDURLRequestPipelining>



@property (retain, nonatomic) NSDictionary *configurationsByRecordZoneID; // ivar: _configurationsByRecordZoneID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSSet *desiredAssetKeys; // ivar: _desiredAssetKeys
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *nodeErrorsByZoneID; // ivar: _nodeErrorsByZoneID
@property (copy, nonatomic) id *recordFetchedBlock; // ivar: _recordFetchedBlock
@property (copy, nonatomic) NSArray *recordZoneIDs; // ivar: _recordZoneIDs
@property (retain, nonatomic) NSMutableDictionary *requestResultsByRecordZoneID; // ivar: _requestResultsByRecordZoneID
@property (readonly, nonatomic) NSDictionary *resultsByRecordZoneID;
@property (nonatomic) BOOL shouldFetchAssetContent; // ivar: _shouldFetchAssetContent
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSDictionary *zoneErrorsByZoneID;
@property (retain, nonatomic) NSMutableDictionary *zoneIDsByRequestOperationUUID; // ivar: _zoneIDsByRequestOperationUUID


-(id)_handleRecords:(id)arg0 ;
-(id)generateRequestOperations;
-(id)initWithOperation:(id)arg0 recordZoneIDs:(id)arg1 configurationsByRecordZoneID:(id)arg2 ;
-(id)requestDidParseProtobufObject:(id)arg0 ;
-(id)requestOperationClasses;
-(id)zoneIDsToLock;
-(void)requestDidParseNodeFailure:(id)arg0 ;


@end


#endif