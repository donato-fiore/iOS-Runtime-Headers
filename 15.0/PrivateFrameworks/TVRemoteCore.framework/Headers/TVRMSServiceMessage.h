// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TVRMSSERVICEMESSAGE_H
#define TVRMSSERVICEMESSAGE_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface TVRMSServiceMessage : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) BOOL hasDisplayName;
@property (readonly, nonatomic) BOOL hasHomeSharingGroupKey;
@property (readonly, nonatomic) BOOL hasHostName;
@property (readonly, nonatomic) BOOL hasNetworkName;
@property (nonatomic) BOOL hasPort;
@property (nonatomic) BOOL hasServiceDiscoverySource;
@property (nonatomic) BOOL hasServiceLegacyFlags;
@property (nonatomic) BOOL hasServiceType;
@property (retain, nonatomic) NSString *homeSharingGroupKey; // ivar: _homeSharingGroupKey
@property (retain, nonatomic) NSString *hostName; // ivar: _hostName
@property (retain, nonatomic) NSString *networkName; // ivar: _networkName
@property (nonatomic) int port; // ivar: _port
@property (nonatomic) int serviceDiscoverySource; // ivar: _serviceDiscoverySource
@property (nonatomic) int serviceLegacyFlags; // ivar: _serviceLegacyFlags
@property (nonatomic) int serviceType; // ivar: _serviceType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif