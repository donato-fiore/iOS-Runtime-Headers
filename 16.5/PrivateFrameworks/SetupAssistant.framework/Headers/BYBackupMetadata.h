// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BYBACKUPMETADATA_H
#define BYBACKUPMETADATA_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;



@interface BYBackupMetadata : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int appAnalyticsOptIn; // ivar: _appAnalyticsOptIn
@property (nonatomic) BOOL autoDownloadEnabled; // ivar: _autoDownloadEnabled
@property (nonatomic) BOOL autoUpdateEnabled; // ivar: _autoUpdateEnabled
@property (nonatomic) unsigned int deviceAnalyticsOptIn; // ivar: _deviceAnalyticsOptIn
@property (nonatomic) BOOL didSeeTrueTonePane; // ivar: _didSeeTrueTonePane
@property (nonatomic) BOOL findMyiPhoneOptIn; // ivar: _findMyiPhoneOptIn
@property (nonatomic) BOOL hasAppAnalyticsOptIn;
@property (nonatomic) BOOL hasAutoDownloadEnabled;
@property (nonatomic) BOOL hasAutoUpdateEnabled;
@property (nonatomic) BOOL hasDeviceAnalyticsOptIn;
@property (nonatomic) BOOL hasDidSeeTrueTonePane;
@property (nonatomic) BOOL hasFindMyiPhoneOptIn;
@property (nonatomic) BOOL hasHomeButtonHapticKind;
@property (nonatomic) BOOL hasLocationServicesOptIn;
@property (nonatomic) BOOL hasMessagesContactsPresented;
@property (readonly, nonatomic) BOOL hasNanoRegistryData;
@property (nonatomic) BOOL hasScreenTimeEnabled;
@property (readonly, nonatomic) BOOL hasSeedEnrollmentAssetAudience;
@property (readonly, nonatomic) BOOL hasSeedEnrollmentCatalogID;
@property (readonly, nonatomic) BOOL hasSeedEnrollmentProgram;
@property (nonatomic) BOOL hasSettingsContactsPresented;
@property (nonatomic) BOOL hasSettingsDataUsagePresented;
@property (nonatomic) BOOL hasSiriDataSharingOptIn;
@property (nonatomic) BOOL hasSiriOptIn;
@property (readonly, nonatomic) BOOL hasUniversalData;
@property (nonatomic) BOOL hasUserInterfaceStyleMode;
@property (readonly, nonatomic) BOOL hasWalletData;
@property (nonatomic) unsigned int homeButtonHapticKind; // ivar: _homeButtonHapticKind
@property (nonatomic) BOOL locationServicesOptIn; // ivar: _locationServicesOptIn
@property (nonatomic) BOOL messagesContactsPresented; // ivar: _messagesContactsPresented
@property (retain, nonatomic) NSData *nanoRegistryData; // ivar: _nanoRegistryData
@property (nonatomic) BOOL screenTimeEnabled; // ivar: _screenTimeEnabled
@property (retain, nonatomic) NSString *seedEnrollmentAssetAudience; // ivar: _seedEnrollmentAssetAudience
@property (retain, nonatomic) NSString *seedEnrollmentCatalogID; // ivar: _seedEnrollmentCatalogID
@property (retain, nonatomic) NSString *seedEnrollmentProgram; // ivar: _seedEnrollmentProgram
@property (nonatomic) BOOL settingsContactsPresented; // ivar: _settingsContactsPresented
@property (nonatomic) BOOL settingsDataUsagePresented; // ivar: _settingsDataUsagePresented
@property (nonatomic) BOOL siriDataSharingOptIn; // ivar: _siriDataSharingOptIn
@property (nonatomic) BOOL siriOptIn; // ivar: _siriOptIn
@property (retain, nonatomic) NSData *universalData; // ivar: _universalData
@property (nonatomic) NSInteger userInterfaceStyleMode; // ivar: _userInterfaceStyleMode
@property (nonatomic) unsigned int version; // ivar: _version
@property (retain, nonatomic) NSData *walletData; // ivar: _walletData


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)expressSettings;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif