// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBEXTERNALANALYTICSCONFIG_H
#define NTPBEXTERNALANALYTICSCONFIG_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface NTPBExternalAnalyticsConfig : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *analyticsBaseUrl; // ivar: _analyticsBaseUrl
@property (retain, nonatomic) NSString *analyticsId; // ivar: _analyticsId
@property (retain, nonatomic) NSString *eventQueryParameterName; // ivar: _eventQueryParameterName
@property (readonly, nonatomic) BOOL hasAnalyticsBaseUrl;
@property (readonly, nonatomic) BOOL hasAnalyticsId;
@property (readonly, nonatomic) BOOL hasEventQueryParameterName;
@property (nonatomic) BOOL hasUsesProxyProfile;
@property (retain, nonatomic) NSMutableArray *proxyHostNames; // ivar: _proxyHostNames
@property (retain, nonatomic) NSMutableArray *queryParameterConfigs; // ivar: _queryParameterConfigs
@property (nonatomic) BOOL usesProxyProfile; // ivar: _usesProxyProfile
@property (retain, nonatomic) NSMutableArray *vpnProfileNames; // ivar: _vpnProfileNames


+(Class)queryParameterConfigType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)proxyHostNamesAtIndex:(NSUInteger)arg0 ;
-(id)queryParameterConfigAtIndex:(NSUInteger)arg0 ;
-(id)vpnProfileNamesAtIndex:(NSUInteger)arg0 ;
-(void)addProxyHostNames:(id)arg0 ;
-(void)addQueryParameterConfig:(id)arg0 ;
-(void)addVpnProfileNames:(id)arg0 ;
-(void)clearProxyHostNames;
-(void)clearQueryParameterConfigs;
-(void)clearVpnProfileNames;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif