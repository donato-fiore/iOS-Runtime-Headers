// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DIMSCHEMADIMDEVICEFIXEDCONTEXT_H
#define DIMSCHEMADIMDEVICEFIXEDCONTEXT_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaVoiceSettings.h"
#import "DIMSchemaDIMWatchDeviceAttributes.h"

@interface DIMSchemaDIMDeviceFixedContext : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int countryCode; // ivar: _countryCode
@property (nonatomic) int dataSharingOptInState; // ivar: _dataSharingOptInState
@property (copy, nonatomic) NSString *deviceType; // ivar: _deviceType
@property (nonatomic) BOOL hasCountryCode;
@property (nonatomic) BOOL hasDataSharingOptInState;
@property (nonatomic) BOOL hasDeviceType; // ivar: _hasDeviceType
@property (nonatomic) BOOL hasIsLowPowerModeEnabled;
@property (nonatomic) BOOL hasIsStoreDemoMode;
@property (nonatomic) BOOL hasSiriInputLocale;
@property (nonatomic) BOOL hasSiriVoiceSettings; // ivar: _hasSiriVoiceSettings
@property (nonatomic) BOOL hasSystemBuild; // ivar: _hasSystemBuild
@property (nonatomic) BOOL hasSystemLocale;
@property (nonatomic) BOOL hasTimeIntervalSince1970;
@property (nonatomic) BOOL hasTimezoneOffset; // ivar: _hasTimezoneOffset
@property (nonatomic) BOOL hasWatchDeviceAttributes; // ivar: _hasWatchDeviceAttributes
@property (nonatomic) BOOL isLowPowerModeEnabled; // ivar: _isLowPowerModeEnabled
@property (nonatomic) BOOL isStoreDemoMode; // ivar: _isStoreDemoMode
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int siriInputLocale; // ivar: _siriInputLocale
@property (retain, nonatomic) SISchemaVoiceSettings *siriVoiceSettings; // ivar: _siriVoiceSettings
@property (copy, nonatomic) NSString *systemBuild; // ivar: _systemBuild
@property (nonatomic) int systemLocale; // ivar: _systemLocale
@property (nonatomic) CGFloat timeIntervalSince1970; // ivar: _timeIntervalSince1970
@property (copy, nonatomic) NSString *timezoneOffset; // ivar: _timezoneOffset
@property (retain, nonatomic) DIMSchemaDIMWatchDeviceAttributes *watchDeviceAttributes; // ivar: _watchDeviceAttributes
@property (readonly, nonatomic) NSUInteger whichDeviceattributes; // ivar: _whichDeviceattributes


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif