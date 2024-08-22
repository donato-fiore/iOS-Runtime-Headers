// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSCKRECORDZONEMETADATA_H
#define NSCKRECORDZONEMETADATA_H

@class NSString, CKServerChangeToken, NSData, NSNumber, NSDate, NSSet;


#import "NSManagedObject.h"
#import "NSCKDatabaseMetadata.h"

@interface NSCKRecordZoneMetadata : NSManagedObject

@property (retain, nonatomic) NSString *ckOwnerName;
@property (retain, nonatomic) NSString *ckRecordZoneName;
@property (retain, nonatomic) CKServerChangeToken *currentChangeToken;
@property (retain, nonatomic) NSCKDatabaseMetadata *database;
@property (retain, nonatomic) NSData *encodedShareData;
@property (nonatomic) BOOL hasRecordZone;
@property (retain, nonatomic) NSNumber *hasRecordZoneNum;
@property (nonatomic) BOOL hasSubscription;
@property (retain, nonatomic) NSNumber *hasSubscriptionNum;
@property (retain, nonatomic) NSDate *lastFetchDate;
@property (retain, nonatomic) NSSet *mirroredRelationships;
@property (nonatomic) BOOL needsImport;
@property (nonatomic) BOOL needsNewShareInvitation;
@property (nonatomic) BOOL needsRecoveryFromIdentityLoss;
@property (nonatomic) BOOL needsRecoveryFromUserPurge;
@property (nonatomic) BOOL needsRecoveryFromZoneDelete;
@property (nonatomic) BOOL needsShareDelete;
@property (nonatomic) BOOL needsShareUpdate;
@property (retain, nonatomic) NSSet *queries;
@property (retain, nonatomic) NSSet *records;
@property (nonatomic) BOOL supportsAtomicChanges;
@property (nonatomic) BOOL supportsFetchChanges;
@property (nonatomic) BOOL supportsRecordSharing;
@property (nonatomic) BOOL supportsZoneSharing;


+(id)entityPath;
+(id)fetchZoneIDsAssignedToObjectsWithIDs:(id)arg0 fromStore:(id)arg1 inContext:(id)arg2 error:(*id)arg3 ;


@end


#endif