// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCLOUDSYNCMEDICALIDRECORD_H
#define HDCLOUDSYNCMEDICALIDRECORD_H

@class NSArray;


#import "HDCloudSyncRecord.h"
#import "HDCloudSyncCodableMedicalID.h"
#import "HDCodableMedicalIDData.h"

@interface HDCloudSyncMedicalIDRecord : HDCloudSyncRecord {
    HDCloudSyncCodableMedicalID *_underlyingCodableMedicalIDMessage;
}


@property (retain, nonatomic) HDCodableMedicalIDData *medicalIDData;
@property (readonly, nonatomic) NSArray *medicalIDLogs;


+(BOOL)hasFutureSchema:(id)arg0 ;
+(BOOL)isMedicalIDRecord:(id)arg0 ;
+(BOOL)requiresUnderlyingMessage;
+(id)recordIDWithZoneID:(id)arg0 ;
+(id)recordType;
-(id)description;
-(id)initInSyncCircle:(id)arg0 ;
-(id)initInZone:(id)arg0 ;
-(id)initWithCKRecord:(id)arg0 schemaVersion:(NSInteger)arg1 ;
-(id)printDescription;
-(id)serializeUnderlyingMessage;
-(void)addMedicalIDEvent:(id)arg0 ;


@end


#endif