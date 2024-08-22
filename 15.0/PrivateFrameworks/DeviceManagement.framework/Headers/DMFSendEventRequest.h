// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DMFSENDEVENTREQUEST_H
#define DMFSENDEVENTREQUEST_H

@class NSDictionary, NSString;


#import "DMFTaskRequest.h"

@interface DMFSendEventRequest : DMFTaskRequest

@property (copy, nonatomic) NSDictionary *details; // ivar: _details
@property (copy, nonatomic) NSString *eventType; // ivar: _eventType
@property (copy, nonatomic) NSString *inReplyTo; // ivar: _inReplyTo
@property (copy, nonatomic) NSString *organizationIdentifier; // ivar: _organizationIdentifier


+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(BOOL)supportsSecureCoding;
+(id)permittedPlatforms;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif