// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBSETLABELEDSETTINGINTENT_H
#define _INPBSETLABELEDSETTINGINTENT_H

@class PBCodable, NSString;
@protocol _INPBSetLabeledSettingIntent, NSSecureCoding, NSCopying;


#import "_INPBIntentMetadata.h"
#import "_INPBSettingMetadata.h"
#import "_INPBTemporalEventTrigger.h"

@interface _INPBSetLabeledSettingIntent : PBCodable <_INPBSetLabeledSettingIntent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly, nonatomic) BOOL hasLabeledValue;
@property (readonly, nonatomic) BOOL hasSettingMetadata;
@property (readonly, nonatomic) BOOL hasTemporalEventTrigger;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata; // ivar: _intentMetadata
@property (copy, nonatomic) NSString *labeledValue; // ivar: _labeledValue
@property (retain, nonatomic) _INPBSettingMetadata *settingMetadata; // ivar: _settingMetadata
@property (readonly) Class superclass;
@property (retain, nonatomic) _INPBTemporalEventTrigger *temporalEventTrigger; // ivar: _temporalEventTrigger


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif