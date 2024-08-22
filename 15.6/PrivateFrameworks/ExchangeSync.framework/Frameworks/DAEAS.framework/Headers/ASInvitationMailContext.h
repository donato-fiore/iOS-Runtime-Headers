// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASINVITATIONMAILCONTEXT_H
#define ASINVITATIONMAILCONTEXT_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface ASInvitationMailContext : NSObject

@property (retain, nonatomic) NSArray *attendeeUUIDs; // ivar: _attendeeUUIDs
@property (nonatomic) int emailResponse; // ivar: _emailResponse
@property (retain, nonatomic) NSString *eventUID; // ivar: _eventUID
@property (nonatomic) BOOL isMyInvite; // ivar: _isMyInvite
@property (retain, nonatomic) NSString *serverID; // ivar: _serverID




@end


#endif