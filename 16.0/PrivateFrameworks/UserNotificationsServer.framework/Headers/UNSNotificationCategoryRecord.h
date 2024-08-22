// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UNSNOTIFICATIONCATEGORYRECORD_H
#define UNSNOTIFICATIONCATEGORYRECORD_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface UNSNotificationCategoryRecord : NSObject

@property (copy, nonatomic) NSArray *actions; // ivar: _actions
@property (nonatomic) BOOL alwaysDisplayNotificationsIndicator; // ivar: _alwaysDisplayNotificationsIndicator
@property (copy, nonatomic) NSString *backgroundStyle; // ivar: _backgroundStyle
@property (nonatomic) BOOL hasCustomDismissAction; // ivar: _hasCustomDismissAction
@property (nonatomic) BOOL hasCustomSilenceAction; // ivar: _hasCustomSilenceAction
@property (nonatomic) BOOL hasFollowActivityAction; // ivar: _hasFollowActivityAction
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSArray *intentIdentifiers; // ivar: _intentIdentifiers
@property (copy, nonatomic) NSString *listPriority; // ivar: _listPriority
@property (copy, nonatomic) NSArray *minimalActions; // ivar: _minimalActions
@property (nonatomic) BOOL playMediaWhenRaised; // ivar: _playMediaWhenRaised
@property (nonatomic) BOOL presentFullScreenAlertOverList; // ivar: _presentFullScreenAlertOverList
@property (nonatomic) BOOL preventAutomaticLock; // ivar: _preventAutomaticLock
@property (nonatomic) BOOL preventAutomaticRemovalFromRecent; // ivar: _preventAutomaticRemovalFromRecent
@property (nonatomic) BOOL preventClearFromList; // ivar: _preventClearFromList
@property (nonatomic) BOOL preventDismissWhenClosed; // ivar: _preventDismissWhenClosed
@property (nonatomic) BOOL privacyOptionShowSubtitle; // ivar: _privacyOptionShowSubtitle
@property (nonatomic) BOOL privacyOptionShowTitle; // ivar: _privacyOptionShowTitle
@property (copy, nonatomic) NSString *privateBody; // ivar: _privateBody
@property (nonatomic) BOOL revealAdditionalContentWhenPresented; // ivar: _revealAdditionalContentWhenPresented
@property (nonatomic) BOOL shouldAllowActionsInCarPlay; // ivar: _shouldAllowActionsInCarPlay
@property (nonatomic) BOOL shouldAllowInCarPlay; // ivar: _shouldAllowInCarPlay
@property (nonatomic) BOOL shouldAllowPersistentBannersInCarPlay; // ivar: _shouldAllowPersistentBannersInCarPlay
@property (copy, nonatomic) NSString *summaryFormat; // ivar: _summaryFormat
@property (nonatomic) BOOL suppressDelayForForwardedNotifications; // ivar: _suppressDelayForForwardedNotifications
@property (nonatomic) BOOL suppressDismissActionInCarPlay; // ivar: _suppressDismissActionInCarPlay


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg0 ;


@end


#endif