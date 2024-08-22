// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSQRPROTODIAGNOSTICINDICATION_H
#define IDSQRPROTODIAGNOSTICINDICATION_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface IDSQRProtoDiagnosticIndication : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *failureSubtype; // ivar: _failureSubtype
@property (retain, nonatomic) NSString *failureSubtypeContext; // ivar: _failureSubtypeContext
@property (nonatomic) BOOL hasPacketsRecordDuration;
@property (nonatomic) BOOL hasTxnId;
@property (nonatomic) unsigned int packetsRecordDuration; // ivar: _packetsRecordDuration
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