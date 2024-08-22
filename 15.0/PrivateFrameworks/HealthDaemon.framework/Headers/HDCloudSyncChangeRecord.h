// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCLOUDSYNCCHANGERECORD_H
#define HDCLOUDSYNCCHANGERECORD_H

@class NSNumber, NSURL, CKRecordID;


#import "HDCloudSyncRecord.h"
#import "HDCloudSyncCodableChange.h"
#import "HDSyncAnchorRangeMap.h"

@interface HDCloudSyncChangeRecord : HDCloudSyncRecord {
    HDCloudSyncCodableChange *_underlyingChange;
}


@property (readonly, nonatomic) NSInteger changeIndex;
@property (readonly, copy, nonatomic) NSNumber *changeSize;
@property (readonly, copy, nonatomic) NSURL *changesetArchiveFileURL;
@property (readonly, nonatomic) HDSyncAnchorRangeMap *decodedSyncAnchorRangeMap;
@property (readonly, nonatomic) BOOL finalForSequence;
@property (readonly, nonatomic) int protocolVersion;
@property (readonly, copy, nonatomic) CKRecordID *sequenceRecordID;


+(BOOL)hasFutureSchema:(id)arg0 ;
+(BOOL)isChangeRecord:(id)arg0 ;
+(BOOL)isChangeRecord:(id)arg0 inSequence:(id)arg1 ;
+(BOOL)isChangeRecordID:(id)arg0 ;
+(BOOL)requiresUnderlyingMessage;
+(NSInteger)bytesPerChangeRecordAssetThreshold;
+(NSInteger)bytesPerChangeRecordAssetThresholdHardLimit;
+(id)assetKeys;
+(id)changesetArchiveContentDataForCKRecord:(id)arg0 error:(*id)arg1 ;
+(id)changesetArchiveURLForCKRecord:(id)arg0 error:(*id)arg1 ;
+(id)fieldsForUnprotectedSerialization;
+(id)nonAssetKeys;
+(id)recordType;
+(id)recordWithCKRecord:(id)arg0 error:(*id)arg1 ;
-(BOOL)shouldFetchAssetContentInMemory;
-(NSInteger)compare:(id)arg0 ;
-(id)description;
-(id)initWithCKRecord:(id)arg0 schemaVersion:(NSInteger)arg1 ;
-(id)initWithSyncAnchorRangeMap:(id)arg0 changeIndex:(NSInteger)arg1 changesetAsset:(id)arg2 changeSize:(NSInteger)arg3 protocolVersion:(int)arg4 finalForSequence:(BOOL)arg5 sequenceRecordID:(id)arg6 record:(id)arg7 schemaVersion:(NSInteger)arg8 ;
-(id)initWithSyncAnchorRangeMap:(id)arg0 finalForSequence:(BOOL)arg1 changesetArchiveFileHandle:(id)arg2 sequenceRecord:(id)arg3 protocolVersion:(int)arg4 ;
-(id)printDescription;
-(id)serializeUnderlyingMessage;


@end


#endif