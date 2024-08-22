// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOLOGMSGEVENTLOGDISCARD_H
#define GEOLOGMSGEVENTLOGDISCARD_H

@class PBCodable, PBDataReader, NSMutableArray, NSData;
@protocol NSCopying;



@interface GEOLogMsgEventLogDiscard : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSMutableArray *_certificates;
    NSData *_signature;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _trigger;
    ? _flags;
}


@property (retain, nonatomic) NSMutableArray *certificates;
@property (readonly, nonatomic) BOOL hasSignature;
@property (nonatomic) BOOL hasTrigger;
@property (retain, nonatomic) NSData *signature;
@property (nonatomic) int trigger;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)certificatesAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)triggerAsString:(int)arg0 ;
-(int)StringAsTrigger:(id)arg0 ;
-(void)addCertificates:(id)arg0 ;
-(void)clearCertificates;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif