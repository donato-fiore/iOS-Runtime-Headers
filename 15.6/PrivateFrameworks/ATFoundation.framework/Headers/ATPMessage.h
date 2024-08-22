// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATPMESSAGE_H
#define ATPMESSAGE_H

@class PBCodable, NSData;
@protocol NSCopying;


#import "ATPRequest.h"
#import "ATPResponse.h"
#import "ATPError.h"

@interface ATPMessage : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL additionalPayload; // ivar: _additionalPayload
@property (nonatomic) BOOL hasAdditionalPayload;
@property (nonatomic) BOOL hasMessageID;
@property (nonatomic) BOOL hasMessageType;
@property (readonly, nonatomic) BOOL hasParameters;
@property (readonly, nonatomic) BOOL hasParamsSignature;
@property (readonly, nonatomic) BOOL hasPayload;
@property (readonly, nonatomic) BOOL hasPayloadSignature;
@property (readonly, nonatomic) BOOL hasRequest;
@property (readonly, nonatomic) BOOL hasResponse;
@property (nonatomic) BOOL hasSessionID;
@property (readonly, nonatomic) BOOL hasStreamError;
@property (nonatomic) unsigned int messageID; // ivar: _messageID
@property (nonatomic) int messageType; // ivar: _messageType
@property (retain, nonatomic) NSData *parameters; // ivar: _parameters
@property (retain, nonatomic) NSData *paramsSignature; // ivar: _paramsSignature
@property (retain, nonatomic) NSData *payload; // ivar: _payload
@property (retain, nonatomic) NSData *payloadSignature; // ivar: _payloadSignature
@property (retain, nonatomic) ATPRequest *request; // ivar: _request
@property (retain, nonatomic) ATPResponse *response; // ivar: _response
@property (nonatomic) unsigned int sessionID; // ivar: _sessionID
@property (retain, nonatomic) ATPError *streamError; // ivar: _streamError


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)formattedDescription;
-(id)messageTypeAsString:(int)arg0 ;
-(int)StringAsMessageType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif