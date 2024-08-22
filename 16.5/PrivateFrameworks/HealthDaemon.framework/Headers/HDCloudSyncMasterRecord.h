// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCLOUDSYNCMASTERRECORD_H
#define HDCLOUDSYNCMASTERRECORD_H

@class NSSet;


#import "HDCloudSyncRecord.h"

@interface HDCloudSyncMasterRecord : HDCloudSyncRecord

@property (retain, nonatomic) NSSet *disabledOwnerIdentifiers; // ivar: _disabledOwnerIdentifiers


+(BOOL)hasFutureSchema:(id)arg0 ;
+(BOOL)isMasterRecord:(id)arg0 ;
+(BOOL)isMasterRecordID:(id)arg0 ;
+(id)fieldsForUnprotectedSerialization;
+(id)recordIDWithZoneID:(id)arg0 ;
+(id)recordType;
+(id)recordWithCKRecord:(id)arg0 error:(*id)arg1 ;
-(id)description;
-(id)initInSyncCircle:(id)arg0 disabledOwnerIdentifiers:(id)arg1 ;
-(id)initInZone:(id)arg0 disabledOwnerIdentifiers:(id)arg1 ;
-(id)initWithCKRecord:(id)arg0 schemaVersion:(NSInteger)arg1 ;
-(id)printDescription;
-(id)serializeUnderlyingMessage;


@end


#endif