// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTPBTELEMETRY_H
#define NTPBTELEMETRY_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface NTPBTelemetry : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger appBuild; // ivar: _appBuild
@property (retain, nonatomic) NSString *appBuildNumber; // ivar: _appBuildNumber
@property (retain, nonatomic) NSString *appVersion; // ivar: _appVersion
@property (retain, nonatomic) NSString *carrier; // ivar: _carrier
@property (nonatomic) int contentEnvironment; // ivar: _contentEnvironment
@property (retain, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (retain, nonatomic) NSString *deviceModel; // ivar: _deviceModel
@property (retain, nonatomic) NSString *devicePlatform; // ivar: _devicePlatform
@property (nonatomic) BOOL hasAppBuild;
@property (readonly, nonatomic) BOOL hasAppBuildNumber;
@property (readonly, nonatomic) BOOL hasAppVersion;
@property (readonly, nonatomic) BOOL hasCarrier;
@property (nonatomic) BOOL hasContentEnvironment;
@property (readonly, nonatomic) BOOL hasCountryCode;
@property (readonly, nonatomic) BOOL hasDeviceModel;
@property (readonly, nonatomic) BOOL hasDevicePlatform;
@property (readonly, nonatomic) BOOL hasLanguageCode;
@property (readonly, nonatomic) BOOL hasMobileCountryCode;
@property (readonly, nonatomic) BOOL hasMobileNetworkCode;
@property (readonly, nonatomic) BOOL hasOsCountryCode;
@property (nonatomic) BOOL hasOsInstallVariant;
@property (readonly, nonatomic) BOOL hasOsVersion;
@property (readonly, nonatomic) BOOL hasUserId;
@property (readonly, nonatomic) BOOL hasUserStorefrontId;
@property (retain, nonatomic) NSString *languageCode; // ivar: _languageCode
@property (retain, nonatomic) NSString *mobileCountryCode; // ivar: _mobileCountryCode
@property (retain, nonatomic) NSString *mobileNetworkCode; // ivar: _mobileNetworkCode
@property (retain, nonatomic) NSMutableArray *networkEventGroups; // ivar: _networkEventGroups
@property (retain, nonatomic) NSString *osCountryCode; // ivar: _osCountryCode
@property (nonatomic) int osInstallVariant; // ivar: _osInstallVariant
@property (retain, nonatomic) NSString *osVersion; // ivar: _osVersion
@property (retain, nonatomic) NSString *userId; // ivar: _userId
@property (retain, nonatomic) NSString *userStorefrontId; // ivar: _userStorefrontId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)networkEventGroupsAtIndex:(NSUInteger)arg0 ;
-(id)osInstallVariantAsString:(int)arg0 ;
-(int)StringAsOsInstallVariant:(id)arg0 ;
-(void)addNetworkEventGroups:(id)arg0 ;
-(void)clearNetworkEventGroups;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif