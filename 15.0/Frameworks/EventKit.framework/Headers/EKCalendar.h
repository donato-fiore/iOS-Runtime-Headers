// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKCALENDAR_H
#define EKCALENDAR_H

@class NSString;


#import "EKObject.h"
#import "EKSource.h"

@interface EKCalendar : EKObject

@property (nonatomic) *CGColor CGColor;
@property (readonly, nonatomic) NSUInteger allowedEntityTypes;
@property (readonly, nonatomic) BOOL allowsContentModifications;
@property (nonatomic) NSUInteger cachedJunkStatus; // ivar: _cachedJunkStatus
@property (readonly, nonatomic) NSString *calendarIdentifier;
@property (readonly, nonatomic, getter=isImmutable) BOOL immutable;
@property (retain, nonatomic) EKSource *source;
@property (readonly, nonatomic, getter=isSubscribed) BOOL subscribed;
@property (readonly, nonatomic) NSUInteger supportedEventAvailabilities;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) NSInteger type;


+(BOOL)isWeakRelationship;
+(Class)frozenClass;
+(id)EKObjectChangeSummarizer_multiValueDiffKeys;
+(id)EKObjectChangeSummarizer_singleValueDiffKeys;
+(id)_eventKitBundle;
+(id)calendarForEntityType:(NSUInteger)arg0 eventStore:(id)arg1 ;
+(id)calendarForEntityTypes:(NSUInteger)arg0 eventStore:(id)arg1 ;
+(id)calendarWithEventStore:(id)arg0 ;
+(id)knownIdentityKeysForComparison;
+(id)knownRelationshipMultiValueKeys;
+(id)knownRelationshipSingleValueKeys;
+(id)knownRelationshipWeakKeys;
+(id)knownSingleValueKeysForComparison;
+(id)rowIDsForCalendars:(id)arg0 ;
+(id)typeDescription:(NSInteger)arg0 ;
-(BOOL)_anotherCalendarForDefaultSchedulingExists;
-(BOOL)_anotherCalendarForRemindersExists;
-(BOOL)_anyCalendarOfType:(NSUInteger)arg0 inSameSourceExistsPassingTest:(id)arg1 ;
-(BOOL)_flagValueWithMask:(unsigned int)arg0 ;
-(BOOL)_reset;
-(BOOL)_validateAccessConsent:(*id)arg0 ;
-(BOOL)_validateDeletable:(*id)arg0 ;
-(BOOL)_validateDeletableHelper:(*id)arg0 ;
-(BOOL)allowEvents;
-(BOOL)allowReminders;
-(BOOL)allowsIgnoringSharedEventChangeNotifications;
-(BOOL)allowsScheduling;
-(BOOL)automaticEventLocationGeocodingAllowed;
-(BOOL)canBePublished;
-(BOOL)canBeShared;
-(BOOL)canMergeWithCalendar:(id)arg0 ;
-(BOOL)couldBeJunk;
-(BOOL)eligibleForDefaultSchedulingCalendar;
-(BOOL)getColorRed:(*int)arg0 green:(*int)arg1 blue:(*int)arg2 ;
-(BOOL)hasEvents;
-(BOOL)hasSharees;
-(BOOL)hasTasks;
-(BOOL)isAffectingAvailability;
-(BOOL)isAlarmAcknowledgedPropertyDirty;
-(BOOL)isColorDisplayOnly;
-(BOOL)isDefaultSchedulingCalendar;
-(BOOL)isDeletable;
-(BOOL)isFacebookBirthdayCalendar;
-(BOOL)isFamilyCalendar;
-(BOOL)isHidden;
-(BOOL)isHolidaySubscribedCalendar;
-(BOOL)isIgnoringEventAlerts;
-(BOOL)isIgnoringSharedCalendarNotifications;
-(BOOL)isInbox;
-(BOOL)isManaged;
-(BOOL)isMarkedImmutableSharees;
-(BOOL)isMarkedUndeletable;
-(BOOL)isMutableNaturalLanguageSuggestionsCalendar;
-(BOOL)isMutableSuggestionsCalendar;
-(BOOL)isNaturalLanguageSuggestedEventCalendar;
-(BOOL)isNotificationsCollection;
-(BOOL)isPublished;
-(BOOL)isSharingInvitation;
-(BOOL)isSuggestedEventCalendar;
-(BOOL)isSuggestionsCalendar;
-(BOOL)isSyncing;
-(BOOL)prohibitsScheduling;
-(BOOL)readOnly;
-(BOOL)refresh;
-(BOOL)remove:(*id)arg0 ;
-(BOOL)save:(*id)arg0 ;
-(BOOL)stripAlarms;
-(BOOL)stripAttachments;
-(BOOL)supportsJunkReporting;
-(BOOL)validate:(*id)arg0 ;
-(NSInteger)deletionWarningsMask;
-(NSUInteger)invitationStatus;
-(NSUInteger)lastSyncError;
-(NSUInteger)sharingInvitationResponse;
-(NSUInteger)sharingStatus;
-(id)UUID;
-(id)alarms;
-(id)allAlarms;
-(id)calendarError;
-(id)colorString;
-(id)colorStringRaw;
-(id)description;
-(id)digest;
-(id)exportData;
-(id)exportDataWithOptions:(NSUInteger)arg0 ;
-(id)externalID;
-(id)externalIDTag;
-(id)externalModificationTag;
-(id)externalRepresentation;
-(id)externalURI;
-(id)findOriginalAlarmStartingWith:(id)arg0 ;
-(id)init;
-(id)lastSyncEndDate;
-(id)lastSyncErrorData;
-(id)lastSyncErrorUserInfo;
-(id)lastSyncStartDate;
-(id)notes;
-(id)ownerIdentityAddress;
-(id)ownerIdentityAddressString;
-(id)ownerIdentityDisplayName;
-(id)ownerIdentityEmail;
-(id)ownerIdentityFirstName;
-(id)ownerIdentityLastName;
-(id)ownerIdentityOrganizer;
-(id)ownerIdentityPhoneNumber;
-(id)pubcalAccountID;
-(id)publishURL;
-(id)publishURLString;
-(id)pushKey;
-(id)refreshDate;
-(id)selectionSyncIdentifier;
-(id)selfIdentityAddress;
-(id)selfIdentityAddressString;
-(id)selfIdentityDisplayName;
-(id)selfIdentityEmail;
-(id)selfIdentityFirstName;
-(id)selfIdentityLastName;
-(id)selfIdentityPhoneNumber;
-(id)sendersEmail;
-(id)sendersPhoneNumber;
-(id)sharedOwnerAddress;
-(id)sharedOwnerEmail;
-(id)sharedOwnerName;
-(id)sharedOwnerPhoneNumber;
-(id)sharedOwnerURL;
-(id)sharedOwnerURLString;
-(id)sharees;
-(id)shareesAndOwner;
-(id)subcalAccountID;
-(id)subcalURL;
-(id)subscriptionID;
-(id)symbolicColorName;
-(id)syncHash;
-(id)syncToken;
-(id)unlocalizedTitle;
-(int)allowedEntities;
-(int)displayOrder;
-(int)entityType;
-(int)ownerIdentityId;
-(int)refreshInterval;
-(unsigned int)flags;
-(void)_setFlagValue:(BOOL)arg0 withMask:(unsigned int)arg1 ;
-(void)addAlarms:(id)arg0 ;
-(void)addSharee:(id)arg0 ;
-(void)clearInvitationStatus;
-(void)moveSubscribedCalendarToSource:(id)arg0 ;
-(void)removeAcknowledgedSnoozedAlarms;
-(void)removeAlarms:(id)arg0 ;
-(void)removeAllSnoozedAlarms;
-(void)removeSharee:(id)arg0 ;
-(void)reset;
-(void)rollback;
-(void)setAlarms:(id)arg0 ;
-(void)setAllAlarms:(id)arg0 ;
-(void)setAllowReminders:(BOOL)arg0 ;
-(void)setAllowedEntities:(int)arg0 ;
-(void)setAllowsEvents:(BOOL)arg0 ;
-(void)setAllowsScheduling:(BOOL)arg0 ;
-(void)setCanBePublished:(BOOL)arg0 ;
-(void)setCanBeShared:(BOOL)arg0 ;
-(void)setColorDisplayOnly:(BOOL)arg0 ;
-(void)setColorString:(id)arg0 ;
-(void)setColorStringRaw:(id)arg0 ;
-(void)setDigest:(id)arg0 ;
-(void)setDisplayOrder:(int)arg0 ;
-(void)setExternalID:(id)arg0 ;
-(void)setExternalIDTag:(id)arg0 ;
-(void)setExternalModificationTag:(id)arg0 ;
-(void)setExternalRepresentation:(id)arg0 ;
-(void)setFacebookBirthdayCalendar:(BOOL)arg0 ;
-(void)setFamilyCalendar:(BOOL)arg0 ;
-(void)setFlags:(unsigned int)arg0 ;
-(void)setHidden:(BOOL)arg0 ;
-(void)setInbox:(BOOL)arg0 ;
-(void)setInvitationStatus:(NSUInteger)arg0 ;
-(void)setIsAffectingAvailability:(BOOL)arg0 ;
-(void)setIsDefaultSchedulingCalendar:(BOOL)arg0 ;
-(void)setIsIgnoringEventAlerts:(BOOL)arg0 ;
-(void)setIsIgnoringSharedCalendarNotifications:(BOOL)arg0 ;
-(void)setIsJunk:(BOOL)arg0 ;
-(void)setIsPublished:(BOOL)arg0 ;
-(void)setLastSyncEndDate:(id)arg0 ;
-(void)setLastSyncError:(NSUInteger)arg0 ;
-(void)setLastSyncError:(NSUInteger)arg0 userInfo:(id)arg1 ;
-(void)setLastSyncErrorData:(id)arg0 ;
-(void)setLastSyncErrorUserInfo:(id)arg0 ;
-(void)setLastSyncStartDate:(id)arg0 ;
-(void)setMarkedImmutableSharees:(BOOL)arg0 ;
-(void)setMarkedUndeletable:(BOOL)arg0 ;
-(void)setNotes:(id)arg0 ;
-(void)setNotificationsCollection:(BOOL)arg0 ;
-(void)setOwnerIdentityAddress:(id)arg0 ;
-(void)setOwnerIdentityAddressString:(id)arg0 ;
-(void)setOwnerIdentityDisplayName:(id)arg0 ;
-(void)setOwnerIdentityEmail:(id)arg0 ;
-(void)setOwnerIdentityFirstName:(id)arg0 ;
-(void)setOwnerIdentityId:(int)arg0 ;
-(void)setOwnerIdentityLastName:(id)arg0 ;
-(void)setOwnerIdentityPhoneNumber:(id)arg0 ;
-(void)setProhibitsScheduling:(BOOL)arg0 ;
-(void)setPubcalAccountID:(id)arg0 ;
-(void)setPublishURL:(id)arg0 ;
-(void)setPublishURLString:(id)arg0 ;
-(void)setPushKey:(id)arg0 ;
-(void)setReadOnly:(BOOL)arg0 ;
-(void)setRefreshDate:(id)arg0 ;
-(void)setRefreshInterval:(int)arg0 ;
-(void)setSelfIdentityAddress:(id)arg0 ;
-(void)setSelfIdentityAddressString:(id)arg0 ;
-(void)setSelfIdentityDisplayName:(id)arg0 ;
-(void)setSelfIdentityEmail:(id)arg0 ;
-(void)setSelfIdentityFirstName:(id)arg0 ;
-(void)setSelfIdentityLastName:(id)arg0 ;
-(void)setSelfIdentityPhoneNumber:(id)arg0 ;
-(void)setSharedOwnerAddress:(id)arg0 ;
-(void)setSharedOwnerName:(id)arg0 ;
-(void)setSharedOwnerURL:(id)arg0 ;
-(void)setSharedOwnerURLString:(id)arg0 ;
-(void)setSharees:(id)arg0 ;
-(void)setSharingInvitation:(BOOL)arg0 ;
-(void)setSharingInvitationResponse:(NSUInteger)arg0 ;
-(void)setSharingStatus:(NSUInteger)arg0 ;
-(void)setStripAlarms:(BOOL)arg0 ;
-(void)setStripAttachments:(BOOL)arg0 ;
-(void)setSubcalAccountID:(id)arg0 ;
-(void)setSubcalURL:(id)arg0 ;
-(void)setSubscriptionID:(id)arg0 ;
-(void)setSymbolicColorName:(id)arg0 ;
-(void)setSyncToken:(id)arg0 ;
-(void)setUUID:(id)arg0 ;
-(void)setUnlocalizedTitle:(id)arg0 ;
-(void)snoozeAlarm:(id)arg0 withLocation:(id)arg1 proximity:(NSInteger)arg2 ;
-(void)snoozeAlarm:(id)arg0 withTimeIntervalFromNow:(CGFloat)arg1 ;


@end


#endif