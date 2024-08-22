// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BBSECTIONSUBTYPEPARAMETERS_H
#define BBSECTIONSUBTYPEPARAMETERS_H

@class NSSet, NSString, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "BBSectionSubtypeParameters.h"
#import "BBSectionIcon.h"

@interface BBSectionSubtypeParameters : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSSet *alertSuppressionAppIDs;
@property (nonatomic) BOOL allowsAddingToLockScreenWhenUnlocked;
@property (nonatomic) BOOL allowsAutomaticRemovalFromLockScreen;
@property (nonatomic) BOOL allowsPersistentBannersInCarPlay;
@property (nonatomic) BOOL allowsSupplementaryActionsInCarPlay;
@property (copy, nonatomic) NSString *alternateActionLabel; // ivar: _alternateActionLabel
@property (copy, nonatomic) NSString *bannerAccessoryRemoteServiceBundleIdentifier; // ivar: _bannerAccessoryRemoteServiceBundleIdentifier
@property (copy, nonatomic) NSString *bannerAccessoryRemoteViewControllerClassName; // ivar: _bannerAccessoryRemoteViewControllerClassName
@property (retain, nonatomic) NSNumber *boxedAllowsAddingToLockScreenWhenUnlocked; // ivar: _boxedAllowsAddingToLockScreenWhenUnlocked
@property (retain, nonatomic) NSNumber *boxedAllowsAutomaticRemovalFromLockScreen; // ivar: _boxedAllowsAutomaticRemovalFromLockScreen
@property (retain, nonatomic) NSNumber *boxedAllowsPersistentBannersInCarPlay; // ivar: _boxedAllowsPersistentBannersInCarPlay
@property (retain, nonatomic) NSNumber *boxedAllowsSupplementaryActionsInCarPlay; // ivar: _boxedAllowsSupplementaryActionsInCarPlay
@property (retain, nonatomic) NSNumber *boxedCanBeSilencedByMenuButtonPress; // ivar: _boxedCanBeSilencedByMenuButtonPress
@property (retain, nonatomic) NSNumber *boxedCoalescesWhenLocked; // ivar: _boxedCoalescesWhenLocked
@property (retain, nonatomic) NSNumber *boxedHideDismissActionInCarPlay; // ivar: _boxedHideDismissActionInCarPlay
@property (retain, nonatomic) NSNumber *boxedIPodOutAlertType; // ivar: _boxedIPodOutAlertType
@property (retain, nonatomic) NSNumber *boxedIgnoresQuietMode; // ivar: _boxedIgnoresQuietMode
@property (retain, nonatomic) NSNumber *boxedInertWhenLocked; // ivar: _boxedInertWhenLocked
@property (retain, nonatomic) NSNumber *boxedPlaysMediaWhenRaised; // ivar: _boxedPlaysMediaWhenRaised
@property (retain, nonatomic) NSNumber *boxedPlaysSoundForModify; // ivar: _boxedPlaysSoundForModify
@property (retain, nonatomic) NSNumber *boxedPreservesUnlockActionCase; // ivar: _boxedPreservesUnlockActionCase
@property (retain, nonatomic) NSNumber *boxedPreventLock; // ivar: _boxedPreventLock
@property (retain, nonatomic) NSNumber *boxedPrioritizeAtTopOfLockScreen; // ivar: _boxedPrioritizeAtTopOfLockScreen
@property (retain, nonatomic) NSNumber *boxedPrivacySettings; // ivar: _boxedPrivacySettings
@property (retain, nonatomic) NSNumber *boxedRevealsAdditionalContentOnPresentation; // ivar: _boxedRevealsAdditionalContentOnPresentation
@property (retain, nonatomic) NSNumber *boxedShouldDismissBulletinWhenClosed; // ivar: _boxedShouldDismissBulletinWhenClosed
@property (retain, nonatomic) NSNumber *boxedShowsContactPhoto; // ivar: _boxedShowsContactPhoto
@property (retain, nonatomic) NSNumber *boxedShowsUnreadIndicatorForNoticesFeed; // ivar: _boxedShowsUnreadIndicatorForNoticesFeed
@property (retain, nonatomic) NSNumber *boxedSubtypePriority; // ivar: _boxedSubtypePriority
@property (retain, nonatomic) NSNumber *boxedSuppressDelayForForwardedBulletins; // ivar: _boxedSuppressDelayForForwardedBulletins
@property (retain, nonatomic) NSNumber *boxedSuppressesAlertsWhenAppIsActive; // ivar: _boxedSuppressesAlertsWhenAppIsActive
@property (retain, nonatomic) NSNumber *boxedSuppressesTitle; // ivar: _boxedSuppressesTitle
@property (retain, nonatomic) NSNumber *boxedVisuallyIndicatesWhenDateIsInFuture; // ivar: _boxedVisuallyIndicatesWhenDateIsInFuture
@property (nonatomic) BOOL canBeSilencedByMenuButtonPress;
@property (nonatomic) BOOL coalescesWhenLocked;
@property (weak, nonatomic) BBSectionSubtypeParameters *fallbackParameters; // ivar: _fallbackParameters
@property (copy, nonatomic) NSString *fullAlternateActionLabel; // ivar: _fullAlternateActionLabel
@property (copy, nonatomic) NSString *fullUnlockActionLabel; // ivar: _fullUnlockActionLabel
@property (copy, nonatomic) NSString *hiddenPreviewsBodyPlaceholder; // ivar: _hiddenPreviewsBodyPlaceholder
@property (nonatomic) BOOL hideDismissActionInCarPlay;
@property (nonatomic) NSInteger iPodOutAlertType;
@property (nonatomic) BOOL ignoresQuietMode;
@property (nonatomic) BOOL inertWhenLocked;
@property (copy, nonatomic) NSString *missedBannerDescriptionFormat; // ivar: _missedBannerDescriptionFormat
@property (nonatomic) BOOL playsMediaWhenRaised;
@property (nonatomic) BOOL playsSoundForModify;
@property (nonatomic) BOOL preemptsPresentedAlert;
@property (nonatomic) BOOL preservesUnlockActionCase;
@property (nonatomic) BOOL preventLock;
@property (nonatomic) BOOL prioritizeAtTopOfLockScreen;
@property (nonatomic) NSUInteger privacySettings;
@property (nonatomic) BOOL revealsAdditionalContentOnPresentation;
@property (copy, nonatomic) NSString *secondaryContentRemoteServiceBundleIdentifier; // ivar: _secondaryContentRemoteServiceBundleIdentifier
@property (copy, nonatomic) NSString *secondaryContentRemoteViewControllerClassName; // ivar: _secondaryContentRemoteViewControllerClassName
@property (copy, nonatomic) BBSectionIcon *sectionIconOverride; // ivar: _sectionIconOverride
@property (nonatomic) BOOL shouldDismissBulletinWhenClosed;
@property (nonatomic) BOOL showsContactPhoto;
@property (nonatomic) BOOL showsUnreadIndicatorForNoticesFeed;
@property (nonatomic) NSUInteger subtypePriority;
@property (copy, nonatomic) NSString *subtypeSummaryFormat; // ivar: _subtypeSummaryFormat
@property (nonatomic) BOOL suppressDelayForForwardedBulletins;
@property (nonatomic) BOOL suppressesAlertsWhenAppIsActive;
@property (nonatomic) BOOL suppressesTitle;
@property (copy, nonatomic) NSString *topic; // ivar: _topic
@property (copy, nonatomic) NSString *unlockActionLabel; // ivar: _unlockActionLabel
@property (nonatomic) BOOL visuallyIndicatesWhenDateIsInFuture;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFallbackParameters:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif