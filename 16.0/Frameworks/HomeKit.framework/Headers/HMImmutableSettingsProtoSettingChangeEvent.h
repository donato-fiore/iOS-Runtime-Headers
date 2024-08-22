// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMIMMUTABLESETTINGSPROTOSETTINGCHANGEEVENT_H
#define HMIMMUTABLESETTINGSPROTOSETTINGCHANGEEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "HMImmutableSettingsProtoAvailableLanguageListEvent.h"
#import "HMImmutableSettingsProtoBoolSettingEvent.h"
#import "HMImmutableSettingsProtoBoundedIntegerSettingEvent.h"
#import "HMImmutableSettingsProtoLanguageSettingEvent.h"
#import "HMImmutableSettingsProtoStringSettingEvent.h"

@interface HMImmutableSettingsProtoSettingChangeEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) HMImmutableSettingsProtoAvailableLanguageListEvent *availableLanguages; // ivar: _availableLanguages
@property (retain, nonatomic) HMImmutableSettingsProtoBoolSettingEvent *boolSetting; // ivar: _boolSetting
@property (retain, nonatomic) HMImmutableSettingsProtoBoundedIntegerSettingEvent *boundedIntegerSetting; // ivar: _boundedIntegerSetting
@property (readonly, nonatomic) BOOL hasAvailableLanguages;
@property (readonly, nonatomic) BOOL hasBoolSetting;
@property (readonly, nonatomic) BOOL hasBoundedIntegerSetting;
@property (readonly, nonatomic) BOOL hasKeyPath;
@property (readonly, nonatomic) BOOL hasLanguageSetting;
@property (nonatomic) BOOL hasReadOnly;
@property (nonatomic) BOOL hasSettingChangeEvent;
@property (readonly, nonatomic) BOOL hasStringSetting;
@property (retain, nonatomic) NSString *keyPath; // ivar: _keyPath
@property (retain, nonatomic) HMImmutableSettingsProtoLanguageSettingEvent *languageSetting; // ivar: _languageSetting
@property (nonatomic) BOOL readOnly; // ivar: _readOnly
@property (nonatomic) int settingChangeEvent; // ivar: _settingChangeEvent
@property (retain, nonatomic) HMImmutableSettingsProtoStringSettingEvent *stringSetting; // ivar: _stringSetting


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)settingChangeEventAsString:(int)arg0 ;
-(int)StringAsSettingChangeEvent:(id)arg0 ;
-(void)clearOneofValuesForSettingChangeEvent;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif