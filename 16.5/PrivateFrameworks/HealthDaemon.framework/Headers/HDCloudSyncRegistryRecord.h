// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCLOUDSYNCREGISTRYRECORD_H
#define HDCLOUDSYNCREGISTRYRECORD_H

@class NSArray, NSSet, NSString, NSDate, HKProfileIdentifier;


#import "HDCloudSyncRecord.h"
#import "HDCloudSyncCodableRegistry.h"

@interface HDCloudSyncRegistryRecord : HDCloudSyncRecord {
    HDCloudSyncCodableRegistry *_underlyingRegistry;
}


@property (readonly, copy, nonatomic) NSArray *childHeaderRecordIDs;
@property (nonatomic) BOOL deleted;
@property (retain, nonatomic) NSSet *disabledOwnerIdentifiers;
@property (copy, nonatomic) NSString *displayFirstName;
@property (copy, nonatomic) NSString *displayLastName;
@property (copy, nonatomic) NSDate *displayNameModificationDate;
@property (readonly, copy, nonatomic) NSSet *ownerIdentifiers;
@property (copy, nonatomic) HKProfileIdentifier *ownerProfileIdentifier;
@property (copy, nonatomic) HKProfileIdentifier *sharedProfileIdentifier;


+(BOOL)hasFutureSchema:(id)arg0 ;
+(BOOL)isRegistryRecord:(id)arg0 ;
+(BOOL)isRegistryRecordID:(id)arg0 ;
+(BOOL)requiresUnderlyingMessage;
+(id)recordIDWithZoneID:(id)arg0 ;
+(id)recordType;
+(id)sharedProfileIdentifierForOwnerProfileIdentifier:(id)arg0 ;
-(id)description;
-(id)initInZone:(id)arg0 ownerProfileIdentifier:(id)arg1 ;
-(id)initInZone:(id)arg0 ownerProfileIdentifier:(id)arg1 sharedProfileIdentifier:(id)arg2 ;
-(id)initWithCKRecord:(id)arg0 schemaVersion:(NSInteger)arg1 ;
-(id)printDescription;
-(id)serializeUnderlyingMessage;
-(id)storeIdentifiersForOwnerIdentifier:(id)arg0 ;
-(void)addStoreIdentifier:(id)arg0 ownerIdentifier:(id)arg1 ;
-(void)removeStoreIdentifier:(id)arg0 ownerIdentifier:(id)arg1 ;


@end


#endif