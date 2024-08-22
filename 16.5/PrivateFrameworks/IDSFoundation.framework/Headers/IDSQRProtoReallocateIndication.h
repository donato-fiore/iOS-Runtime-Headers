// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSQRPROTOREALLOCATEINDICATION_H
#define IDSQRPROTOREALLOCATEINDICATION_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface IDSQRProtoReallocateIndication : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *clientAddress; // ivar: _clientAddress
@property (readonly, nonatomic) BOOL hasServerBlob;
@property (nonatomic) BOOL hasTxnId;
@property (retain, nonatomic) NSData *reallocateToken; // ivar: _reallocateToken
@property (retain, nonatomic) NSString *serverAddress; // ivar: _serverAddress
@property (retain, nonatomic) NSData *serverBlob; // ivar: _serverBlob
@property (retain, nonatomic) NSData *sessionId; // ivar: _sessionId
@property (nonatomic) NSUInteger txnId; // ivar: _txnId


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