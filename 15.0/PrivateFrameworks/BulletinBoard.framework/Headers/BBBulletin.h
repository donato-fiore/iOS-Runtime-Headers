// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BBBULLETIN_H
#define BBBULLETIN_H

@class NSMutableDictionary, NSArray, NSSet, NSString, NSDictionary, NSDate, NSTimeZone;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "BBAccessoryIcon.h"
#import "BBImage.h"
#import "BBAction.h"
#import "BBCommunicationContext.h"
#import "BBContent.h"
#import "BBSectionIcon.h"
#import "BBAttachmentMetadata.h"
#import "BBSound.h"

@interface BBBulletin : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) BBAccessoryIcon *accessoryIconMask; // ivar: _accessoryIconMask
@property (retain, nonatomic) BBImage *accessoryImage; // ivar: _accessoryImage
@property (copy, nonatomic) BBAction *acknowledgeAction;
@property (retain, nonatomic) NSMutableDictionary *actions; // ivar: _actions
@property (copy, nonatomic) NSArray *additionalAttachments; // ivar: _additionalAttachments
@property (readonly, nonatomic) NSSet *alertSuppressionAppIDs;
@property (copy, nonatomic) NSSet *alertSuppressionAppIDs_deprecated; // ivar: alertSuppressionAppIDs_deprecated
@property (copy, nonatomic) NSSet *alertSuppressionContexts; // ivar: _alertSuppressionContexts
@property (readonly, nonatomic) BOOL allowsAddingToLockScreenWhenUnlocked;
@property (readonly, nonatomic) BOOL allowsAutomaticRemovalFromLockScreen;
@property (readonly, nonatomic) BOOL allowsPersistentBannersInCarPlay;
@property (readonly, nonatomic) BOOL allowsSupplementaryActionsInCarPlay;
@property (copy, nonatomic) BBAction *alternateAction;
@property (readonly, nonatomic) NSString *alternateActionLabel;
@property (nonatomic) NSInteger backgroundStyle; // ivar: _backgroundStyle
@property (readonly, nonatomic) NSString *bannerAccessoryRemoteServiceBundleIdentifier;
@property (readonly, nonatomic) NSString *bannerAccessoryRemoteViewControllerClassName;
@property (copy, nonatomic) NSString *bulletinID; // ivar: _bulletinID
@property (copy, nonatomic) NSString *bulletinVersionID; // ivar: _bulletinVersionID
@property (copy, nonatomic) NSArray *buttons; // ivar: _buttons
@property (readonly, nonatomic, getter=isCallNotification) BOOL callNotification;
@property (readonly, nonatomic) BOOL canBeSilencedByMenuButtonPress;
@property (copy, nonatomic) NSString *categoryID; // ivar: _categoryID
@property (nonatomic) BOOL clearable; // ivar: _clearable
@property (readonly, nonatomic) BOOL coalescesWhenLocked;
@property (retain, nonatomic) BBCommunicationContext *communicationContext; // ivar: _communicationContext
@property (retain, nonatomic) BBContent *content; // ivar: _content
@property (nonatomic) NSInteger contentPreviewSetting; // ivar: _contentPreviewSetting
@property (copy, nonatomic) NSString *contentType; // ivar: _contentType
@property (retain, nonatomic) NSDictionary *context; // ivar: _context
@property (nonatomic) NSUInteger counter; // ivar: _counter
@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (nonatomic) NSInteger dateFormatStyle; // ivar: _dateFormatStyle
@property (nonatomic) BOOL dateIsAllDay; // ivar: _dateIsAllDay
@property (copy, nonatomic) BBAction *defaultAction;
@property (copy, nonatomic) NSString *dismissalID; // ivar: _dismissalID
@property (nonatomic) BOOL displaysActionsInline; // ivar: _displaysActionsInline
@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (retain, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (nonatomic) NSUInteger expirationEvents; // ivar: _expirationEvents
@property (copy, nonatomic) BBAction *expireAction;
@property (nonatomic) BOOL expiresOnPublisherDeath; // ivar: _expiresOnPublisherDeath
@property (copy, nonatomic) NSString *footer; // ivar: _footer
@property (readonly, nonatomic) NSString *fullAlternateActionLabel;
@property (readonly, nonatomic) NSString *fullUnlockActionLabel;
@property (nonatomic) BOOL hasCriticalIcon; // ivar: _hasCriticalIcon
@property (nonatomic) BOOL hasEventDate; // ivar: _hasEventDate
@property (nonatomic) BOOL hasPrivateContent;
@property (nonatomic) BOOL hasSubordinateIcon; // ivar: _hasSubordinateIcon
@property (copy, nonatomic) NSString *header; // ivar: _header
@property (readonly, nonatomic) NSString *hiddenPreviewsBodyPlaceholder;
@property (readonly, nonatomic) BOOL hideDismissActionInCarPlay;
@property (readonly, nonatomic) NSInteger iPodOutAlertType;
@property (retain, nonatomic) BBSectionIcon *icon; // ivar: _icon
@property (nonatomic) BOOL ignoresDowntime; // ivar: _ignoresDowntime
@property (nonatomic) BOOL ignoresQuietMode; // ivar: _ignoresQuietMode
@property (readonly, nonatomic) BOOL inertWhenLocked;
@property (copy, nonatomic) NSArray *intentIDs; // ivar: _intentIDs
@property (nonatomic) NSUInteger interruptionLevel; // ivar: _interruptionLevel
@property (retain, nonatomic) NSDate *lastInterruptDate; // ivar: _lastInterruptDate
@property (nonatomic, getter=isLoading) BOOL loading; // ivar: _loading
@property (nonatomic) NSInteger lockScreenPriority; // ivar: _lockScreenPriority
@property (copy, nonatomic) NSString *message;
@property (readonly, nonatomic) NSUInteger messageNumberOfLines;
@property (readonly, nonatomic, getter=isMessagingNotification) BOOL messagingNotification;
@property (readonly, nonatomic) NSString *missedBannerDescriptionFormat;
@property (retain, nonatomic) BBContent *modalAlertContent; // ivar: _modalAlertContent
@property (readonly, nonatomic) BOOL orderSectionUsingRecencyDate;
@property (copy, nonatomic) NSString *parentSectionID; // ivar: _parentSectionID
@property (copy, nonatomic) NSArray *peopleIDs; // ivar: _peopleIDs
@property (readonly, nonatomic) BOOL playsMediaWhenRaised;
@property (readonly, nonatomic) BOOL playsSoundForModify;
@property (nonatomic) BOOL preemptsPresentedAlert; // ivar: _preemptsPresentedAlert
@property (readonly, nonatomic) BOOL preservesUnlockActionCase;
@property (nonatomic) BOOL preventAutomaticRemovalFromLockScreen; // ivar: _preventAutomaticRemovalFromLockScreen
@property (readonly, nonatomic) BOOL preventLock;
@property (copy, nonatomic) BBAttachmentMetadata *primaryAttachment; // ivar: _primaryAttachment
@property (readonly, nonatomic) BOOL prioritizeAtTopOfLockScreen;
@property (readonly, nonatomic) NSUInteger privacySettings;
@property (retain, nonatomic) NSDate *publicationDate; // ivar: _publicationDate
@property (copy, nonatomic) NSString *publisherBulletinID; // ivar: _publisherBulletinID
@property (readonly, copy, nonatomic) NSString *publisherMatchID;
@property (copy, nonatomic) BBAction *raiseAction;
@property (nonatomic) NSUInteger realertCount; // ivar: realertCount
@property (retain, nonatomic) NSDate *recencyDate; // ivar: _recencyDate
@property (copy, nonatomic) NSString *recordID; // ivar: _publisherRecordID
@property (nonatomic) float relevanceScore; // ivar: _relevanceScore
@property (readonly, nonatomic) BOOL revealsAdditionalContentOnPresentation;
@property (readonly, nonatomic) NSString *secondaryContentRemoteServiceBundleIdentifier;
@property (readonly, nonatomic) NSString *secondaryContentRemoteViewControllerClassName;
@property (copy, nonatomic) NSString *section;
@property (copy, nonatomic) NSString *sectionBundlePath; // ivar: _sectionBundlePath
@property (readonly, nonatomic) NSString *sectionDisplayName;
@property (copy, nonatomic) NSString *sectionID; // ivar: _sectionID
@property (readonly, nonatomic) BBSectionIcon *sectionIcon;
@property (nonatomic) NSInteger sectionSubtype; // ivar: _sectionSubtype
@property (readonly, nonatomic) BOOL shouldDismissBulletinWhenClosed;
@property (readonly, nonatomic) BOOL showsContactPhoto;
@property (readonly, nonatomic) BOOL showsDateInFloatingLockScreenAlert;
@property (readonly, nonatomic) BOOL showsSubtitle;
@property (readonly, nonatomic) BOOL showsUnreadIndicatorForNoticesFeed;
@property (copy, nonatomic) BBAction *snoozeAction;
@property (retain, nonatomic) BBSound *sound; // ivar: _sound
@property (retain, nonatomic) BBContent *starkBannerContent; // ivar: _starkBannerContent
@property (copy, nonatomic) NSSet *subsectionIDs; // ivar: _subsectionIDs
@property (copy, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSUInteger subtypePriority;
@property (readonly, nonatomic) NSString *subtypeSummaryFormat;
@property (copy, nonatomic) NSString *summaryArgument; // ivar: _summaryArgument
@property (nonatomic) NSUInteger summaryArgumentCount; // ivar: _summaryArgumentCount
@property (retain, nonatomic) NSMutableDictionary *supplementaryActionsByLayout; // ivar: _supplementaryActionsByLayout
@property (readonly, nonatomic) BOOL suppressDelayForForwardedBulletins;
@property (readonly, nonatomic) BOOL suppressesAlertsWhenAppIsActive;
@property (readonly, nonatomic) BOOL suppressesMessageForPrivacy;
@property (readonly, nonatomic) BOOL suppressesTitle;
@property (copy, nonatomic) NSString *threadID; // ivar: _threadID
@property (retain, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *topic;
@property (nonatomic) BOOL turnsOnDisplay; // ivar: _turnsOnDisplay
@property (copy, nonatomic) NSString *universalSectionID; // ivar: _universalSectionID
@property (readonly, nonatomic) NSString *unlockActionLabel;
@property (copy, nonatomic) NSString *unlockActionLabelOverride; // ivar: _unlockActionLabelOverride
@property (nonatomic) BOOL usesExternalSync; // ivar: _usesExternalSync
@property (readonly, nonatomic) BOOL usesVariableLayout;
@property (readonly, nonatomic) BOOL visuallyIndicatesWhenDateIsInFuture;
@property (nonatomic) BOOL wantsFullscreenPresentation; // ivar: _wantsFullscreenPresentation


+(BOOL)supportsSecureCoding;
+(id)_lifeAssertionAssociationSet;
+(id)_observerAssociationSet;
+(id)bulletinReferenceDateFromDate:(id)arg0 ;
+(id)bulletinWithBulletin:(id)arg0 ;
+(id)validSortDescriptorsFromSortDescriptors:(id)arg0 ;
+(void)vetSortDescriptor:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)showsMessagePreview;
-(NSUInteger)hash;
-(NSUInteger)numberOfAdditionalAttachments;
-(NSUInteger)numberOfAdditionalAttachmentsOfType:(NSInteger)arg0 ;
-(id)_actionKeyForType:(NSInteger)arg0 ;
-(id)_actionWithID:(id)arg0 fromActions:(id)arg1 ;
-(id)_allActions;
-(id)_allSupplementaryActions;
-(id)_responseForAction:(id)arg0 ;
-(id)_safeDescription:(BOOL)arg0 ;
-(id)actionForResponse:(id)arg0 ;
-(id)actionWithIdentifier:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dismissAction;
-(id)firstValidObserver;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)lifeAssertions;
-(id)responseForAcknowledgeAction;
-(id)responseForAction:(id)arg0 ;
-(id)responseForButtonActionAtIndex:(NSUInteger)arg0 ;
-(id)responseForDefaultAction;
-(id)responseForExpireAction;
-(id)responseForRaiseAction;
-(id)responseForSnoozeAction;
-(id)responseSendBlock:(SEL)arg0 ;
-(id)safeDescription;
-(id)shortDescription;
-(id)silenceAction;
-(id)supplementaryActions;
-(id)supplementaryActionsForLayout:(NSInteger)arg0 ;
-(id)syncHash;
-(void)_fillOutCopy:(id)arg0 withZone:(struct _NSZone *)arg1 ;
-(void)addLifeAssertion:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)copyAssociationsForBulletin:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setDismissAction:(id)arg0 ;
-(void)setShowsMessagePreview:(BOOL)arg0 ;
-(void)setSilenceAction:(id)arg0 ;


@end


#endif