// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COMESSAGINGREQUEST_H
#define COMESSAGINGREQUEST_H

@class NSData, NSString;


#import "COMeshRequest.h"

@interface COMessagingRequest : COMeshRequest

@property (readonly, copy, nonatomic) NSData *payload; // ivar: _payload
@property (readonly, copy, nonatomic) NSString *payloadType; // ivar: _payloadType
@property (readonly, nonatomic) unsigned int requestID; // ivar: _requestID
@property (readonly, nonatomic) NSInteger requestType; // ivar: _requestType
@property (readonly, copy, nonatomic) NSString *topic; // ivar: _topic


+(BOOL)supportsSecureCoding;
+(id)acceptableResponses;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRequestID:(unsigned int)arg0 requestType:(NSInteger)arg1 payload:(id)arg2 payloadType:(id)arg3 topic:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif