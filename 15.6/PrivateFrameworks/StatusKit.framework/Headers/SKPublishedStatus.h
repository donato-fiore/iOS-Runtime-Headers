// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKPUBLISHEDSTATUS_H
#define SKPUBLISHEDSTATUS_H

@class NSDate, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SKInvitationPayload.h"
#import "SKStatusPayload.h"

@interface SKPublishedStatus : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSDate *dateCreated; // ivar: _dateCreated
@property (readonly, nonatomic) NSDate *datePublished; // ivar: _datePublished
@property (readonly, nonatomic) NSDate *dateReceived; // ivar: _dateReceived
@property (readonly, nonatomic) SKInvitationPayload *invitationPayload; // ivar: _invitationPayload
@property (readonly, nonatomic) SKStatusPayload *statusPayload; // ivar: _statusPayload
@property (readonly, nonatomic) NSString *statusUniqueIdentifier; // ivar: _statusUniqueIdentifier


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStatusPayload:(id)arg0 statusUniqueIdentifier:(id)arg1 datePublished:(id)arg2 dateCreated:(id)arg3 dateReceived:(id)arg4 invitationPayload:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif