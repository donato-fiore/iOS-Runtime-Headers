// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTPBDEVICEINFO_H
#define NTPBDEVICEINFO_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface NTPBDeviceInfo : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *deviceAppBundleId; // ivar: _deviceAppBundleId
@property (retain, nonatomic) NSString *deviceAppVersion; // ivar: _deviceAppVersion
@property (nonatomic) int deviceDigestMode; // ivar: _deviceDigestMode
@property (nonatomic) NSInteger deviceDstOffset; // ivar: _deviceDstOffset
@property (retain, nonatomic) NSString *deviceOsVersion; // ivar: _deviceOsVersion
@property (retain, nonatomic) NSMutableArray *devicePreferredLanguages; // ivar: _devicePreferredLanguages
@property (retain, nonatomic) NSString *devicePushToken; // ivar: _devicePushToken
@property (retain, nonatomic) NSString *deviceTimezone; // ivar: _deviceTimezone
@property (nonatomic) int deviceTokenEnv; // ivar: _deviceTokenEnv
@property (retain, nonatomic) NSString *deviceType; // ivar: _deviceType
@property (nonatomic) NSInteger deviceUtcOffset; // ivar: _deviceUtcOffset
@property (readonly, nonatomic) BOOL hasDeviceAppBundleId;
@property (readonly, nonatomic) BOOL hasDeviceAppVersion;
@property (nonatomic) BOOL hasDeviceDigestMode;
@property (nonatomic) BOOL hasDeviceDstOffset;
@property (readonly, nonatomic) BOOL hasDeviceOsVersion;
@property (readonly, nonatomic) BOOL hasDevicePushToken;
@property (readonly, nonatomic) BOOL hasDeviceTimezone;
@property (nonatomic) BOOL hasDeviceTokenEnv;
@property (readonly, nonatomic) BOOL hasDeviceType;
@property (nonatomic) BOOL hasDeviceUtcOffset;


+(Class)devicePreferredLanguageType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)devicePreferredLanguageAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(void)addDevicePreferredLanguage:(id)arg0 ;
-(void)clearDevicePreferredLanguages;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif