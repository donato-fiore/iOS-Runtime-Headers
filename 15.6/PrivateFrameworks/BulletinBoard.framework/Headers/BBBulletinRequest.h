// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BBBULLETINREQUEST_H
#define BBBULLETINREQUEST_H

@class NSArray, NSSet, NSString, NSDictionary, NSDate, NSTimeZone;


#import "BBBulletin.h"
#import "BBAccessoryIcon.h"
#import "BBImage.h"
#import "BBAction.h"
#import "BBCommunicationContext.h"
#import "BBSectionIcon.h"
#import "BBContent.h"
#import "BBAttachmentMetadata.h"
#import "BBSound.h"

@interface BBBulletinRequest : BBBulletin

@property (retain, nonatomic) BBAccessoryIcon *accessoryIconMask;
@property (retain, nonatomic) BBImage *accessoryImage;
@property (copy, nonatomic) BBAction *acknowledgeAction;
@property (copy, nonatomic) NSArray *additionalAttachments;
@property (copy, nonatomic) NSSet *alertSuppressionAppIDs_deprecated;
@property (copy, nonatomic) NSSet *alertSuppressionContexts;
@property (copy, nonatomic) BBAction *alternateAction;
@property (nonatomic) NSInteger backgroundStyle;
@property (copy, nonatomic) NSString *bulletinID;
@property (copy, nonatomic) NSArray *buttons;
@property (copy, nonatomic) NSString *categoryID;
@property (nonatomic) BOOL clearable;
@property (retain, nonatomic) BBCommunicationContext *communicationContext;
@property (nonatomic) NSInteger contentPreviewSetting;
@property (copy, nonatomic) NSString *contentType;
@property (retain, nonatomic) NSDictionary *context;
@property (nonatomic) NSUInteger counter;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic) NSInteger dateFormatStyle;
@property (nonatomic) BOOL dateIsAllDay;
@property (copy, nonatomic) BBAction *defaultAction;
@property (copy, nonatomic) BBAction *dismissAction;
@property (copy, nonatomic) NSString *dismissalID;
@property (nonatomic) BOOL displaysActionsInline;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSDate *expirationDate;
@property (nonatomic) NSUInteger expirationEvents; // ivar: _expirationEvents
@property (copy, nonatomic) BBAction *expireAction;
@property (nonatomic) BOOL expiresOnPublisherDeath;
@property (copy, nonatomic) NSString *footer;
@property (nonatomic) BOOL hasCriticalIcon;
@property (nonatomic) BOOL hasEventDate;
@property (nonatomic) BOOL hasSubordinateIcon;
@property (copy, nonatomic) NSString *header;
@property (retain, nonatomic) BBSectionIcon *icon;
@property (nonatomic) BOOL ignoresDowntime;
@property (nonatomic) BOOL ignoresQuietMode;
@property (copy, nonatomic) NSArray *intentIDs;
@property (nonatomic) NSUInteger interruptionLevel;
@property (retain, nonatomic) NSDate *lastInterruptDate;
@property (nonatomic, getter=isLoading) BOOL loading;
@property (nonatomic) NSInteger lockScreenPriority;
@property (copy, nonatomic) NSString *message;
@property (retain, nonatomic) BBContent *modalAlertContent;
@property (copy, nonatomic) NSString *parentSectionID;
@property (copy, nonatomic) NSArray *peopleIDs;
@property (nonatomic) BOOL preemptsPresentedAlert;
@property (nonatomic) BOOL preventAutomaticRemovalFromLockScreen;
@property (copy, nonatomic) BBAttachmentMetadata *primaryAttachment;
@property (nonatomic) NSInteger primaryAttachmentType;
@property (retain, nonatomic) NSDate *publicationDate;
@property (copy, nonatomic) NSString *publisherBulletinID;
@property (copy, nonatomic) BBAction *raiseAction;
@property (nonatomic) NSUInteger realertCount;
@property (retain, nonatomic) NSDate *recencyDate;
@property (copy, nonatomic) NSString *recordID;
@property (nonatomic) float relevanceScore;
@property (copy, nonatomic) NSString *section;
@property (copy, nonatomic) NSString *sectionBundlePath;
@property (copy, nonatomic) NSString *sectionID;
@property (nonatomic) NSInteger sectionSubtype;
@property (nonatomic) BOOL showsUnreadIndicator;
@property (copy, nonatomic) BBAction *silenceAction;
@property (copy, nonatomic) BBAction *snoozeAction;
@property (retain, nonatomic) BBSound *sound;
@property (retain, nonatomic) BBContent *starkBannerContent;
@property (copy, nonatomic) NSSet *subsectionIDs;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *summaryArgument;
@property (nonatomic) NSUInteger summaryArgumentCount;
@property (copy, nonatomic) NSArray *supplementaryActions;
@property (nonatomic) BOOL tentative;
@property (copy, nonatomic) NSString *threadID;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL turnsOnDisplay;
@property (copy, nonatomic) NSString *universalSectionID;
@property (copy, nonatomic) NSString *unlockActionLabelOverride;
@property (nonatomic) BOOL usesExternalSync;
@property (nonatomic) BOOL wantsFullscreenPresentation;


-(BOOL)hasAdditionalAttachmentsModificationsRelativeTo:(id)arg0 ;
-(BOOL)hasContentModificationsRelativeTo:(id)arg0 ;
-(id)awakeAfterUsingCoder:(id)arg0 ;
-(id)replacementObjectForCoder:(id)arg0 ;
-(void)_updateSupplementaryAction:(id)arg0 ;
-(void)addAlertSuppressionAppID:(id)arg0 ;
-(void)addAttachmentOfType:(NSInteger)arg0 ;
-(void)addButton:(id)arg0 ;
-(void)generateBulletinID;
-(void)generateNewBulletinID;
-(void)publish;
-(void)publish:(BOOL)arg0 ;
-(void)setUnlockActionLabel:(id)arg0 ;
-(void)withdraw;


@end


#endif