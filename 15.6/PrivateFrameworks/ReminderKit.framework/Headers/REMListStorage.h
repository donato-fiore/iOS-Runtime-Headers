// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REMLISTSTORAGE_H
#define REMLISTSTORAGE_H

@class NSOrderedSet, NSString, NSArray, NSSet, NSDictionary, NSDate, NSData;
@protocol NSCopying, NSSecureCoding, REMObjectIDProviding, REMExternalSyncMetadataWritableProviding, REMObjectStorageSupportedVersionProviding;

#import <Foundation/Foundation.h>

#import "REMObjectID.h"
#import "REMColor.h"
#import "REMResolutionTokenMap.h"

@interface REMListStorage : NSObject <NSCopying, NSSecureCoding, REMObjectIDProviding, REMExternalSyncMetadataWritableProviding, REMObjectStorageSupportedVersionProviding>

 {
    NSOrderedSet *_reminderIDsMergeableOrdering;
    NSUInteger _storeGeneration;
    NSUInteger _copyGeneration;
    NSInteger minimumSupportedVersion;
    NSInteger effectiveMinimumSupportedVersion;
}


@property (retain, nonatomic) REMObjectID *accountID; // ivar: _accountID
@property (retain, nonatomic) NSString *badgeEmblem; // ivar: _badgeEmblem
@property (retain, nonatomic) NSArray *calDAVNotifications; // ivar: _calDAVNotifications
@property (retain, nonatomic) NSSet *childListIDsToUndelete; // ivar: _childListIDsToUndelete
@property (retain, nonatomic) NSSet *childSmartListIDsToUndelete; // ivar: _childSmartListIDsToUndelete
@property (retain, nonatomic) REMColor *color; // ivar: _color
@property (copy, nonatomic) NSString *currentUserShareParticipantID; // ivar: _currentUserShareParticipantID
@property (retain, nonatomic) NSDictionary *daBulkRequests; // ivar: _daBulkRequests
@property (nonatomic) NSInteger daDisplayOrder; // ivar: _daDisplayOrder
@property (retain, nonatomic) NSString *daExternalIdentificationTag; // ivar: _daExternalIdentificationTag
@property (nonatomic) BOOL daIsEventOnlyContainer; // ivar: _daIsEventOnlyContainer
@property (nonatomic) BOOL daIsImmutable; // ivar: _daIsImmutable
@property (nonatomic) BOOL daIsNotificationsCollection; // ivar: _daIsNotificationsCollection
@property (nonatomic) BOOL daIsReadOnly; // ivar: _daIsReadOnly
@property (copy, nonatomic) NSString *daPushKey; // ivar: daPushKey
@property (copy, nonatomic) NSString *daSyncToken; // ivar: daSyncToken
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSInteger effectiveMinimumSupportedVersion;
@property (copy, nonatomic) NSString *externalIdentifier; // ivar: externalIdentifier
@property (copy, nonatomic) NSString *externalModificationTag; // ivar: externalModificationTag
@property (nonatomic) BOOL isGroup; // ivar: _isGroup
@property (nonatomic) BOOL isPlaceholder; // ivar: _isPlaceholder
@property (copy, nonatomic) NSDate *lastUserAccessDate; // ivar: _lastUserAccessDate
@property (readonly, nonatomic) NSInteger minimumSupportedVersion;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) REMObjectID *objectID; // ivar: _objectID
@property (retain, nonatomic) REMObjectID *parentAccountID; // ivar: _parentAccountID
@property (retain, nonatomic) REMObjectID *parentListID; // ivar: _parentListID
@property (readonly, nonatomic) REMObjectID *remObjectID;
@property (retain, nonatomic) NSOrderedSet *reminderIDsMergeableOrdering;
@property (retain, nonatomic) NSData *reminderIDsMergeableOrderingData; // ivar: _reminderIDsMergeableOrderingData
@property (retain, nonatomic) NSDictionary *reminderIDsOrderingHints; // ivar: _reminderIDsOrderingHints
@property (retain, nonatomic) NSSet *reminderIDsToUndelete; // ivar: _reminderIDsToUndelete
@property (nonatomic) BOOL remindersICSDisplayOrderChanged; // ivar: _remindersICSDisplayOrderChanged
@property (retain, nonatomic) REMResolutionTokenMap *resolutionTokenMap; // ivar: _resolutionTokenMap
@property (retain, nonatomic) NSData *resolutionTokenMapData; // ivar: _resolutionTokenMapData
@property (copy, nonatomic) NSString *sharedOwnerAddress; // ivar: _sharedOwnerAddress
@property (retain, nonatomic) REMObjectID *sharedOwnerID; // ivar: _sharedOwnerID
@property (copy, nonatomic) NSString *sharedOwnerName; // ivar: _sharedOwnerName
@property (retain, nonatomic) NSArray *sharees; // ivar: _sharees
@property (nonatomic) NSInteger sharingStatus; // ivar: _sharingStatus
@property (nonatomic) BOOL showingLargeAttachments; // ivar: _showingLargeAttachments
@property (copy, nonatomic) NSString *sortingStyle; // ivar: sortingStyle


+(BOOL)_forceDisableFullRemindersSorting;
+(BOOL)supportsSecureCoding;
+(id)cdEntityName;
+(id)newObjectID;
+(id)objectIDWithUUID:(id)arg0 ;
+(id)reminderIDUUIDStringsJSONDataFromReminderIDsMergeableOrdering:(id)arg0 error:(*id)arg1 ;
+(id)reminderIDsMergeableOrderingFromReminderIDUUIDStringsJSONData:(id)arg0 error:(*id)arg1 ;
+(void)set_forceDisableFullRemindersSorting:(BOOL)arg0 ;
-(BOOL)hasDeserializedReminderIDsMergeableOrdering;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isUnsupported;
-(NSUInteger)hash;
-(NSUInteger)storeGeneration;
-(id)cdKeyToStorageKeyMap;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)ekColor;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObjectID:(id)arg0 accountID:(id)arg1 name:(id)arg2 ;
-(id)initWithObjectID:(id)arg0 accountID:(id)arg1 name:(id)arg2 isGroup:(BOOL)arg3 reminderIDsMergeableOrdering:(id)arg4 ;
-(id)initWithObjectID:(id)arg0 accountID:(id)arg1 name:(id)arg2 isGroup:(BOOL)arg3 reminderIDsMergeableOrderingData:(id)arg4 ;
-(id)optionalObjectID;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setStoreGenerationIfNeeded:(NSUInteger)arg0 ;


@end


#endif