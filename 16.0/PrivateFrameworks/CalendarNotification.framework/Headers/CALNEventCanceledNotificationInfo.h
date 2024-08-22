// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALNEVENTCANCELEDNOTIFICATIONINFO_H
#define CALNEVENTCANCELEDNOTIFICATIONINFO_H

@class EKCalendarEventInvitationNotification, NSDictionary, NSDate, NSURL, NSString;

#import <Foundation/Foundation.h>


@interface CALNEventCanceledNotificationInfo : NSObject

@property (readonly, nonatomic) EKCalendarEventInvitationNotification *eventInvitationNotification; // ivar: _eventInvitationNotification
@property (readonly, copy, nonatomic) NSDictionary *eventRepresentationDictionary; // ivar: _eventRepresentationDictionary
@property (readonly, copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, nonatomic) BOOL isDelegate; // ivar: _isDelegate
@property (readonly, copy, nonatomic) NSURL *launchURL; // ivar: _launchURL
@property (readonly, copy, nonatomic) NSString *sourceClientIdentifier; // ivar: _sourceClientIdentifier
@property (readonly, copy, nonatomic) NSString *sourceIdentifier; // ivar: _sourceIdentifier
@property (readonly, copy, nonatomic) NSString *sourceTitle; // ivar: _sourceTitle


-(id)description;
-(id)initWithSourceClientIdentifier:(id)arg0 launchURL:(id)arg1 expirationDate:(id)arg2 eventInvitationNotification:(id)arg3 eventRepresentationDictionary:(id)arg4 isDelegate:(BOOL)arg5 sourceTitle:(id)arg6 sourceIdentifier:(id)arg7 ;


@end


#endif