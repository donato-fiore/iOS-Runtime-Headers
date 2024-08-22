// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FAINVITECONTEXT_H
#define FAINVITECONTEXT_H

@class NSString, NSURL, NSArray;

#import <Foundation/Foundation.h>


@interface FAInviteContext : NSObject

@property (copy, nonatomic) NSString *action; // ivar: _action
@property (nonatomic) BOOL canEditRecipients; // ivar: _canEditRecipients
@property (retain, nonatomic) NSString *eventType; // ivar: _eventType
@property (copy, nonatomic) NSURL *iconURL; // ivar: _iconURL
@property (copy, nonatomic) NSURL *imageURL; // ivar: _imageURL
@property (copy, nonatomic) NSURL *inviteURL; // ivar: _inviteURL
@property (copy, nonatomic) NSArray *invitees; // ivar: _invitees
@property (copy, nonatomic) NSString *mailLinkSubtitle; // ivar: _mailLinkSubtitle
@property (copy, nonatomic) NSString *mailLinkTitle; // ivar: _mailLinkTitle
@property (copy, nonatomic) NSString *mailMessageBodyHTML; // ivar: _mailMessageBodyHTML
@property (copy, nonatomic) NSString *mailMessageSubject; // ivar: _mailMessageSubject
@property (copy, nonatomic) NSURL *messageBubbleAcceptInviteURL; // ivar: _messageBubbleAcceptInviteURL
@property (copy, nonatomic) NSString *messageBubbleAppleIDSettingsLinkLabel; // ivar: _messageBubbleAppleIDSettingsLinkLabel
@property (copy, nonatomic) NSURL *messageBubbleDeclineInviteURL; // ivar: _messageBubbleDeclineInviteURL
@property (copy, nonatomic) NSString *messageBubbleFamilySettingsLinkLabel; // ivar: _messageBubbleFamilySettingsLinkLabel
@property (copy, nonatomic) NSString *messageBubbleInviteAcceptButtonLabel; // ivar: _messageBubbleInviteAcceptButtonLabel
@property (copy, nonatomic) NSString *messageBubbleInviteAcceptedIcon; // ivar: _messageBubbleInviteAcceptedIcon
@property (copy, nonatomic) NSString *messageBubbleInviteAcceptedSubTitleReceiver; // ivar: _messageBubbleInviteAcceptedSubTitleReceiver
@property (copy, nonatomic) NSString *messageBubbleInviteAcceptedSubTitleSender; // ivar: _messageBubbleInviteAcceptedSubTitleSender
@property (copy, nonatomic) NSString *messageBubbleInviteAcceptedTitleReceiver; // ivar: _messageBubbleInviteAcceptedTitleReceiver
@property (copy, nonatomic) NSString *messageBubbleInviteAcceptedTitleSender; // ivar: _messageBubbleInviteAcceptedTitleSender
@property (copy, nonatomic) NSString *messageBubbleInviteDeclineButtonLabel; // ivar: _messageBubbleInviteDeclineButtonLabel
@property (copy, nonatomic) NSString *messageBubbleInviteDeclinedIcon; // ivar: _messageBubbleInviteDeclinedIcon
@property (copy, nonatomic) NSString *messageBubbleInviteDeclinedSubTitleReceiver; // ivar: _messageBubbleInviteDeclinedSubTitleReceiver
@property (copy, nonatomic) NSString *messageBubbleInviteDeclinedSubTitleSender; // ivar: _messageBubbleInviteDeclinedSubTitleSender
@property (copy, nonatomic) NSString *messageBubbleInviteDeclinedTitleReceiver; // ivar: _messageBubbleInviteDeclinedTitleReceiver
@property (copy, nonatomic) NSString *messageBubbleInviteDeclinedTitleSender; // ivar: _messageBubbleInviteDeclinedTitleSender
@property (copy, nonatomic) NSString *messageBubbleInviteExpiredIcon; // ivar: _messageBubbleInviteExpiredIcon
@property (copy, nonatomic) NSString *messageBubbleInviteExpiredSubTitleReceiver; // ivar: _messageBubbleInviteExpiredSubTitleReceiver
@property (copy, nonatomic) NSString *messageBubbleInviteExpiredSubTitleSender; // ivar: _messageBubbleInviteExpiredSubTitleSender
@property (copy, nonatomic) NSString *messageBubbleInviteExpiredTitleReceiver; // ivar: _messageBubbleInviteExpiredTitleReceiver
@property (copy, nonatomic) NSString *messageBubbleInviteExpiredTitleSender; // ivar: _messageBubbleInviteExpiredTitleSender
@property (copy, nonatomic) NSString *messageBubbleInviteLoadingLabel; // ivar: _messageBubbleInviteLoadingLabel
@property (copy, nonatomic) NSString *messageBubbleInvitePendingIcon; // ivar: _messageBubbleInvitePendingIcon
@property (copy, nonatomic) NSString *messageBubbleInvitePendingSubTitle; // ivar: _messageBubbleInvitePendingSubTitle
@property (copy, nonatomic) NSString *messageBubbleInvitePendingTitle; // ivar: _messageBubbleInvitePendingTitle
@property (copy, nonatomic) NSString *messageBubbleLearnMoreLinkLabel; // ivar: _messageBubbleLearnMoreLinkLabel
@property (copy, nonatomic) NSString *messageBubbleSubTitle; // ivar: _messageBubbleSubTitle
@property (copy, nonatomic) NSString *messageBubbleSubTitleTeen; // ivar: _messageBubbleSubTitleTeen
@property (copy, nonatomic) NSString *messageBubbleSubscriptionsList; // ivar: _messageBubbleSubscriptionsList
@property (copy, nonatomic) NSString *messageBubbleTitle; // ivar: _messageBubbleTitle
@property (copy, nonatomic) NSString *messageBubbleViewInvitationButtonLabel; // ivar: _messageBubbleViewInvitationButtonLabel
@property (copy, nonatomic) NSString *overlaidTextColorString; // ivar: _overlaidTextColorString
@property (readonly, nonatomic) NSUInteger remainingFamilySpots; // ivar: _remainingFamilySpots
@property (copy, nonatomic) NSURL *reportInviteeDetailsUrl; // ivar: _reportInviteeDetailsUrl
@property (copy, nonatomic) NSString *secondaryTitle; // ivar: _secondaryTitle
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) NSUInteger validation; // ivar: _validation


-(NSUInteger)_validatonFromString:(id)arg0 eventType:(id)arg1 ;
-(id)buildInviteMessageBubbleURL:(id)arg0 ;
-(id)description;
-(id)initWithResults:(id)arg0 ;
-(id)privacySafeInvitees;
-(void)_parseResultsDictionary:(id)arg0 ;


@end


#endif