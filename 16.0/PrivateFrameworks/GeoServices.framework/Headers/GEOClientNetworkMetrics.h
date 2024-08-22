// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOCLIENTNETWORKMETRICS_H
#define GEOCLIENTNETWORKMETRICS_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString, NSMutableArray;
@protocol NSCopying;



@interface GEOClientNetworkMetrics : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CGFloat _requestEnd;
    CGFloat _requestStart;
    NSString *_serviceIpAddress;
    NSMutableArray *_transactionMetrics;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _httpResponseCode;
    int _redirectCount;
    int _requestDataSize;
    int _responseDataSize;
    BOOL _rnfTriggered;
    ? _flags;
}


@property (nonatomic) BOOL hasHttpResponseCode;
@property (nonatomic) BOOL hasRedirectCount;
@property (nonatomic) BOOL hasRequestDataSize;
@property (nonatomic) BOOL hasRequestEnd;
@property (nonatomic) BOOL hasRequestStart;
@property (nonatomic) BOOL hasResponseDataSize;
@property (nonatomic) BOOL hasRnfTriggered;
@property (readonly, nonatomic) BOOL hasServiceIpAddress;
@property (nonatomic) int httpResponseCode;
@property (nonatomic) int redirectCount;
@property (nonatomic) int requestDataSize;
@property (nonatomic) CGFloat requestEnd;
@property (nonatomic) CGFloat requestStart;
@property (nonatomic) int responseDataSize;
@property (nonatomic) BOOL rnfTriggered;
@property (retain, nonatomic) NSString *serviceIpAddress;
@property (retain, nonatomic) NSMutableArray *transactionMetrics;
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
-(id)transactionMetricsAtIndex:(NSUInteger)arg0 ;
-(void)addTransactionMetrics:(id)arg0 ;
-(void)clearTransactionMetrics;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif