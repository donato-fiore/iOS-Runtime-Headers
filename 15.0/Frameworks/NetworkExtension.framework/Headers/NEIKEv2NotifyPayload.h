// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEIKEV2NOTIFYPAYLOAD_H
#define NEIKEV2NOTIFYPAYLOAD_H

@class NSData;


#import "NEIKEv2Payload.h"
#import "NEIKEv2SPI.h"

@interface NEIKEv2NotifyPayload : NEIKEv2Payload

@property (retain) NSData *data; // ivar: _data
@property (readonly) BOOL isError;
@property (readonly) BOOL isPrivateError;
@property NSUInteger notifyType; // ivar: _notifyType
@property (retain) NEIKEv2SPI *spi; // ivar: _spi


+(id)copyTypeDescription;
+(id)createNotifyPayloadType:(NSUInteger)arg0 ;
+(id)createNotifyPayloadType:(NSUInteger)arg0 data:(id)arg1 ;
+(id)createNotifyPayloadType:(NSUInteger)arg0 spi:(id)arg1 ;
-(BOOL)generatePayloadData;
-(BOOL)hasRequiredFields;
-(BOOL)parsePayloadData;
-(NSUInteger)type;
-(id)copyAdditionalAddress;
-(id)copyError;
-(id)copyServerRedirectEndpoint;
-(id)copyServerRedirectNonce;
-(id)copyTypeDescription;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;


@end


#endif