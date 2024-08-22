// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DIMSCHEMADIMDEVICEFIXEDCONTEXT_H
#define DIMSCHEMADIMDEVICEFIXEDCONTEXT_H

@class NSString, NSData, NSArray;


#import "SISchemaInstrumentationMessage.h"
#import "DIMSchemaDIMDataSharingSettings.h"
#import "DIMSchemaEntitySyncSettings.h"
#import "SISchemaISOLocale.h"
#import "SISchemaVoiceSettings.h"
#import "DIMSchemaDIMWatchDeviceAttributes.h"

@interface DIMSchemaDIMDeviceFixedContext : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int countryCode; // ivar: _countryCode
@property (copy, nonatomic) NSString *dataCollectionId; // ivar: _dataCollectionId
@property (nonatomic) int dataSharingOptInState; // ivar: _dataSharingOptInState
@property (retain, nonatomic) DIMSchemaDIMDataSharingSettings *dataSharingSettings; // ivar: _dataSharingSettings
@property (copy, nonatomic) NSString *deviceType; // ivar: _deviceType
@property (copy, nonatomic) NSString *effectiveSystemLanguage; // ivar: _effectiveSystemLanguage
@property (retain, nonatomic) DIMSchemaEntitySyncSettings *entitySyncSettings; // ivar: _entitySyncSettings
@property (nonatomic) BOOL hasCountryCode;
@property (nonatomic) BOOL hasDataCollectionId; // ivar: _hasDataCollectionId
@property (nonatomic) BOOL hasDataSharingOptInState;
@property (nonatomic) BOOL hasDataSharingSettings; // ivar: _hasDataSharingSettings
@property (nonatomic) BOOL hasDeviceType; // ivar: _hasDeviceType
@property (nonatomic) BOOL hasEffectiveSystemLanguage; // ivar: _hasEffectiveSystemLanguage
@property (nonatomic) BOOL hasEntitySyncSettings; // ivar: _hasEntitySyncSettings
@property (nonatomic) BOOL hasHomeKitConfiguration;
@property (nonatomic) BOOL hasIsLowPowerModeEnabled;
@property (nonatomic) BOOL hasIsStoreDemoMode;
@property (nonatomic) BOOL hasProgramCode;
@property (nonatomic) BOOL hasSiriInputLocale;
@property (nonatomic) BOOL hasSiriInputLocaleV2; // ivar: _hasSiriInputLocaleV2
@property (nonatomic) BOOL hasSiriVoiceSettings; // ivar: _hasSiriVoiceSettings
@property (nonatomic) BOOL hasSystemBuild; // ivar: _hasSystemBuild
@property (nonatomic) BOOL hasSystemLocale;
@property (nonatomic) BOOL hasSystemLocaleV2; // ivar: _hasSystemLocaleV2
@property (nonatomic) BOOL hasTimeIntervalSince1970;
@property (nonatomic) BOOL hasTimezoneOffset; // ivar: _hasTimezoneOffset
@property (nonatomic) BOOL hasWatchDeviceAttributes; // ivar: _hasWatchDeviceAttributes
@property (nonatomic) int homeKitConfiguration; // ivar: _homeKitConfiguration
@property (nonatomic) BOOL isLowPowerModeEnabled; // ivar: _isLowPowerModeEnabled
@property (nonatomic) BOOL isStoreDemoMode; // ivar: _isStoreDemoMode
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *preferredLanguages; // ivar: _preferredLanguages
@property (nonatomic) int programCode; // ivar: _programCode
@property (nonatomic) int siriInputLocale; // ivar: _siriInputLocale
@property (retain, nonatomic) SISchemaISOLocale *siriInputLocaleV2; // ivar: _siriInputLocaleV2
@property (retain, nonatomic) SISchemaVoiceSettings *siriVoiceSettings; // ivar: _siriVoiceSettings
@property (copy, nonatomic) NSString *systemBuild; // ivar: _systemBuild
@property (nonatomic) int systemLocale; // ivar: _systemLocale
@property (retain, nonatomic) SISchemaISOLocale *systemLocaleV2; // ivar: _systemLocaleV2
@property (nonatomic) CGFloat timeIntervalSince1970; // ivar: _timeIntervalSince1970
@property (copy, nonatomic) NSString *timezoneOffset; // ivar: _timezoneOffset
@property (retain, nonatomic) DIMSchemaDIMWatchDeviceAttributes *watchDeviceAttributes; // ivar: _watchDeviceAttributes
@property (readonly, nonatomic) NSUInteger whichDeviceattributes; // ivar: _whichDeviceattributes


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)preferredLanguagesAtIndex:(NSUInteger)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addPreferredLanguages:(id)arg0 ;
-(void)clearPreferredLanguages;
-(void)deleteCountryCode;
-(void)deleteDataCollectionId;
-(void)deleteDataSharingOptInState;
-(void)deleteDataSharingSettings;
-(void)deleteDeviceType;
-(void)deleteEffectiveSystemLanguage;
-(void)deleteEntitySyncSettings;
-(void)deleteHomeKitConfiguration;
-(void)deleteIsLowPowerModeEnabled;
-(void)deleteIsStoreDemoMode;
-(void)deletePreferredLanguages;
-(void)deleteProgramCode;
-(void)deleteSiriInputLocale;
-(void)deleteSiriInputLocaleV2;
-(void)deleteSiriVoiceSettings;
-(void)deleteSystemBuild;
-(void)deleteSystemLocale;
-(void)deleteSystemLocaleV2;
-(void)deleteTimeIntervalSince1970;
-(void)deleteTimezoneOffset;
-(void)deleteWatchDeviceAttributes;
-(void)writeTo:(id)arg0 ;


@end


#endif