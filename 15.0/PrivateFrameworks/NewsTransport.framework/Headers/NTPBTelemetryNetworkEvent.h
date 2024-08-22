// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTPBTELEMETRYNETWORKEVENT_H
#define NTPBTELEMETRYNETWORKEVENT_H

@class PBCodable;
@protocol NSCopying;



@interface NTPBTelemetryNetworkEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int cacheState; // ivar: _cacheState
@property (nonatomic) NSInteger connectDuration; // ivar: _connectDuration
@property (nonatomic) NSInteger dnsDuration; // ivar: _dnsDuration
@property (nonatomic) NSInteger errorCode; // ivar: _errorCode
@property (nonatomic) BOOL hasCacheState;
@property (nonatomic) BOOL hasConnectDuration;
@property (nonatomic) BOOL hasDnsDuration;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) BOOL hasHttpStatusCode;
@property (nonatomic) BOOL hasRequestDuration;
@property (nonatomic) BOOL hasResponseDuration;
@property (nonatomic) BOOL hasResponseSize;
@property (nonatomic) BOOL hasStartTime;
@property (nonatomic) NSInteger httpStatusCode; // ivar: _httpStatusCode
@property (nonatomic) NSInteger requestDuration; // ivar: _requestDuration
@property (nonatomic) NSInteger responseDuration; // ivar: _responseDuration
@property (nonatomic) NSInteger responseSize; // ivar: _responseSize
@property (nonatomic) NSInteger startTime; // ivar: _startTime


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif