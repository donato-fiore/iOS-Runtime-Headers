// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEONETWORKSESSIONTASKTRANSACTIONMETRICS_H
#define GEONETWORKSESSIONTASKTRANSACTIONMETRICS_H

@class PBCodable;
@protocol NSCopying;



@interface GEONetworkSessionTaskTransactionMetrics : PBCodable <NSCopying>

 {
    CGFloat _connectEnd;
    CGFloat _connectStart;
    CGFloat _domainLookupEnd;
    CGFloat _domainLookupStart;
    CGFloat _fetchStart;
    CGFloat _requestEnd;
    CGFloat _requestStart;
    CGFloat _responseEnd;
    CGFloat _responseStart;
    CGFloat _secureConnectEnd;
    CGFloat _secureConnectStart;
    int _protocolName;
    int _resourceFetchType;
    BOOL _proxyConnection;
    BOOL _reusedConnection;
    ? _flags;
}


@property (nonatomic) CGFloat connectEnd;
@property (nonatomic) CGFloat connectStart;
@property (nonatomic) CGFloat domainLookupEnd;
@property (nonatomic) CGFloat domainLookupStart;
@property (nonatomic) CGFloat fetchStart;
@property (nonatomic) BOOL hasConnectEnd;
@property (nonatomic) BOOL hasConnectStart;
@property (nonatomic) BOOL hasDomainLookupEnd;
@property (nonatomic) BOOL hasDomainLookupStart;
@property (nonatomic) BOOL hasFetchStart;
@property (nonatomic) BOOL hasProtocolName;
@property (nonatomic) BOOL hasProxyConnection;
@property (nonatomic) BOOL hasRequestEnd;
@property (nonatomic) BOOL hasRequestStart;
@property (nonatomic) BOOL hasResourceFetchType;
@property (nonatomic) BOOL hasResponseEnd;
@property (nonatomic) BOOL hasResponseStart;
@property (nonatomic) BOOL hasReusedConnection;
@property (nonatomic) BOOL hasSecureConnectEnd;
@property (nonatomic) BOOL hasSecureConnectStart;
@property (nonatomic) int protocolName;
@property (nonatomic) BOOL proxyConnection;
@property (nonatomic) CGFloat requestEnd;
@property (nonatomic) CGFloat requestStart;
@property (nonatomic) int resourceFetchType;
@property (nonatomic) CGFloat responseEnd;
@property (nonatomic) CGFloat responseStart;
@property (nonatomic) BOOL reusedConnection;
@property (nonatomic) CGFloat secureConnectEnd;
@property (nonatomic) CGFloat secureConnectStart;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithClientNetworkTransactionMetrics:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)protocolNameAsString:(int)arg0 ;
-(id)resourceFetchTypeAsString:(int)arg0 ;
-(int)StringAsProtocolName:(id)arg0 ;
-(int)StringAsResourceFetchType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif