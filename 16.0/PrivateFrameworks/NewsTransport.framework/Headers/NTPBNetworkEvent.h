// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTPBNETWORKEVENT_H
#define NTPBNETWORKEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NTPBNetworkEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int cacheState; // ivar: _cacheState
@property (nonatomic) NSUInteger connectDuration; // ivar: _connectDuration
@property (nonatomic) NSUInteger dnsDuration; // ivar: _dnsDuration
@property (nonatomic) NSInteger errorCode; // ivar: _errorCode
@property (nonatomic) BOOL hasCacheState;
@property (nonatomic) BOOL hasConnectDuration;
@property (nonatomic) BOOL hasDnsDuration;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) BOOL hasHttpStatusCode;
@property (nonatomic) BOOL hasRequestDuration;
@property (readonly, nonatomic) BOOL hasRequestUUID;
@property (readonly, nonatomic) BOOL hasRespondingPOP;
@property (nonatomic) BOOL hasResponseDuration;
@property (nonatomic) BOOL hasResponseSize;
@property (nonatomic) BOOL hasSessionID;
@property (nonatomic) BOOL hasStartTime;
@property (nonatomic) BOOL hasType;
@property (readonly, nonatomic) BOOL hasUrl;
@property (nonatomic) NSUInteger httpStatusCode; // ivar: _httpStatusCode
@property (nonatomic) NSUInteger requestDuration; // ivar: _requestDuration
@property (retain, nonatomic) NSString *requestUUID; // ivar: _requestUUID
@property (retain, nonatomic) NSString *respondingPOP; // ivar: _respondingPOP
@property (nonatomic) NSUInteger responseDuration; // ivar: _responseDuration
@property (nonatomic) NSUInteger responseSize; // ivar: _responseSize
@property (nonatomic) NSUInteger sessionID; // ivar: _sessionID
@property (nonatomic) NSUInteger startTime; // ivar: _startTime
@property (nonatomic) int type; // ivar: _type
@property (retain, nonatomic) NSString *url; // ivar: _url


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif