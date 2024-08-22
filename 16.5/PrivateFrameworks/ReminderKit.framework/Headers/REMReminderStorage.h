// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REMREMINDERSTORAGE_H
#define REMREMINDERSTORAGE_H

@class NSArray, NSSet, NSDate, NSString, NSDateComponents, NSURL, NSData;
@protocol NSCopying, NSSecureCoding, REMObjectIDProviding, REMExternalSyncMetadataWritableProviding, REMObjectStorageSupportedVersionProviding;

#import <Foundation/Foundation.h>

#import "REMCRMergeableStringDocument.h"
#import "REMObjectID.h"
#import "REMContactRepresentation.h"
#import "REMDisplayDate.h"
#import "REMResolutionTokenMap.h"
#import "REMUserActivity.h"

@interface REMReminderStorage : NSObject <NSCopying, NSSecureCoding, REMObjectIDProviding, REMExternalSyncMetadataWritableProviding, REMObjectStorageSupportedVersionProviding>

 {
    BOOL _hasDeserializedTitleDocument;
    BOOL _hasDeserializedNotesDocument;
    REMCRMergeableStringDocument *_deserializedTitleDocumentCache;
    REMCRMergeableStringDocument *_deserializedNotesDocumentCache;
    NSUInteger _storeGeneration;
    NSUInteger _copyGeneration;
    NSInteger minimumSupportedVersion;
    NSInteger effectiveMinimumSupportedVersion;
}


@property (retain, nonatomic) REMObjectID *accountID; // ivar: _accountID
@property (retain, nonatomic) NSArray *alarms; // ivar: _alarms
@property (nonatomic) BOOL allDay; // ivar: _allDay
@property (retain, nonatomic) NSSet *assignments; // ivar: _assignments
@property (retain, nonatomic) NSArray *attachments; // ivar: _attachments
@property (nonatomic, getter=isCompleted) BOOL completed; // ivar: _completed
@property (copy, nonatomic) NSDate *completionDate; // ivar: _completionDate
@property (retain, nonatomic) REMContactRepresentation *contactHandles; // ivar: _contactHandles
@property (copy, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (copy, nonatomic) NSString *daCalendarItemUniqueIdentifier; // ivar: _daCalendarItemUniqueIdentifier
@property (copy, nonatomic) NSString *daPushKey; // ivar: daPushKey
@property (copy, nonatomic) NSString *daSyncToken; // ivar: daSyncToken
@property (copy, nonatomic) REMDisplayDate *displayDate; // ivar: _displayDate
@property (copy, nonatomic) NSDateComponents *dueDateComponents; // ivar: _dueDateComponents
@property (readonly, nonatomic) NSInteger effectiveMinimumSupportedVersion;
@property (copy, nonatomic) NSString *externalIdentifier; // ivar: externalIdentifier
@property (copy, nonatomic) NSString *externalModificationTag; // ivar: externalModificationTag
@property (nonatomic) NSInteger flagged; // ivar: _flagged
@property (retain, nonatomic) NSSet *hashtagIDsToUndelete; // ivar: _hashtagIDsToUndelete
@property (retain, nonatomic) NSSet *hashtags; // ivar: _hashtags
@property (nonatomic) NSUInteger icsDisplayOrder; // ivar: _icsDisplayOrder
@property (copy, nonatomic) NSURL *icsUrl; // ivar: _icsUrl
@property (retain, nonatomic) NSData *importedICSData; // ivar: _importedICSData
@property (readonly, nonatomic) BOOL isOverdue;
@property (readonly, nonatomic) BOOL isRecurrent;
@property (copy, nonatomic) NSDate *lastBannerPresentationDate; // ivar: _lastBannerPresentationDate
@property (copy, nonatomic) NSDate *lastModifiedDate; // ivar: _lastModifiedDate
@property (readonly, copy, nonatomic) NSString *legacyNotificationIdentifier;
@property (retain, nonatomic) REMObjectID *listID; // ivar: _listID
@property (readonly, nonatomic) NSInteger minimumSupportedVersion;
@property (retain, nonatomic) NSString *notesAsString; // ivar: _notesAsString
@property (retain, nonatomic) NSData *notesDocumentData; // ivar: _notesDocumentData
@property (retain, nonatomic) REMObjectID *objectID; // ivar: _objectID
@property (retain, nonatomic) REMObjectID *parentReminderID; // ivar: _parentReminderID
@property (retain, nonatomic) NSString *primaryLocaleInferredFromLastUsedKeyboard; // ivar: _primaryLocaleInferredFromLastUsedKeyboard
@property (nonatomic) NSUInteger priority; // ivar: _priority
@property (retain, nonatomic) NSArray *recurrenceRules; // ivar: _recurrenceRules
@property (readonly, nonatomic) REMObjectID *remObjectID;
@property (retain, nonatomic) REMResolutionTokenMap *resolutionTokenMap; // ivar: _resolutionTokenMap
@property (retain, nonatomic) NSData *resolutionTokenMapData; // ivar: _resolutionTokenMapData
@property (copy, nonatomic) NSData *siriFoundInAppsData; // ivar: _siriFoundInAppsData
@property (nonatomic) NSInteger siriFoundInAppsUserConfirmation; // ivar: _siriFoundInAppsUserConfirmation
@property (copy, nonatomic) NSDateComponents *startDateComponents; // ivar: _startDateComponents
@property (retain, nonatomic) NSSet *subtaskIDsToUndelete; // ivar: _subtaskIDsToUndelete
@property (copy, nonatomic) NSString *timeZone; // ivar: _timeZone
@property (retain, nonatomic) NSString *titleAsString; // ivar: _titleAsString
@property (retain, nonatomic) NSData *titleDocumentData; // ivar: _titleDocumentData
@property (copy, nonatomic) REMUserActivity *userActivity; // ivar: _userActivity


+(BOOL)isDate:(id)arg0 overdueAtReferenceDate:(id)arg1 allDay:(BOOL)arg2 showAllDayRemindersAsOverdue:(BOOL)arg3 ;
+(BOOL)supportsSecureCoding;
+(id)cdEntityName;
+(id)newObjectID;
+(id)notesReplicaIDSourceWithAccountID:(id)arg0 reminderID:(id)arg1 ;
+(id)objectIDWithUUID:(id)arg0 ;
+(id)titleReplicaIDSourceWithAccountID:(id)arg0 reminderID:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isUnsupported;
-(NSUInteger)hash;
-(NSUInteger)storeGeneration;
-(id)cdKeyToStorageKeyMap;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)datesDebugDescriptionInTimeZone:(id)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObjectID:(id)arg0 listID:(id)arg1 accountID:(id)arg2 ;
-(id)notesDocument;
-(id)notesReplicaIDSource;
-(id)optionalObjectID;
-(id)titleDocument;
-(id)titleReplicaIDSource;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setNotesDocument:(id)arg0 ;
-(void)setStoreGenerationIfNeeded:(NSUInteger)arg0 ;
-(void)setTitleDocument:(id)arg0 ;
-(void)updateDisplayDate;


@end


#endif