// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSWEBTUNNELREQUESTMESSAGE_H
#define IDSWEBTUNNELREQUESTMESSAGE_H

@class NSNumber, NSMutableDictionary, NSData, NSDictionary, NSString;


#import "FTIDSMessage.h"

@interface IDSWebTunnelRequestMessage : FTIDSMessage

@property (nonatomic) BOOL disableIDSTranslation; // ivar: _disableIDSTranslation
@property (copy, nonatomic) NSNumber *maximumResponseSize; // ivar: _maximumResponseSize
@property (copy, nonatomic) NSMutableDictionary *messageHeaders; // ivar: _messageHeaders
@property (copy, nonatomic) NSData *messageRequestBodyData; // ivar: _messageRequestBodyData
@property (copy, nonatomic) NSDictionary *messageRequestBodyDictionary; // ivar: _messageRequestBodyDictionary
@property (copy, nonatomic) NSString *messageRequestUUID; // ivar: _messageRequestUUID
@property (copy, nonatomic) NSString *messageURL; // ivar: _messageURL
@property (copy, nonatomic) NSData *responseBodyData; // ivar: _responseBodyData
@property (copy, nonatomic) NSDictionary *responseBodyDictionary; // ivar: _responseBodyDictionary
@property (copy, nonatomic) NSNumber *responseCode; // ivar: _responseCode
@property (copy, nonatomic) NSDictionary *responseHeaders; // ivar: _responseHeaders
@property (copy, nonatomic) NSNumber *responseStatus; // ivar: _responseStatus
@property (copy, nonatomic) NSString *userAgentOverride; // ivar: _userAgentOverride


-(BOOL)isIDSMessage;
-(BOOL)isWebTunnelMessage;
-(BOOL)wantsBinaryPush;
-(BOOL)wantsCompressedBody;
-(BOOL)wantsIDSProtocolVersion;
-(id)additionalMessageHeadersForOutgoingPush;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithMessage:(id)arg0 ;
-(id)messageBody;
-(void)handleResponseDictionary:(id)arg0 ;
-(void)handleResponseHeaders:(id)arg0 ;


@end


#endif