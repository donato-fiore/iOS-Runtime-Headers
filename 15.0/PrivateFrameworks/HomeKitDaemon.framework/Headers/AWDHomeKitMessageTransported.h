// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AWDHOMEKITMESSAGETRANSPORTED_H
#define AWDHOMEKITMESSAGETRANSPORTED_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface AWDHomeKitMessageTransported : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int direction; // ivar: _direction
@property (nonatomic) BOOL hasDirection;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (nonatomic) BOOL hasIsSecure;
@property (readonly, nonatomic) BOOL hasMessageName;
@property (nonatomic) BOOL hasMessageType;
@property (nonatomic) BOOL hasPayloadSize;
@property (nonatomic) BOOL hasTimestamp;
@property (readonly, nonatomic) BOOL hasTransactionID;
@property (nonatomic) BOOL hasTransport;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL isSecure; // ivar: _isSecure
@property (retain, nonatomic) NSString *messageName; // ivar: _messageName
@property (nonatomic) int messageType; // ivar: _messageType
@property (nonatomic) NSUInteger payloadSize; // ivar: _payloadSize
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (retain, nonatomic) NSString *transactionID; // ivar: _transactionID
@property (nonatomic) int transport; // ivar: _transport


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)directionAsString:(int)arg0 ;
-(id)messageTypeAsString:(int)arg0 ;
-(id)transportAsString:(int)arg0 ;
-(int)StringAsDirection:(id)arg0 ;
-(int)StringAsMessageType:(id)arg0 ;
-(int)StringAsTransport:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif