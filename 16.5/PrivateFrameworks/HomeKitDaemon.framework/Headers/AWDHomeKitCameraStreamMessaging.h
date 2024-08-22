// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AWDHOMEKITCAMERASTREAMMESSAGING_H
#define AWDHOMEKITCAMERASTREAMMESSAGING_H

@class PBCodable;
@protocol NSCopying;



@interface AWDHomeKitCameraStreamMessaging : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasReceivedConnSetup;
@property (nonatomic) BOOL hasReceivedNegotiationRequest;
@property (nonatomic) BOOL hasReceivedStartRequest;
@property (nonatomic) BOOL hasSentConnSetup;
@property (nonatomic) BOOL hasSentNegotiationRequest;
@property (nonatomic) BOOL hasSentNegotiationResponse;
@property (nonatomic) BOOL hasSentStartRequest;
@property (nonatomic) BOOL hasSentStartResponse;
@property (nonatomic) unsigned int receivedConnSetup; // ivar: _receivedConnSetup
@property (nonatomic) unsigned int receivedNegotiationRequest; // ivar: _receivedNegotiationRequest
@property (nonatomic) unsigned int receivedStartRequest; // ivar: _receivedStartRequest
@property (nonatomic) unsigned int sentConnSetup; // ivar: _sentConnSetup
@property (nonatomic) unsigned int sentNegotiationRequest; // ivar: _sentNegotiationRequest
@property (nonatomic) unsigned int sentNegotiationResponse; // ivar: _sentNegotiationResponse
@property (nonatomic) unsigned int sentStartRequest; // ivar: _sentStartRequest
@property (nonatomic) unsigned int sentStartResponse; // ivar: _sentStartResponse


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif