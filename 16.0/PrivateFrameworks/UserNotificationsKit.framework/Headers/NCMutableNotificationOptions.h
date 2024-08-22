// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NCMUTABLENOTIFICATIONOPTIONS_H
#define NCMUTABLENOTIFICATIONOPTIONS_H

@class NSSet, NSString;


#import "NCNotificationOptions.h"

@interface NCMutableNotificationOptions : NCNotificationOptions

@property (nonatomic) BOOL addToLockScreenWhenUnlocked;
@property (copy, nonatomic) NSSet *alertSuppressionContexts;
@property (nonatomic) BOOL alertsWhenLocked;
@property (nonatomic) BOOL allowActionsForCarPlay;
@property (copy, nonatomic) NSString *alternateActionLabel;
@property (nonatomic) BOOL canPlaySound;
@property (nonatomic) BOOL canTurnOnDisplay;
@property (nonatomic) BOOL coalescesWhenLocked;
@property (nonatomic) NSUInteger contentPreviewSetting;
@property (nonatomic) BOOL dismissAutomatically;
@property (nonatomic) BOOL dismissAutomaticallyForCarPlay;
@property (nonatomic) BOOL displaysActionsInline;
@property (nonatomic) BOOL hideClearActionInList;
@property (nonatomic) BOOL hideCloseActionForCarPlay;
@property (nonatomic) BOOL lauchUsingSiriForCarPlayDefaultAction;
@property (nonatomic) NSUInteger lockScreenPersistence;
@property (nonatomic) NSUInteger lockScreenPriority;
@property (nonatomic, getter=isNumberOfLinesInfinite) BOOL numberOfLinesInfinite;
@property (nonatomic) BOOL overridesDowntime;
@property (nonatomic) BOOL overridesPocketMode;
@property (nonatomic) BOOL overridesQuietMode;
@property (nonatomic) BOOL playMediaWhenRaised;
@property (nonatomic) BOOL preemptsPresentedNotification;
@property (nonatomic) BOOL preventsAutomaticLock;
@property (nonatomic) NSUInteger realertCount;
@property (nonatomic) BOOL requestsFullScreenPresentation;
@property (nonatomic) BOOL revealsAdditionalContentIfNoDefaultAction;
@property (nonatomic) BOOL revealsAdditionalContentOnPresentation;
@property (nonatomic) BOOL shouldAnnounceForCarPlay;
@property (nonatomic) BOOL silencedByMenuButtonPress;
@property (nonatomic) BOOL suppressesAlertsWhenAppIsActive;
@property (nonatomic) BOOL suppressesBodyWhenLocked;
@property (nonatomic) BOOL suppressesSubtitleWhenLocked;
@property (nonatomic) BOOL suppressesTitleWhenLocked;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif