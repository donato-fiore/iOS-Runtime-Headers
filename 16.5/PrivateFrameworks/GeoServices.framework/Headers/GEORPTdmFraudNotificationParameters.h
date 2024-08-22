// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEORPTDMFRAUDNOTIFICATIONPARAMETERS_H
#define GEORPTDMFRAUDNOTIFICATIONPARAMETERS_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString;
@protocol NSCopying;



@interface GEORPTdmFraudNotificationParameters : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_anonymousId;
    NSString *_fsrData;
    NSString *_tdmNamespace;
    NSString *_token;
    NSString *_transactionId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (retain, nonatomic) NSString *anonymousId;
@property (retain, nonatomic) NSString *fsrData;
@property (readonly, nonatomic) BOOL hasAnonymousId;
@property (readonly, nonatomic) BOOL hasFsrData;
@property (readonly, nonatomic) BOOL hasTdmNamespace;
@property (readonly, nonatomic) BOOL hasToken;
@property (readonly, nonatomic) BOOL hasTransactionId;
@property (retain, nonatomic) NSString *tdmNamespace;
@property (retain, nonatomic) NSString *token;
@property (retain, nonatomic) NSString *transactionId;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif