// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOADDRESSCORRECTIONINITREQUEST_H
#define GEOADDRESSCORRECTIONINITREQUEST_H

@class PBRequest, PBDataReader, NSString;
@protocol NSCopying;



@interface GEOAddressCorrectionInitRequest : PBRequest <NSCopying>

 {
    PBDataReader *_reader;
    NSString *_personID;
    NSString *_token;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    BOOL _supportsCollectionByRegion;
    BOOL _supportsMultipleAddresses;
    ? _flags;
}


@property (readonly, nonatomic) BOOL hasPersonID;
@property (nonatomic) BOOL hasSupportsCollectionByRegion;
@property (nonatomic) BOOL hasSupportsMultipleAddresses;
@property (readonly, nonatomic) BOOL hasToken;
@property (retain, nonatomic) NSString *personID;
@property (nonatomic) BOOL supportsCollectionByRegion;
@property (nonatomic) BOOL supportsMultipleAddresses;
@property (retain, nonatomic) NSString *token;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(Class)responseClass;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(unsigned int)requestTypeCode;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif