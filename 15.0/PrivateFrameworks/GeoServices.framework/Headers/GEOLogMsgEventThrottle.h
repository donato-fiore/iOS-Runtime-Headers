// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOLOGMSGEVENTTHROTTLE_H
#define GEOLOGMSGEVENTTHROTTLE_H

@class PBCodable, PBDataReader, NSString;
@protocol NSCopying;



@interface GEOLogMsgEventThrottle : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSString *_manifestEnv;
    NSString *_requestAppIdentifier;
    CGFloat _throttleDuration;
    NSString *_throttleReqType;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _networkService;
    unsigned int _throttleCount;
    int _throttleMode;
    unsigned int _throttleTriggerCount;
    unsigned int _throttleTriggerDuration;
    int _throttleType;
    unsigned int _tilesetId;
    ? _flags;
}


@property (readonly, nonatomic) BOOL hasManifestEnv;
@property (nonatomic) BOOL hasNetworkService;
@property (readonly, nonatomic) BOOL hasRequestAppIdentifier;
@property (nonatomic) BOOL hasThrottleCount;
@property (nonatomic) BOOL hasThrottleDuration;
@property (nonatomic) BOOL hasThrottleMode;
@property (readonly, nonatomic) BOOL hasThrottleReqType;
@property (nonatomic) BOOL hasThrottleTriggerCount;
@property (nonatomic) BOOL hasThrottleTriggerDuration;
@property (nonatomic) BOOL hasThrottleType;
@property (nonatomic) BOOL hasTilesetId;
@property (retain, nonatomic) NSString *manifestEnv;
@property (nonatomic) int networkService;
@property (retain, nonatomic) NSString *requestAppIdentifier;
@property (nonatomic) unsigned int throttleCount;
@property (nonatomic) CGFloat throttleDuration;
@property (nonatomic) int throttleMode;
@property (retain, nonatomic) NSString *throttleReqType;
@property (nonatomic) unsigned int throttleTriggerCount;
@property (nonatomic) unsigned int throttleTriggerDuration;
@property (nonatomic) int throttleType;
@property (nonatomic) unsigned int tilesetId;


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
-(id)networkServiceAsString:(int)arg0 ;
-(id)throttleModeAsString:(int)arg0 ;
-(id)throttleTypeAsString:(int)arg0 ;
-(int)StringAsNetworkService:(id)arg0 ;
-(int)StringAsThrottleMode:(id)arg0 ;
-(int)StringAsThrottleType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif