// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UNNOTIFICATIONCOMMUNICATIONCONTEXT_H
#define _UNNOTIFICATIONCOMMUNICATIONCONTEXT_H

@class NSArray, NSString, NSURL;
@protocol BSDescriptionProviding, NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_UNNotificationContact.h"

@interface _UNNotificationCommunicationContext : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *allContacts;
@property (readonly, copy, nonatomic) NSString *associatedObjectUri; // ivar: _associatedObjectUri
@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy, nonatomic) NSURL *contentURL; // ivar: _contentURL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDirect) BOOL direct;
@property (readonly, copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic, getter=isGroup) BOOL group;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *imageName; // ivar: _imageName
@property (readonly, nonatomic) BOOL mentionsCurrentUser; // ivar: _mentionsCurrentUser
@property (readonly, nonatomic) BOOL notifyRecipientAnyway; // ivar: _notifyRecipientAnyway
@property (readonly, copy, nonatomic) NSString *preferredDescription;
@property (readonly, copy, nonatomic) NSString *preferredRecipientsSummary;
@property (readonly, copy, nonatomic) NSString *preferredSenderSummary;
@property (readonly, nonatomic) NSUInteger recipientCount; // ivar: _recipientCount
@property (readonly, copy, nonatomic) NSArray *recipients; // ivar: _recipients
@property (readonly, nonatomic, getter=isReplyToCurrentUser) BOOL replyToCurrentUser; // ivar: _replyToCurrentUser
@property (readonly, copy, nonatomic) _UNNotificationContact *sender; // ivar: _sender
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isSystemImage) BOOL systemImage; // ivar: _systemImage


+(BOOL)supportsSecureCoding;
-(BOOL)isAvatarImagePossible;
-(BOOL)isAvatarImagePossibleForBundleIdentifier:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)_effectiveAllContactsCount;
-(NSUInteger)_effectiveRecipientCount;
-(id)_initWithIdentifier:(id)arg0 associatedObjectUri:(id)arg1 bundleIdentifier:(id)arg2 displayName:(id)arg3 sender:(id)arg4 recipients:(id)arg5 contentURL:(id)arg6 imageName:(id)arg7 systemImage:(BOOL)arg8 mentionsCurrentUser:(BOOL)arg9 notifyRecipientAnyway:(BOOL)arg10 replyToCurrentUser:(BOOL)arg11 recipientCount:(NSUInteger)arg12 ;
-(id)_summaryFromContacts:(id)arg0 effectiveCount:(NSUInteger)arg1 includeMe:(BOOL)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif