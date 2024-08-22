// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FAINVITECONTEXT_H
#define FAINVITECONTEXT_H

@class NSString, NSURL, NSArray;

#import <Foundation/Foundation.h>


@interface FAInviteContext : NSObject

@property (copy, nonatomic) NSString *action; // ivar: _action
@property (nonatomic) BOOL canEditRecipients; // ivar: _canEditRecipients
@property (copy, nonatomic) NSURL *iconURL; // ivar: _iconURL
@property (copy, nonatomic) NSURL *imageURL; // ivar: _imageURL
@property (copy, nonatomic) NSURL *inviteURL; // ivar: _inviteURL
@property (copy, nonatomic) NSArray *invitees; // ivar: _invitees
@property (copy, nonatomic) NSString *mailLinkSubtitle; // ivar: _mailLinkSubtitle
@property (copy, nonatomic) NSString *mailLinkTitle; // ivar: _mailLinkTitle
@property (copy, nonatomic) NSString *mailMessageBodyHTML; // ivar: _mailMessageBodyHTML
@property (copy, nonatomic) NSString *mailMessageSubject; // ivar: _mailMessageSubject
@property (copy, nonatomic) NSString *overlaidTextColorString; // ivar: _overlaidTextColorString
@property (copy, nonatomic) NSString *secondaryTitle; // ivar: _secondaryTitle
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)description;
-(id)initWithResults:(id)arg0 ;
-(void)_parseResultsDictionary:(id)arg0 ;


@end


#endif