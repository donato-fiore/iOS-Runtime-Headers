// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UNNOTIFICATIONCONTENT_H
#define UNNOTIFICATIONCONTENT_H

@class NSString, NSArray, NSNumber, NSDate, NSURL, NSSet, NSDictionary;
@protocol UNNotificationSecurityScopeProviding, NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_UNNotificationCommunicationContext.h"
#import "UNNotificationIcon.h"
#import "UNNotificationSound.h"

@interface UNNotificationContent : NSObject <UNNotificationSecurityScopeProviding, NSCopying, NSMutableCopying, NSSecureCoding>

 {
    NSString *_subtitle;
}


@property (readonly, nonatomic) NSString *accessoryImageName; // ivar: _accessoryImageName
@property (readonly, copy, nonatomic) NSArray *attachments; // ivar: _attachments
@property (readonly, copy, nonatomic) NSNumber *badge; // ivar: _badge
@property (readonly, copy, nonatomic) NSString *body; // ivar: _body
@property (readonly, copy, nonatomic) NSString *categoryIdentifier; // ivar: _categoryIdentifier
@property (readonly, copy, nonatomic) _UNNotificationCommunicationContext *communicationContext; // ivar: _communicationContext
@property (readonly, copy, nonatomic) NSString *contentType; // ivar: _contentType
@property (readonly, copy, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *defaultActionTitle; // ivar: _defaultActionTitle
@property (readonly, copy, nonatomic) NSURL *defaultActionURL; // ivar: _defaultActionURL
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, copy, nonatomic) NSString *footer; // ivar: _footer
@property (readonly, nonatomic) BOOL hasDefaultAction;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *header; // ivar: _header
@property (readonly, copy, nonatomic) UNNotificationIcon *icon; // ivar: _icon
@property (readonly, nonatomic) NSUInteger interruptionLevel; // ivar: _interruptionLevel
@property (readonly, copy, nonatomic) NSString *launchImageName; // ivar: _launchImageName
@property (retain, nonatomic) NSString *markedMutableCopyMessage; // ivar: _markedMutableCopyMessage
@property (readonly, copy, nonatomic) NSArray *peopleIdentifiers; // ivar: _peopleIdentifiers
@property (readonly, nonatomic) NSUInteger realertCount; // ivar: _realertCount
@property (readonly, nonatomic) CGFloat relevanceScore; // ivar: _relevanceScore
@property (readonly, nonatomic) BOOL shouldAuthenticateDefaultAction; // ivar: _shouldAuthenticateDefaultAction
@property (readonly, nonatomic) BOOL shouldBackgroundDefaultAction; // ivar: _shouldBackgroundDefaultAction
@property (readonly, nonatomic) BOOL shouldDisplayActionsInline; // ivar: _shouldDisplayActionsInline
@property (readonly, nonatomic) BOOL shouldHideDate; // ivar: _shouldHideDate
@property (readonly, nonatomic) BOOL shouldHideTime; // ivar: _shouldHideTime
@property (readonly, nonatomic) BOOL shouldIgnoreDoNotDisturb; // ivar: _shouldIgnoreDoNotDisturb
@property (readonly, nonatomic) BOOL shouldIgnoreDowntime; // ivar: _shouldIgnoreDowntime
@property (readonly, nonatomic) BOOL shouldPreemptPresentedNotification; // ivar: _shouldPreemptPresentedNotification
@property (readonly, nonatomic) BOOL shouldPreventNotificationDismissalAfterDefaultAction; // ivar: _shouldPreventNotificationDismissalAfterDefaultAction
@property (readonly, nonatomic) BOOL shouldShowSubordinateIcon; // ivar: _shouldShowSubordinateIcon
@property (readonly, nonatomic) BOOL shouldSuppressDefaultAction; // ivar: _shouldSuppressDefaultAction
@property (readonly, nonatomic) BOOL shouldSuppressScreenLightUp; // ivar: _shouldSuppressScreenLightUp
@property (readonly, nonatomic) BOOL shouldSuppressSyncDismissalWhenRemoved; // ivar: _shouldSuppressSyncDismissalWhenRemoved
@property (readonly, nonatomic) BOOL shouldUseRequestIdentifierForDismissalSync; // ivar: _shouldUseRequestIdentifierForDismissalSync
@property (readonly, copy, nonatomic) UNNotificationSound *sound; // ivar: _sound
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *summaryArgument; // ivar: _summaryArgument
@property (readonly, nonatomic) NSUInteger summaryArgumentCount; // ivar: _summaryArgumentCount
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *targetContentIdentifier; // ivar: _targetContentIdentifier
@property (readonly, copy, nonatomic) NSString *threadIdentifier; // ivar: _threadIdentifier
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, copy, nonatomic) NSSet *topicIdentifiers; // ivar: _topicIdentifiers
@property (readonly, copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_descriptionForDebug:(BOOL)arg0 ;
-(id)_initWithContentType:(id)arg0 communicationContext:(id)arg1 accessoryImageName:(id)arg2 attachments:(id)arg3 badge:(id)arg4 body:(id)arg5 categoryIdentifier:(id)arg6 date:(id)arg7 icon:(id)arg8 defaultActionTitle:(id)arg9 defaultActionURL:(id)arg10 expirationDate:(id)arg11 header:(id)arg12 footer:(id)arg13 launchImageName:(id)arg14 peopleIdentifiers:(id)arg15 shouldHideDate:(BOOL)arg16 shouldHideTime:(BOOL)arg17 shouldIgnoreDoNotDisturb:(BOOL)arg18 shouldIgnoreDowntime:(BOOL)arg19 shouldSuppressScreenLightUp:(BOOL)arg20 shouldAuthenticateDefaultAction:(BOOL)arg21 shouldBackgroundDefaultAction:(BOOL)arg22 shouldPreventNotificationDismissalAfterDefaultAction:(BOOL)arg23 shouldShowSubordinateIcon:(BOOL)arg24 shouldSuppressDefaultAction:(BOOL)arg25 shouldSuppressSyncDismissalWhenRemoved:(BOOL)arg26 shouldUseRequestIdentifierForDismissalSync:(BOOL)arg27 shouldPreemptPresentedNotification:(BOOL)arg28 shouldDisplayActionsInline:(BOOL)arg29 sound:(id)arg30 subtitle:(id)arg31 threadIdentifier:(id)arg32 title:(id)arg33 topicIdentifiers:(id)arg34 realertCount:(NSUInteger)arg35 summaryArgument:(id)arg36 summaryArgumentCount:(NSUInteger)arg37 targetContentIdentifier:(id)arg38 interruptionLevel:(NSUInteger)arg39 relevanceScore:(CGFloat)arg40 userInfo:(id)arg41 ;
-(id)_safeStringForString:(id)arg0 debug:(BOOL)arg1 ;
-(id)contentByUpdatingWithProvider:(id)arg0 error:(*id)arg1 ;
-(id)contentByUpdatingWithReadAnnouncementIntent:(id)arg0 error:(*id)arg1 ;
-(id)contentByUpdatingWithSendMessageIntent:(id)arg0 error:(*id)arg1 ;
-(id)contentByUpdatingWithStartCallIntent:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)markedMutableCopyWithMessage:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)addSecurityScope:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enterSecurityScope;
-(void)leaveSecurityScope;
-(void)removeSecurityScope;


@end


#endif