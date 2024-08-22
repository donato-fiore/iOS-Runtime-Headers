// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FTPROTOBUFMESSAGE_H
#define FTPROTOBUFMESSAGE_H

@class NSString, NSData;


#import "FTIDSMessage.h"

@interface FTProtobufMessage : FTIDSMessage

@property (retain, nonatomic) NSString *messageID; // ivar: _messageID
@property (retain, nonatomic) NSData *protoData; // ivar: _protoData
@property (retain, nonatomic) NSData *protoResponse; // ivar: _protoResponse
@property (retain, nonatomic) NSString *pushTopic; // ivar: _pushTopic
@property (nonatomic) int responseValue; // ivar: _responseValue
@property (nonatomic) int version; // ivar: _version


-(BOOL)highPriority;
-(BOOL)isIDSMessage;
-(BOOL)isWebTunnelMessage;
-(BOOL)wantsAPSRetries;
-(BOOL)wantsBinaryPush;
-(BOOL)wantsCompressedBody;
-(BOOL)wantsIDSProtocolVersion;
-(BOOL)wantsIntegerUniqueIDs;
-(BOOL)wantsResponse;
-(BOOL)wantsUserAgentInHeaders;
-(NSInteger)command;
-(NSInteger)responseCommand;
-(id)additionalMessageHeadersForOutgoingPush;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithPushTopic:(id)arg0 protoData:(id)arg1 ;
-(id)messageBody;
-(id)topic;
-(id)userAgentHeaderString;
-(void)handleResponseDictionary:(id)arg0 ;
-(void)handleResponseHeaders:(id)arg0 ;


@end


#endif