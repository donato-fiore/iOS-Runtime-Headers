// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BBMUTABLECOMMUNICATIONCONTEXT_H
#define BBMUTABLECOMMUNICATIONCONTEXT_H

@class NSString, NSURL, NSArray;


#import "BBCommunicationContext.h"
#import "BBContact.h"

@interface BBMutableCommunicationContext : BBCommunicationContext

@property (copy, nonatomic) NSString *associatedObjectUri;
@property (nonatomic) NSInteger capabilities;
@property (copy, nonatomic) NSURL *contentURL;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *imageName;
@property (nonatomic) BOOL mentionsCurrentUser;
@property (nonatomic) BOOL notifyRecipientAnyway;
@property (nonatomic) NSUInteger recipientCount;
@property (copy, nonatomic) NSArray *recipients;
@property (nonatomic, getter=isReplyToCurrentUser) BOOL replyToCurrentUser;
@property (copy, nonatomic) BBContact *sender;
@property (nonatomic) BOOL systemImage;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif