// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKPERSISTENTCALENDAR_H
#define EKPERSISTENTCALENDAR_H

@class NSString, NSSet;


#import "EKPersistentObject.h"
#import "EKPersistentSource.h"

@interface EKPersistentCalendar : EKPersistentObject

@property (retain, nonatomic) NSString *UUID;
@property (nonatomic, getter=isColorDisplayOnly) BOOL colorDisplayOnly;
@property (copy, nonatomic) NSString *colorStringRaw;
@property (nonatomic) int displayOrder;
@property (copy, nonatomic) NSString *externalID;
@property (copy, nonatomic) NSString *externalModificationTag;
@property (nonatomic) int flags;
@property (nonatomic) NSUInteger invitationStatus;
@property (copy, nonatomic) NSString *ownerIdentityAddress;
@property (copy, nonatomic) NSString *ownerIdentityDisplayName;
@property (copy, nonatomic) NSString *ownerIdentityEmail;
@property (copy, nonatomic) NSString *ownerIdentityFirstName;
@property (copy, nonatomic) NSString *ownerIdentityLastName;
@property (copy, nonatomic) NSString *ownerIdentityPhoneNumber;
@property (nonatomic, getter=isPublished) BOOL published;
@property (copy, nonatomic) NSString *publishedURL;
@property (copy, nonatomic) NSString *pushKey;
@property (copy, nonatomic) NSString *selfIdentityAddressString;
@property (copy, nonatomic) NSString *selfIdentityDisplayName;
@property (copy, nonatomic) NSString *selfIdentityEmail;
@property (copy, nonatomic) NSString *selfIdentityFirstName;
@property (copy, nonatomic) NSString *selfIdentityLastName;
@property (copy, nonatomic) NSString *selfIdentityPhoneNumber;
@property (copy, nonatomic) NSString *sharedOwnerName;
@property (copy, nonatomic) NSString *sharedOwnerURLString;
@property (copy, nonatomic) NSSet *sharees;
@property (nonatomic) NSUInteger sharingInvitationResponse;
@property (nonatomic) NSUInteger sharingStatus;
@property (retain, nonatomic) EKPersistentSource *source;
@property (copy, nonatomic) NSString *subcalAccountID;
@property (copy, nonatomic) NSString *symbolicColorName;
@property (copy, nonatomic) NSString *unlocalizedTitle;


+(Class)meltedClass;
+(id)defaultPropertiesToLoad;
+(id)propertyKeyForUniqueIdentifier;
+(id)relations;
-(NSInteger)maxAttendees;
-(id)allAlarms;
-(id)description;
-(id)digest;
-(id)externalRepresentation;
-(id)lastSyncEndDate;
-(id)lastSyncStartDate;
-(id)lastSyncTitle;
-(id)locale;
-(id)notes;
-(id)notifications;
-(id)pubcalAccountID;
-(id)publishURLString;
-(id)refreshDate;
-(id)subcalURL;
-(id)subscriptionID;
-(id)syncError;
-(id)syncToken;
-(int)allowedEntities;
-(int)entityType;
-(int)ownerIdentityId;
-(int)refreshInterval;
-(void)setAllAlarms:(id)arg0 ;
-(void)setAllowedEntities:(int)arg0 ;
-(void)setDigest:(id)arg0 ;
-(void)setExternalRepresentation:(id)arg0 ;
-(void)setIsPublished:(BOOL)arg0 ;
-(void)setLastSyncEndDate:(id)arg0 ;
-(void)setLastSyncStartDate:(id)arg0 ;
-(void)setLastSyncTitle:(id)arg0 ;
-(void)setLocale:(id)arg0 ;
-(void)setMaxAttendees:(NSInteger)arg0 ;
-(void)setNotes:(id)arg0 ;
-(void)setNotifications:(id)arg0 ;
-(void)setOwnerIdentityId:(int)arg0 ;
-(void)setPubcalAccountID:(id)arg0 ;
-(void)setPublishURLString:(id)arg0 ;
-(void)setRefreshDate:(id)arg0 ;
-(void)setRefreshInterval:(int)arg0 ;
-(void)setSubcalURL:(id)arg0 ;
-(void)setSubscriptionID:(id)arg0 ;
-(void)setSyncError:(id)arg0 ;
-(void)setSyncToken:(id)arg0 ;


@end


#endif