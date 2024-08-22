// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASEXPRESSSETTINGS_H
#define SASEXPRESSSETTINGS_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;


#import "SASExpressSettingsPrivacyBundle.h"

@interface SASExpressSettings : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL appAnalyticsOptIn; // ivar: _appAnalyticsOptIn
@property (retain, nonatomic) SASExpressSettingsPrivacyBundle *appAnalyticsPrivacyBundle; // ivar: _appAnalyticsPrivacyBundle
@property (nonatomic) int appearanceMode; // ivar: _appearanceMode
@property (nonatomic) BOOL deviceAnalyticsOptIn; // ivar: _deviceAnalyticsOptIn
@property (retain, nonatomic) SASExpressSettingsPrivacyBundle *deviceAnalyticsPrivacyBundle; // ivar: _deviceAnalyticsPrivacyBundle
@property (retain, nonatomic) NSString *deviceClass; // ivar: _deviceClass
@property (nonatomic) int displayZoomOption; // ivar: _displayZoomOption
@property (nonatomic) BOOL fileVaultEnabled; // ivar: _fileVaultEnabled
@property (nonatomic) BOOL findMyOptIn; // ivar: _findMyOptIn
@property (retain, nonatomic) SASExpressSettingsPrivacyBundle *findMyPrivacyBundle; // ivar: _findMyPrivacyBundle
@property (nonatomic) BOOL hasAppAnalyticsOptIn;
@property (readonly, nonatomic) BOOL hasAppAnalyticsPrivacyBundle;
@property (nonatomic) BOOL hasAppearanceMode;
@property (nonatomic) BOOL hasDeviceAnalyticsOptIn;
@property (readonly, nonatomic) BOOL hasDeviceAnalyticsPrivacyBundle;
@property (nonatomic) BOOL hasDisplayZoomOption;
@property (nonatomic) BOOL hasFileVaultEnabled;
@property (nonatomic) BOOL hasFindMyOptIn;
@property (readonly, nonatomic) BOOL hasFindMyPrivacyBundle;
@property (nonatomic) BOOL hasLocationServicesOptIn;
@property (readonly, nonatomic) BOOL hasLocationServicesPrivacyBundle;
@property (nonatomic) BOOL hasScreenTimeEnabled;
@property (nonatomic) BOOL hasSiriDataSharingOptIn;
@property (nonatomic) BOOL hasSiriOptIn;
@property (readonly, nonatomic) BOOL hasSiriPrivacyBundle;
@property (nonatomic) BOOL hasSoftwareUpdateAutoDownloadEnabled;
@property (nonatomic) BOOL hasSoftwareUpdateAutoUpdateEnabled;
@property (nonatomic) BOOL hasUnlockWithWatchEnabled;
@property (readonly, nonatomic) BOOL hasWalletData;
@property (readonly, nonatomic) BOOL hasWatchMigrationData;
@property (nonatomic) BOOL locationServicesOptIn; // ivar: _locationServicesOptIn
@property (retain, nonatomic) SASExpressSettingsPrivacyBundle *locationServicesPrivacyBundle; // ivar: _locationServicesPrivacyBundle
@property (retain, nonatomic) NSString *productType; // ivar: _productType
@property (nonatomic) BOOL screenTimeEnabled; // ivar: _screenTimeEnabled
@property (nonatomic) BOOL siriDataSharingOptIn; // ivar: _siriDataSharingOptIn
@property (nonatomic) BOOL siriOptIn; // ivar: _siriOptIn
@property (retain, nonatomic) SASExpressSettingsPrivacyBundle *siriPrivacyBundle; // ivar: _siriPrivacyBundle
@property (nonatomic) BOOL softwareUpdateAutoDownloadEnabled; // ivar: _softwareUpdateAutoDownloadEnabled
@property (nonatomic) BOOL softwareUpdateAutoUpdateEnabled; // ivar: _softwareUpdateAutoUpdateEnabled
@property (nonatomic) BOOL unlockWithWatchEnabled; // ivar: _unlockWithWatchEnabled
@property (nonatomic) unsigned int version; // ivar: _version
@property (retain, nonatomic) NSData *walletData; // ivar: _walletData
@property (retain, nonatomic) NSData *watchMigrationData; // ivar: _watchMigrationData


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)appearanceModeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)displayZoomOptionAsString:(int)arg0 ;
-(int)StringAsAppearanceMode:(id)arg0 ;
-(int)StringAsDisplayZoomOption:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif