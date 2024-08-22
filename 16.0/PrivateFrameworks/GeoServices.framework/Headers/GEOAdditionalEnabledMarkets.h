// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOADDITIONALENABLEDMARKETS_H
#define GEOADDITIONALENABLEDMARKETS_H

@class PBCodable, PBDataReader, PBUnknownFields, NSMutableArray, NSArray, NSDictionary;
@protocol NSCopying;



@interface GEOAdditionalEnabledMarkets : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_offlineMarkets;
    NSMutableArray *_transitMarkets;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (retain, nonatomic) NSMutableArray *offlineMarkets;
@property (readonly, nonatomic) NSArray *queryItems;
@property (readonly, nonatomic) NSDictionary *queryParameters;
@property (retain, nonatomic) NSMutableArray *transitMarkets;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
+(Class)offlineMarketType;
+(Class)transitMarketType;
+(id)_additionalEnabledTransitMarkets;
+(id)additionalEnabledMarkets;
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
-(id)offlineMarketAtIndex:(NSUInteger)arg0 ;
-(id)transitMarketAtIndex:(NSUInteger)arg0 ;
-(void)addOfflineMarket:(id)arg0 ;
-(void)addTransitMarket:(id)arg0 ;
-(void)clearOfflineMarkets;
-(void)clearTransitMarkets;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)reload;
-(void)writeTo:(id)arg0 ;


@end


#endif