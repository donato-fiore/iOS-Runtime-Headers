// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMHANDLE_H
#define IMHANDLE_H

@class NSString, NSDate, NSDictionary, NSSet, NSArray, NSMutableArray, NSNumber, IMBrand, IMBrandManager, NSData, CNContact, NSAttributedString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "IMAccount.h"
#import "IMServiceImpl.h"

@interface IMHandle : NSObject <NSSecureCoding>

 {
    NSString *_countryCode;
    NSDate *_idleSince;
    NSDictionary *_certs;
    NSSet *_groups;
    NSString *_cnFirstName;
    NSString *_cnLastName;
    NSString *_cnFullName;
    NSString *_cnNickname;
    NSString *_displayID;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_fullName;
    NSString *_nickname;
    NSArray *_emails;
    NSString *_normalizedFormOfID;
    NSString *_IDWithoutResource;
    NSString *_IDWithTrimmedServer;
    NSString *_statusMsg;
    NSString *_processedStatusMsg;
    NSDate *_whenWentOffline;
    NSDate *_whenStatusChanged;
    NSMutableArray *_notificationNameQueue;
    NSMutableArray *_notificationQueue;
    *__CFPhoneNumber _phoneNumberRef;
    NSString *_formattedNumber;
    NSUInteger _status;
    NSUInteger _capabilities;
    NSUInteger _resourceIndex;
    BOOL _blockNotifications;
    BOOL _hasTemporaryWatch;
    BOOL _isAnonymous;
    BOOL _beingTornDown;
    BOOL _hasCheckedPhoneNumber;
    int _addressBookIdentifier;
    int _notificationQueueCount;
    NSNumber *_isBusiness;
    NSNumber *_isMako;
    NSNumber *_isApple;
}


@property (readonly, retain, nonatomic) NSString *ID; // ivar: _id
@property (nonatomic) NSInteger IDStatus; // ivar: _IDStatus
@property (readonly, retain, nonatomic) NSString *IDWithoutResource;
@property (readonly, retain, nonatomic) NSString *_displayNameWithAbbreviation;
@property (readonly, retain, nonatomic) IMAccount *account; // ivar: _account
@property (readonly, retain, nonatomic) NSArray *accountSiblingsArray;
@property (readonly, retain, nonatomic) NSString *accountTypeName;
@property (readonly, nonatomic) unsigned int authRequestStatus; // ivar: _authRequestStatus
@property (readonly, nonatomic) NSInteger availability;
@property (readonly, nonatomic) NSDate *availabilityStatusPublishedDate;
@property (readonly, retain, nonatomic) id *bestAccountSibling;
@property (readonly, nonatomic) id *bestSibling;
@property (retain, nonatomic) IMBrand *brand; // ivar: _brand
@property (retain, nonatomic) IMBrandManager *brandManager; // ivar: _brandManager
@property (retain, nonatomic) NSData *brandSquareLogoImageData; // ivar: _brandSquareLogoImageData
@property (retain, nonatomic) NSData *brandWideLogoImageData; // ivar: _brandWideLogoImageData
@property (retain, nonatomic) NSString *cachedDisplayNameWithAbbreviation; // ivar: _cachedDisplayNameWithAbbreviation
@property (retain, nonatomic) NSString *cachedName; // ivar: _cachedName
@property (readonly, nonatomic) BOOL canBeAdded;
@property (readonly, nonatomic) BOOL canBeDeleted;
@property (readonly, nonatomic) NSUInteger capabilities;
@property (retain, nonatomic) CNContact *cnContact; // ivar: _cnContact
@property (readonly, retain, nonatomic) NSString *countryCode;
@property (readonly, retain, nonatomic) NSString *displayID;
@property (readonly, retain, nonatomic) NSString *email;
@property (readonly, retain, nonatomic) NSArray *emails;
@property (readonly, retain, nonatomic) NSArray *existingAccountSiblingsArray;
@property (readonly, retain, nonatomic) NSDictionary *extraProperties; // ivar: _extraProps
@property (readonly, retain, nonatomic) NSDate *feedUpdatedDate; // ivar: _feedUpdatedDate
@property (readonly, retain, nonatomic) NSString *firstName;
@property (readonly, retain, nonatomic) NSString *fullName;
@property (readonly, retain, nonatomic) NSSet *groups;
@property (readonly, retain, nonatomic) NSArray *groupsArray;
@property (readonly, retain, nonatomic) NSString *guid; // ivar: _guid
@property (readonly, nonatomic) BOOL hasAudio;
@property (nonatomic) BOOL hasCheckedForSuggestions; // ivar: _hasCheckedForSuggestions
@property (readonly, nonatomic) BOOL hasConferencing;
@property (readonly, nonatomic) BOOL hasLocation;
@property (readonly, nonatomic) BOOL hasMultiwayAudio;
@property (readonly, nonatomic) BOOL hasMultiwayVideo;
@property (readonly, nonatomic) BOOL hasName;
@property (readonly, nonatomic) BOOL hasOtherSiblings;
@property (nonatomic) BOOL hasSuggestedName; // ivar: _hasSuggestedName
@property (readonly, nonatomic) BOOL hasVideo;
@property (readonly, retain, nonatomic) NSString *idleString;
@property (readonly, nonatomic) CGFloat idleTime;
@property (readonly, nonatomic) BOOL isAnonymous;
@property (nonatomic, setter=setBlocked:) BOOL isBlocked;
@property (readonly, nonatomic) BOOL isBot; // ivar: _isBot
@property (readonly, nonatomic) BOOL isBuddy;
@property (readonly, nonatomic) BOOL isConferenceAvailable;
@property (readonly, nonatomic) BOOL isLoginIMHandle;
@property (readonly, nonatomic) BOOL isLoginIMHandleForAnyAccount;
@property (readonly, nonatomic) BOOL isMobile; // ivar: _isMobile
@property (readonly, nonatomic) BOOL isSystemUser;
@property (readonly, nonatomic) BOOL isVisiblyBlocked;
@property (readonly, retain, nonatomic) NSString *lastName;
@property (readonly, nonatomic) BOOL matchesLoginHandleForAnyAccount;
@property (readonly, retain, nonatomic) NSString *mobileDeviceName;
@property (readonly, retain, nonatomic) NSString *name;
@property (readonly, retain, nonatomic) NSString *nameAndEmail;
@property (readonly, retain, nonatomic) NSString *nameAndID;
@property (readonly, retain, nonatomic) NSString *nameOfStatus;
@property (readonly, retain, nonatomic) NSString *nickname;
@property (readonly, retain, nonatomic) NSString *normalizedID;
@property (readonly, retain, nonatomic) NSString *offlineString;
@property (readonly, retain, nonatomic) NSString *originalID; // ivar: _uncanonicalID
@property (retain, nonatomic) NSDictionary *otherServiceIDs; // ivar: _otherServiceIDs
@property (retain, nonatomic) NSString *personCentricID; // ivar: _personCentricID
@property (readonly, retain, nonatomic) NSString *phoneticFirstName;
@property (readonly, retain, nonatomic) NSString *phoneticFullName;
@property (readonly, retain, nonatomic) NSString *phoneticLastName;
@property (readonly, retain, nonatomic) NSData *pictureData; // ivar: _pictureData
@property (readonly, nonatomic) NSUInteger previousStatus; // ivar: _prevStatus
@property (readonly, retain, nonatomic) NSString *previousStatusMessage; // ivar: _prevStatusMsg
@property (nonatomic) NSInteger priority; // ivar: _priority
@property (readonly, retain, nonatomic) NSString *resource;
@property (readonly, retain, nonatomic) NSAttributedString *richStatusMessage; // ivar: _richStatusMsg
@property (readonly, retain, nonatomic) NSString *server;
@property (readonly, retain, nonatomic) IMServiceImpl *service;
@property (readonly, retain, nonatomic) NSSet *siblings;
@property (readonly, retain, nonatomic) NSArray *siblingsArray;
@property (readonly, nonatomic) NSUInteger status;
@property (readonly, retain, nonatomic) NSString *statusMessage;
@property (copy, nonatomic) NSString *suggestedName; // ivar: _suggestedName
@property (readonly, nonatomic) CGFloat timeSinceStatusChanged;
@property (readonly, nonatomic) CGFloat timeSinceWentOffline;
@property (readonly, retain, nonatomic) NSString *uniqueName; // ivar: _uniqueName
@property (readonly, nonatomic) BOOL watchingIMHandle;


+(BOOL)notificationsEnabled;
+(BOOL)supportsSecureCoding;
+(id)bestIMHandleInArray:(id)arg0 ;
+(id)cnPhoneticKeys;
+(id)filterIMHandlesForAccountSiblings:(id)arg0 onAccount:(id)arg1 ;
+(id)filterIMHandlesForBestAccountSiblings:(id)arg0 ;
+(id)handlesForCNContact:(id)arg0 ;
+(id)nameOfStatus:(NSUInteger)arg0 ;
+(void)_loadStatusNames;
+(void)bestHandlesForCNContacts:(id)arg0 completion:(id)arg1 ;
+(void)bestHandlesForCNContacts:(id)arg0 useExtendedAsyncLookup:(BOOL)arg1 completion:(id)arg2 ;
+(void)handlesForCNContacts:(id)arg0 useBestHandle:(BOOL)arg1 useExtendedAsyncLookup:(BOOL)arg2 completion:(id)arg3 ;
+(void)setNotificationsEnabled:(BOOL)arg0 ;
+(void)validHandlesForCNContacts:(id)arg0 completion:(id)arg1 ;
+(void)validHandlesForCNContacts:(id)arg0 useExtendedAsyncLookup:(BOOL)arg1 completion:(id)arg2 ;
-(BOOL)_allowedByScreenTime;
-(BOOL)_hasABName;
-(BOOL)_hasServiceNameProperties;
-(BOOL)_isChatSiblingOf:(id)arg0 ;
-(BOOL)_isMyIDInList:(id)arg0 ;
-(BOOL)areCNContactPropertiesRecent;
-(BOOL)hasCapability:(NSUInteger)arg0 ;
-(BOOL)hasResource;
-(BOOL)hasServer;
-(BOOL)isAccountSiblingOf:(id)arg0 ;
-(BOOL)isApple;
-(BOOL)isBetterThanIMHandle:(id)arg0 ;
-(BOOL)isBetterThanIMHandle:(id)arg0 nonPhoneNumbersPreferred:(BOOL)arg1 ;
-(BOOL)isBusiness;
-(BOOL)isContact;
-(BOOL)isInvitedToViewMyFocusStatusFromHandleID:(id)arg0 ;
-(BOOL)isMako;
-(BOOL)isSiblingOf:(id)arg0 ;
-(BOOL)matchesIMHandle:(id)arg0 ;
-(BOOL)resetCNContact;
-(BOOL)shouldQueueNotifications;
-(NSInteger)compareAccountNames:(id)arg0 ;
-(NSInteger)compareFirstNames:(id)arg0 ;
-(NSInteger)compareIDs:(id)arg0 ;
-(NSInteger)compareLastNames:(id)arg0 ;
-(NSInteger)compareNormalizedIDs:(id)arg0 ;
-(NSInteger)compareStatus:(id)arg0 ;
-(NSUInteger)hash;
-(id)_bestChatSibling;
-(id)_chatSiblings;
-(id)_chatSiblingsArray;
-(id)_displayNameWithContact:(id)arg0 ;
-(id)_formattedPhoneNumber;
-(id)_handleInfo;
-(id)_nameForComparisonPreferFirst:(BOOL)arg0 ;
-(id)bestIMHandleForAccount:(id)arg0 ;
-(id)bestIMHandleForAccount:(id)arg0 onService:(id)arg1 inGroup:(id)arg2 otherThan:(id)arg3 ;
-(id)bestIMHandleForService:(id)arg0 ;
-(id)chatSiblingsArray;
-(id)cnContactWithKeys:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)customPictureData;
-(id)dependentIMHandles;
-(id)description;
-(id)displayNameForChat:(id)arg0 ;
-(id)existingChatSiblingsArray;
-(id)existingIMHandleWithoutResource;
-(id)fmfHandle;
-(id)fmfSiblingHandles;
-(id)imHandleForOtherAccount:(id)arg0 ;
-(id)imHandleWithoutResource;
-(id)immediateNameWithNeedsSuggestedNameFetch:(*BOOL)arg0 useSuggestedName:(BOOL)arg1 ;
-(id)init;
-(id)initWithAccount:(id)arg0 ID:(id)arg1 ;
-(id)initWithAccount:(id)arg0 ID:(id)arg1 alreadyCanonical:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)publicAPIPropertiesDictionary;
-(struct __CFPhoneNumber *)phoneNumberRef;
-(unsigned int)sortOrderInGroup:(id)arg0 ;
-(void)_clearCNContactProperties;
-(void)_clearStatusMessageURLCache;
-(void)_createPhoneNumberRefIfNeeded;
-(void)_fetchBrandInfo;
-(void)_fetchedBrand:(id)arg0 ;
-(void)_filterStatusMessage;
-(void)_imPersonPictureChanged:(id)arg0 ;
-(void)_postNotification:(id)arg0 ;
-(void)_postNotificationName:(id)arg0 userInfo:(id)arg1 ;
-(void)_postOnScreenChangedNotificationForProperty:(id)arg0 ;
-(void)_registerForNotifications;
-(void)_setBaseFirstName:(id)arg0 lastName:(id)arg1 fullName:(id)arg2 ;
-(void)_stopRetainingAccount:(id)arg0 ;
-(void)_updateOriginalID:(id)arg0 ;
-(void)_updateStatusBasedOnAuthRequestStatus;
-(void)autoInviteToViewAvailabilityIfNeededFromHandleID:(id)arg0 ;
-(void)beginNotificationQueue;
-(void)beginObservingAvailability;
-(void)customPictureDataChanged:(id)arg0 key:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)endObservingAvailability;
-(void)postNotificationName:(id)arg0 ;
-(void)propertiesChanged:(id)arg0 ;
-(void)releaseNotificationQueue;
-(void)requestValueOfProperty:(id)arg0 ;
-(void)resetCNContactProperties;
-(void)scheduleSuggestedNameFetchIfNecessary;
-(void)sendNotificationABPersonChanged;
-(void)setAnonymous:(BOOL)arg0 ;
-(void)setCustomPictureData:(id)arg0 ;
-(void)setCustomPictureData:(id)arg0 key:(id)arg1 ;
-(void)setHasTemporaryWatch:(BOOL)arg0 ;
-(void)setIdleSince:(id)arg0 ;
-(void)setImageData:(id)arg0 ;
-(void)setLocalNickname:(id)arg0 ;
-(void)setPersonStatus:(NSUInteger)arg0 ;
-(void)setValue:(id)arg0 ofExtraProperty:(id)arg1 ;
-(void)statusChanged:(NSUInteger)arg0 ;
-(void)statusChanged:(NSUInteger)arg0 message:(id)arg1 ;
-(void)statusMessageChanged:(id)arg0 ;
-(void)updateCNContact:(id)arg0 ;


@end


#endif