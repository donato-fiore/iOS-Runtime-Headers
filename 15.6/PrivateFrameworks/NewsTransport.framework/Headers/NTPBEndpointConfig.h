// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBENDPOINTCONFIG_H
#define NTPBENDPOINTCONFIG_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NTPBEndpointConfig : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *analyticsEndpointUrlsJson; // ivar: _analyticsEndpointUrlsJson
@property (retain, nonatomic) NSString *analyticsEnvelopeContentTypePropJson; // ivar: _analyticsEnvelopeContentTypePropJson
@property (retain, nonatomic) NSString *clientApiBaseUrl; // ivar: _clientApiBaseUrl
@property (nonatomic) int environment; // ivar: _environment
@property (retain, nonatomic) NSString *eventRelayBaseUrl; // ivar: _eventRelayBaseUrl
@property (retain, nonatomic) NSString *eventRelayBatchBaseUrl; // ivar: _eventRelayBatchBaseUrl
@property (readonly, nonatomic) BOOL hasAnalyticsEndpointUrlsJson;
@property (readonly, nonatomic) BOOL hasAnalyticsEnvelopeContentTypePropJson;
@property (readonly, nonatomic) BOOL hasClientApiBaseUrl;
@property (readonly, nonatomic) BOOL hasEventRelayBaseUrl;
@property (readonly, nonatomic) BOOL hasEventRelayBatchBaseUrl;
@property (readonly, nonatomic) BOOL hasNewsNotificationsBaseUrl;
@property (readonly, nonatomic) BOOL hasRemoteDataSourceBaseUrl;
@property (readonly, nonatomic) BOOL hasStaticAssetBaseUrl;
@property (retain, nonatomic) NSString *newsNotificationsBaseUrl; // ivar: _newsNotificationsBaseUrl
@property (retain, nonatomic) NSString *remoteDataSourceBaseUrl; // ivar: _remoteDataSourceBaseUrl
@property (retain, nonatomic) NSString *staticAssetBaseUrl; // ivar: _staticAssetBaseUrl


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