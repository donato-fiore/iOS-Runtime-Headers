// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSCKRECORDMETADATA_H
#define NSCKRECORDMETADATA_H

@class NSString, NSData, NSNumber, NSSet;


#import "NSManagedObject.h"
#import "NSCKRecordZoneMetadata.h"

@interface NSCKRecordMetadata : NSManagedObject

@property (retain, nonatomic) NSString *ckRecordName;
@property (retain, nonatomic) NSData *ckRecordSystemFields;
@property (retain, nonatomic) NSData *ckShare;
@property (retain, nonatomic) NSData *encodedRecord;
@property (retain, nonatomic) NSNumber *entityId;
@property (retain, nonatomic) NSNumber *entityPK;
@property (retain, nonatomic) NSNumber *lastExportedTransactionNumber;
@property (retain, nonatomic) NSSet *moveReceipts;
@property (nonatomic) BOOL needsCloudDelete;
@property (nonatomic) BOOL needsLocalDelete;
@property (nonatomic) BOOL needsUpload;
@property (retain, nonatomic) NSNumber *pendingExportChangeTypeNumber;
@property (retain, nonatomic) NSNumber *pendingExportTransactionNumber;
@property (retain, nonatomic) NSCKRecordZoneMetadata *recordZone;


+(id)encodeRecord:(id)arg0 error:(*id)arg1 ;
+(id)entityPath;
+(id)insertMetadataForObject:(id)arg0 setRecordName:(BOOL)arg1 inZoneWithID:(id)arg2 recordNamePrefix:(id)arg3 error:(*id)arg4 ;
+(id)recordFromEncodedData:(id)arg0 error:(*id)arg1 ;
-(BOOL)mergeMoveReceiptsWithData:(id)arg0 error:(*id)arg1 ;
-(id)createEncodedMoveReceiptData:(*id)arg0 ;
-(id)createRecordFromSystemFields;


@end


#endif