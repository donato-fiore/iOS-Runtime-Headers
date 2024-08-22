// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCLOUDSYNCSHAREDSUMMARYRECORD_H
#define HDCLOUDSYNCSHAREDSUMMARYRECORD_H

@class NSUUID, NSArray, NSString, NSData;


#import "HDCloudSyncRecord.h"
#import "HDCloudSyncCodableSharedSummaryRecord.h"

@interface HDCloudSyncSharedSummaryRecord : HDCloudSyncRecord {
    HDCloudSyncCodableSharedSummaryRecord *_underlyingSummaryRecord;
}


@property (readonly, copy, nonatomic) NSUUID *UUID;
@property (readonly, copy, nonatomic) NSArray *authorizationCategories;
@property (readonly, copy, nonatomic) NSString *compatibilityVersion;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSArray *objectTypes;
@property (readonly, copy, nonatomic) NSString *package;
@property (readonly, copy, nonatomic) NSData *summaryData;
@property (readonly, copy, nonatomic) NSString *version;


+(BOOL)hasFutureSchema:(id)arg0 ;
+(BOOL)isSummaryRecord:(id)arg0 ;
+(BOOL)requiresUnderlyingMessage;
+(BOOL)shouldSerializeUnderlyingMessageAsProtected;
+(id)recordIDWithZoneID:(id)arg0 UUID:(id)arg1 ;
+(id)recordType;
-(id)description;
-(id)initInZone:(id)arg0 UUID:(id)arg1 package:(id)arg2 name:(id)arg3 version:(id)arg4 compatibilityVersion:(id)arg5 objectTypes:(id)arg6 authorizationCategories:(id)arg7 summaryData:(id)arg8 ;
-(id)initWithCKRecord:(id)arg0 schemaVersion:(NSInteger)arg1 ;
-(id)printDescription;
-(id)serializeUnderlyingMessage;


@end


#endif