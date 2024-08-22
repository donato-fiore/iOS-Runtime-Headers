// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALNEVENTINVITATIONNOTIFICATIONINFO_H
#define CALNEVENTINVITATIONNOTIFICATIONINFO_H

@class EKConflictDetails, EKCalendarEventInvitationNotification, NSDictionary, NSString, NSDate, NSURL;

#import <Foundation/Foundation.h>


@interface CALNEventInvitationNotificationInfo : NSObject

@property (readonly, nonatomic) EKConflictDetails *conflictDetails; // ivar: _conflictDetails
@property (readonly, nonatomic) EKCalendarEventInvitationNotification *eventInvitationNotification; // ivar: _eventInvitationNotification
@property (readonly, copy, nonatomic) NSDictionary *eventRepresentationDictionary; // ivar: _eventRepresentationDictionary
@property (readonly, copy, nonatomic) NSString *eventURI; // ivar: _eventURI
@property (readonly, copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, nonatomic) BOOL isDelegate; // ivar: _isDelegate
@property (readonly, copy, nonatomic) NSURL *launchURL; // ivar: _launchURL
@property (readonly, copy, nonatomic) NSString *sourceClientIdentifier; // ivar: _sourceClientIdentifier
@property (readonly, copy, nonatomic) NSString *sourceIdentifier; // ivar: _sourceIdentifier
@property (readonly, copy, nonatomic) NSString *sourceTitle; // ivar: _sourceTitle


-(id)description;
-(id)initWithSourceClientIdentifier:(id)arg0 launchURL:(id)arg1 expirationDate:(id)arg2 conflictDetails:(id)arg3 eventInvitationNotification:(id)arg4 eventRepresentationDictionary:(id)arg5 eventURI:(id)arg6 isDelegate:(BOOL)arg7 sourceTitle:(id)arg8 sourceIdentifier:(id)arg9 ;


@end


#endif