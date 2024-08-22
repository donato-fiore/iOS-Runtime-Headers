// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COMESSAGESESSIONMANAGEMENTREQUEST_H
#define COMESSAGESESSIONMANAGEMENTREQUEST_H

@class NSData, NSString, NSError;


#import "COMessageChannelRequest.h"

@interface COMessageSessionManagementRequest : COMessageChannelRequest

@property (readonly, nonatomic) NSInteger commandType; // ivar: _commandType
@property (readonly, copy, nonatomic) NSData *payload; // ivar: _payload
@property (readonly, copy, nonatomic) NSString *payloadType; // ivar: _payloadType
@property (readonly, copy, nonatomic) NSError *remoteError; // ivar: _remoteError
@property (readonly, copy, nonatomic) NSString *subTopic; // ivar: _subTopic
@property (readonly, copy, nonatomic) NSString *topic; // ivar: _topic


+(BOOL)supportsSecureCoding;
+(id)acceptableResponses;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCommandType:(NSInteger)arg0 error:(id)arg1 topic:(id)arg2 subTopic:(id)arg3 ;
-(id)initWithCommandType:(NSInteger)arg0 payload:(id)arg1 payloadType:(id)arg2 topic:(id)arg3 subTopic:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif