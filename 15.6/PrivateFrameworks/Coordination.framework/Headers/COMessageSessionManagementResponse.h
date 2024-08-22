// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef COMESSAGESESSIONMANAGEMENTRESPONSE_H
#define COMESSAGESESSIONMANAGEMENTRESPONSE_H

@class NSData, NSString, NSError;


#import "COMessageChannelResponse.h"

@interface COMessageSessionManagementResponse : COMessageChannelResponse

@property (readonly, copy, nonatomic) NSData *payload; // ivar: _payload
@property (readonly, copy, nonatomic) NSString *payloadType; // ivar: _payloadType
@property (readonly, copy, nonatomic) NSError *remoteError; // ivar: _remoteError


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPayload:(id)arg0 payloadType:(id)arg1 ;
-(id)initWithRemoteError:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif