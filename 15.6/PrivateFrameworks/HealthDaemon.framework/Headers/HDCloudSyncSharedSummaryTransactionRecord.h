// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCLOUDSYNCSHAREDSUMMARYTRANSACTIONRECORD_H
#define HDCLOUDSYNCSHAREDSUMMARYTRANSACTIONRECORD_H

@class NSUUID, NSData, NSString, NSArray;


#import "HDCloudSyncRecord.h"
#import "HDCloudSyncCodableSharedSummaryTransactionRecord.h"

@interface HDCloudSyncSharedSummaryTransactionRecord : HDCloudSyncRecord {
    HDCloudSyncCodableSharedSummaryTransactionRecord *_underlyingTransactionRecord;
}


@property (readonly, copy, nonatomic) NSUUID *UUID;
@property (readonly, copy, nonatomic) NSData *metadata;
@property (readonly, copy, nonatomic) NSString *sourceDeviceIdentifier;
@property (readonly, copy, nonatomic) NSArray *summaryIdentifiers;


+(BOOL)hasFutureSchema:(id)arg0 ;
+(BOOL)isTransactionRecord:(id)arg0 ;
+(BOOL)requiresUnderlyingMessage;
+(BOOL)shouldSerializeUnderlyingMessageAsProtected;
+(id)recordIDWithZoneID:(id)arg0 UUID:(id)arg1 ;
+(id)recordType;
-(id)description;
-(id)initInZone:(id)arg0 UUID:(id)arg1 sourceDeviceIdentifier:(id)arg2 summaryIdentifiers:(id)arg3 metadata:(id)arg4 ;
-(id)initWithCKRecord:(id)arg0 schemaVersion:(NSInteger)arg1 ;
-(id)printDescription;
-(id)serializeUnderlyingMessage;


@end


#endif