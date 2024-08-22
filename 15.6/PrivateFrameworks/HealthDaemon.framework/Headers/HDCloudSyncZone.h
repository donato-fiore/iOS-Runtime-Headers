// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCLOUDSYNCZONE_H
#define HDCLOUDSYNCZONE_H

@class NSMutableArray, NSArray, NSUUID, CKShare, CKRecordID;

#import <Foundation/Foundation.h>

#import "HDCloudSyncDataUploadRequestRecord.h"
#import "HDCloudSyncMasterRecord.h"
#import "HDCloudSyncRegistryRecord.h"
#import "HDCloudSyncSharedSummaryRelationshipRecord.h"
#import "HDCloudSyncRepository.h"
#import "HDCloudSyncStore.h"
#import "HDCloudSyncStoreRecord.h"
#import "HDCloudSyncZoneIdentifier.h"

@interface HDCloudSyncZone : NSObject {
    NSMutableArray *_records;
    NSMutableArray *_storeRecords;
    NSMutableArray *_orphanedSequenceRecords;
}


@property (readonly, nonatomic) NSArray *authorizationRecords; // ivar: _authorizationRecords
@property (readonly, nonatomic) HDCloudSyncDataUploadRequestRecord *dataUploadRequestRecord; // ivar: _dataUploadRequestRecord
@property (nonatomic) BOOL hasFutureSchemaRecord; // ivar: _hasFutureSchemaRecord
@property (nonatomic) BOOL hasLostIdentity; // ivar: _hasLostIdentity
@property (readonly, nonatomic) BOOL hasOrphanedSequenceRecords;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) HDCloudSyncMasterRecord *masterRecord; // ivar: _masterRecord
@property (readonly, nonatomic) NSArray *participantRecords; // ivar: _participantRecords
@property (nonatomic) NSInteger purpose; // ivar: _purpose
@property (readonly, nonatomic) NSInteger recordCount;
@property (readonly, copy, nonatomic) NSArray *recordNames;
@property (readonly, copy, nonatomic) NSArray *records;
@property (readonly, nonatomic) HDCloudSyncRegistryRecord *registryRecord; // ivar: _registryRecord
@property (readonly, nonatomic) HDCloudSyncSharedSummaryRelationshipRecord *relationshipRecord; // ivar: _relationshipRecord
@property (readonly, weak, nonatomic) HDCloudSyncRepository *repository; // ivar: _repository
@property (retain, nonatomic) HDCloudSyncStore *store; // ivar: _store
@property (readonly, copy, nonatomic) NSUUID *storeIdentifier;
@property (readonly, nonatomic) HDCloudSyncStoreRecord *storeRecord;
@property (readonly, copy, nonatomic) NSArray *storeRecords;
@property (readonly, nonatomic) NSArray *transactionRecords; // ivar: _transactionRecords
@property (nonatomic) BOOL validatedForSharing; // ivar: _validatedForSharing
@property (readonly, copy, nonatomic) HDCloudSyncZoneIdentifier *zoneIdentifier; // ivar: _zoneIdentifier
@property (retain, nonatomic) CKShare *zoneShare; // ivar: _zoneShare
@property (readonly, copy, nonatomic) CKRecordID *zoneShareRecordID;
@property (readonly, nonatomic) NSInteger zoneType; // ivar: _zoneType


-(BOOL)_addSubscriptionRecord:(id)arg0 error:(*id)arg1 ;
-(BOOL)addRecord:(id)arg0 error:(*id)arg1 ;
-(id)description;
-(id)initForZoneIdentifier:(id)arg0 repository:(id)arg1 type:(NSInteger)arg2 ;
-(void)removeRecord:(id)arg0 ;


@end


#endif