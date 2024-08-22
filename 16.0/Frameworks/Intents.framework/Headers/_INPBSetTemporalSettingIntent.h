// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBSETTEMPORALSETTINGINTENT_H
#define _INPBSETTEMPORALSETTINGINTENT_H

@class PBCodable, NSString;
@protocol _INPBSetTemporalSettingIntent, NSSecureCoding, NSCopying;


#import "_INPBIntentMetadata.h"
#import "_INPBSettingMetadata.h"
#import "_INPBTemporalEventTrigger.h"
#import "_INPBDateTimeRangeValue.h"

@interface _INPBSetTemporalSettingIntent : PBCodable <_INPBSetTemporalSettingIntent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (nonatomic) int action; // ivar: _action
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasAction;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly, nonatomic) BOOL hasSettingMetadata;
@property (readonly, nonatomic) BOOL hasTemporalEventTrigger;
@property (readonly, nonatomic) BOOL hasTimeValue;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata; // ivar: _intentMetadata
@property (retain, nonatomic) _INPBSettingMetadata *settingMetadata; // ivar: _settingMetadata
@property (readonly) Class superclass;
@property (retain, nonatomic) _INPBTemporalEventTrigger *temporalEventTrigger; // ivar: _temporalEventTrigger
@property (retain, nonatomic) _INPBDateTimeRangeValue *timeValue; // ivar: _timeValue


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)actionAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(int)StringAsAction:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif