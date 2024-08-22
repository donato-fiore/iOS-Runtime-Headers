// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PDSREGISTERMESSAGE_H
#define PDSREGISTERMESSAGE_H

@class FTIDSMessage;


#import "PDSProtoBatchRegisterReq.h"
#import "PDSProtoBatchRegisterResp.h"

@interface PDSRegisterMessage : FTIDSMessage

@property (retain, nonatomic) PDSProtoBatchRegisterReq *protoRequest; // ivar: _protoRequest
@property (retain, nonatomic) PDSProtoBatchRegisterResp *protoResponse; // ivar: _protoResponse
@property (nonatomic) NSUInteger regReason; // ivar: _regReason


-(BOOL)hasRequiredKeys:(*id)arg0 ;
-(BOOL)requiresPushTokenKeys;
-(BOOL)wantsClientInfo;
-(BOOL)wantsIDSProtocolVersion;
-(BOOL)wantsUDID;
-(CGFloat)anisetteHeadersTimeout;
-(id)additionalMessageHeaders;
-(id)bagKey;
-(id)messageBodyDataOverride;
-(id)overrideContentType;
-(id)parsedIDSMessageResult;
-(void)handleResponseBody:(id)arg0 ;


@end


#endif