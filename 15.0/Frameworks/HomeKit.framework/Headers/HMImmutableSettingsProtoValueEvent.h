// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMIMMUTABLESETTINGSPROTOVALUEEVENT_H
#define HMIMMUTABLESETTINGSPROTOVALUEEVENT_H

@class PBCodable;
@protocol NSCopying;


#import "HMImmutableSettingsProtoBoolValueEvent.h"
#import "HMImmutableSettingsProtoIntegerValueEvent.h"
#import "HMImmutableSettingsProtoLanguageValueEvent.h"
#import "HMImmutableSettingsProtoStringValueEvent.h"

@interface HMImmutableSettingsProtoValueEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) HMImmutableSettingsProtoBoolValueEvent *boolValueEvent; // ivar: _boolValueEvent
@property (readonly, nonatomic) BOOL hasBoolValueEvent;
@property (readonly, nonatomic) BOOL hasIntegerValueEvent;
@property (readonly, nonatomic) BOOL hasLanguageValueEvent;
@property (nonatomic) BOOL hasSettingValueEvent;
@property (readonly, nonatomic) BOOL hasStringValueEvent;
@property (retain, nonatomic) HMImmutableSettingsProtoIntegerValueEvent *integerValueEvent; // ivar: _integerValueEvent
@property (retain, nonatomic) HMImmutableSettingsProtoLanguageValueEvent *languageValueEvent; // ivar: _languageValueEvent
@property (nonatomic) int settingValueEvent; // ivar: _settingValueEvent
@property (retain, nonatomic) HMImmutableSettingsProtoStringValueEvent *stringValueEvent; // ivar: _stringValueEvent


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)settingValueEventAsString:(int)arg0 ;
-(int)StringAsSettingValueEvent:(id)arg0 ;
-(void)clearOneofValuesForSettingValueEvent;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif