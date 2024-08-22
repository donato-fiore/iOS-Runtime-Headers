// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKADATABASEINVITEDUSER_H
#define SKADATABASEINVITEDUSER_H

@class NSDate, SKInvitationPayload, NSData, NSString, SKHandle;

#import <Foundation/Foundation.h>


@interface SKADatabaseInvitedUser : NSObject

@property (readonly, nonatomic) NSDate *dateInvitationPayloadCreated; // ivar: _dateInvitationPayloadCreated
@property (readonly, nonatomic) SKInvitationPayload *invitationPayload;
@property (readonly, nonatomic) NSData *invitationPayloadData; // ivar: _invitationPayloadData
@property (readonly, nonatomic) NSString *invitedHandle; // ivar: _invitedHandle
@property (readonly, nonatomic) SKHandle *invitedSKHandle;
@property (readonly, nonatomic) NSString *senderHandle; // ivar: _senderHandle
@property (readonly, nonatomic) SKHandle *senderSKHandle;


-(id)initWithCoreDataInvitedUser:(id)arg0 ;
-(id)initWithInvitedHandle:(id)arg0 senderHande:(id)arg1 invitationPayloadData:(id)arg2 dateInvitationPayloadCreated:(id)arg3 ;


@end


#endif