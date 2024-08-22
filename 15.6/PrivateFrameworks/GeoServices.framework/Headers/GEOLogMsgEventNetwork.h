// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOLOGMSGEVENTNETWORK_H
#define GEOLOGMSGEVENTNETWORK_H

@class PBCodable, PBDataReader, NSString;
@protocol NSCopying;


#import "GEONetworkSessionTaskTransactionMetrics.h"

@interface GEOLogMsgEventNetwork : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSString *_manifestEnv;
    NSString *_requestAppIdMajorVer;
    NSString *_requestAppIdMinorVer;
    NSString *_requestAppIdentifier;
    CGFloat _requestEnd;
    NSInteger _requestErrorCode;
    NSString *_requestErrorDescription;
    NSString *_requestErrorDomain;
    CGFloat _requestStart;
    NSString *_serviceIpAddress;
    GEONetworkSessionTaskTransactionMetrics *_taskMetrics;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _decodeTime;
    int _httpResponseCode;
    int _mptcpServiceType;
    int _networkService;
    int _queuedTime;
    int _redirectCount;
    int _requestDataSize;
    int _responseDataSize;
    unsigned int _samplingRate;
    unsigned int _tilesetId;
    int _totalTime;
    BOOL _mptcpNegotiated;
    BOOL _rnfTriggered;
    BOOL _wasBackground;
    ? _flags;
}


@property (nonatomic) int decodeTime;
@property (nonatomic) BOOL hasDecodeTime;
@property (nonatomic) BOOL hasHttpResponseCode;
@property (readonly, nonatomic) BOOL hasManifestEnv;
@property (nonatomic) BOOL hasMptcpNegotiated;
@property (nonatomic) BOOL hasMptcpServiceType;
@property (nonatomic) BOOL hasNetworkService;
@property (nonatomic) BOOL hasQueuedTime;
@property (nonatomic) BOOL hasRedirectCount;
@property (readonly, nonatomic) BOOL hasRequestAppIdMajorVer;
@property (readonly, nonatomic) BOOL hasRequestAppIdMinorVer;
@property (readonly, nonatomic) BOOL hasRequestAppIdentifier;
@property (nonatomic) BOOL hasRequestDataSize;
@property (nonatomic) BOOL hasRequestEnd;
@property (nonatomic) BOOL hasRequestErrorCode;
@property (readonly, nonatomic) BOOL hasRequestErrorDescription;
@property (readonly, nonatomic) BOOL hasRequestErrorDomain;
@property (nonatomic) BOOL hasRequestStart;
@property (nonatomic) BOOL hasResponseDataSize;
@property (nonatomic) BOOL hasRnfTriggered;
@property (nonatomic) BOOL hasSamplingRate;
@property (readonly, nonatomic) BOOL hasServiceIpAddress;
@property (readonly, nonatomic) BOOL hasTaskMetrics;
@property (nonatomic) BOOL hasTilesetId;
@property (nonatomic) BOOL hasTotalTime;
@property (nonatomic) BOOL hasWasBackground;
@property (nonatomic) int httpResponseCode;
@property (retain, nonatomic) NSString *manifestEnv;
@property (nonatomic) BOOL mptcpNegotiated;
@property (nonatomic) int mptcpServiceType;
@property (nonatomic) int networkService;
@property (nonatomic) int queuedTime;
@property (nonatomic) int redirectCount;
@property (retain, nonatomic) NSString *requestAppIdMajorVer;
@property (retain, nonatomic) NSString *requestAppIdMinorVer;
@property (retain, nonatomic) NSString *requestAppIdentifier;
@property (nonatomic) int requestDataSize;
@property (nonatomic) CGFloat requestEnd;
@property (nonatomic) NSInteger requestErrorCode;
@property (retain, nonatomic) NSString *requestErrorDescription;
@property (retain, nonatomic) NSString *requestErrorDomain;
@property (nonatomic) CGFloat requestStart;
@property (nonatomic) int responseDataSize;
@property (nonatomic) BOOL rnfTriggered;
@property (nonatomic) unsigned int samplingRate;
@property (retain, nonatomic) NSString *serviceIpAddress;
@property (retain, nonatomic) GEONetworkSessionTaskTransactionMetrics *taskMetrics;
@property (nonatomic) unsigned int tilesetId;
@property (nonatomic) int totalTime;
@property (nonatomic) BOOL wasBackground;


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
-(id)mptcpServiceTypeAsString:(int)arg0 ;
-(id)networkServiceAsString:(int)arg0 ;
-(int)StringAsMptcpServiceType:(id)arg0 ;
-(int)StringAsNetworkService:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif