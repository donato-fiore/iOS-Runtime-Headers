// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEORPTDMINFO_H
#define GEORPTDMINFO_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString, NSMutableArray, NSData;
@protocol NSCopying;



@interface GEORPTdmInfo : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_anonymousUserId;
    NSMutableArray *_baaCertificates;
    NSData *_baaSignature;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    BOOL _isBlocked;
    ? _flags;
}


@property (retain, nonatomic) NSString *anonymousUserId;
@property (retain, nonatomic) NSMutableArray *baaCertificates;
@property (retain, nonatomic) NSData *baaSignature;
@property (readonly, nonatomic) BOOL hasAnonymousUserId;
@property (readonly, nonatomic) BOOL hasBaaSignature;
@property (nonatomic) BOOL hasIsBlocked;
@property (nonatomic) BOOL isBlocked;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)baaCertificatesAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)addBaaCertificates:(id)arg0 ;
-(void)clearBaaCertificates;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif