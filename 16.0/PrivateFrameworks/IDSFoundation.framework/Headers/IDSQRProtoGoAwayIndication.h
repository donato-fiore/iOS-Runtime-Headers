// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSQRPROTOGOAWAYINDICATION_H
#define IDSQRPROTOGOAWAYINDICATION_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface IDSQRProtoGoAwayIndication : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasReasonString;
@property (readonly, nonatomic) BOOL hasServerBlob;
@property (nonatomic) BOOL hasTxnId;
@property (nonatomic) unsigned int reasonCode; // ivar: _reasonCode
@property (retain, nonatomic) NSString *reasonString; // ivar: _reasonString
@property (retain, nonatomic) NSData *serverBlob; // ivar: _serverBlob
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