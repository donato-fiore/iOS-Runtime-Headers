// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOPDMERCHANTBRANDLOOKUPRESPONSE_H
#define GEOPDMERCHANTBRANDLOOKUPRESPONSE_H

@class PBCodable, PBDataReader, PBUnknownFields, NSMutableArray, NSString;
@protocol NSCopying;



@interface GEOPDMerchantBrandLookupResponse : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    ? _abstractOfBrandMuids;
    ? _childBrandMuids;
    ? _variantBrandMuids;
    NSMutableArray *_geoHashs;
    NSUInteger _muid;
    NSUInteger _relatedGlobalBrandMuid;
    NSString *_scope;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    BOOL _isPrimaryVariant;
    ? _flags;
}


@property (readonly, nonatomic) *NSUInteger abstractOfBrandMuids;
@property (readonly, nonatomic) NSUInteger abstractOfBrandMuidsCount;
@property (readonly, nonatomic) *NSUInteger childBrandMuids;
@property (readonly, nonatomic) NSUInteger childBrandMuidsCount;
@property (retain, nonatomic) NSMutableArray *geoHashs;
@property (nonatomic) BOOL hasIsPrimaryVariant;
@property (nonatomic) BOOL hasMuid;
@property (nonatomic) BOOL hasRelatedGlobalBrandMuid;
@property (readonly, nonatomic) BOOL hasScope;
@property (nonatomic) BOOL isPrimaryVariant;
@property (nonatomic) NSUInteger muid;
@property (nonatomic) NSUInteger relatedGlobalBrandMuid;
@property (retain, nonatomic) NSString *scope;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (readonly, nonatomic) *NSUInteger variantBrandMuids;
@property (readonly, nonatomic) NSUInteger variantBrandMuidsCount;


+(BOOL)isValid:(id)arg0 ;
+(Class)geoHashType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)abstractOfBrandMuidAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)childBrandMuidAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)variantBrandMuidAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)geoHashAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)addAbstractOfBrandMuid:(NSUInteger)arg0 ;
-(void)addChildBrandMuid:(NSUInteger)arg0 ;
-(void)addGeoHash:(id)arg0 ;
-(void)addVariantBrandMuid:(NSUInteger)arg0 ;
-(void)clearAbstractOfBrandMuids;
-(void)clearChildBrandMuids;
-(void)clearGeoHashs;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)clearVariantBrandMuids;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif