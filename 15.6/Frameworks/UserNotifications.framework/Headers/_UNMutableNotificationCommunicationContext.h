// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UNMUTABLENOTIFICATIONCOMMUNICATIONCONTEXT_H
#define _UNMUTABLENOTIFICATIONCOMMUNICATIONCONTEXT_H

@class UNNotificationCommunicationContext, NSString, NSURL, NSArray;


#import "_UNNotificationContact.h"

@interface _UNMutableNotificationCommunicationContext : UNNotificationCommunicationContext

@property (copy, nonatomic) NSString *associatedObjectUri;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSURL *contentURL;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *imageName;
@property (nonatomic) BOOL mentionsCurrentUser;
@property (nonatomic) BOOL notifyRecipientAnyway;
@property (nonatomic) NSUInteger recipientCount;
@property (copy, nonatomic) NSArray *recipients;
@property (nonatomic, getter=isReplyToCurrentUser) BOOL replyToCurrentUser;
@property (copy, nonatomic) _UNNotificationContact *sender;
@property (nonatomic, getter=isSystemImage) BOOL systemImage;


+(id)mutableContextFromINIntent:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif