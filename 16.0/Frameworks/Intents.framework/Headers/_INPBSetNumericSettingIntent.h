// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBSETNUMERICSETTINGINTENT_H
#define _INPBSETNUMERICSETTINGINTENT_H

@class PBCodable, NSString;
@protocol _INPBSetNumericSettingIntent, NSSecureCoding, NSCopying;


#import "_INPBIntentMetadata.h"
#import "_INPBNumericSettingValue.h"
#import "_INPBSettingMetadata.h"
#import "_INPBTemporalEventTrigger.h"

@interface _INPBSetNumericSettingIntent : PBCodable <_INPBSetNumericSettingIntent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (nonatomic) int action; // ivar: _action
@property (nonatomic) int boundedValue; // ivar: _boundedValue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasAction;
@property (nonatomic) BOOL hasBoundedValue;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly, nonatomic) BOOL hasNumericValue;
@property (readonly, nonatomic) BOOL hasSettingMetadata;
@property (readonly, nonatomic) BOOL hasTemporalEventTrigger;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata; // ivar: _intentMetadata
@property (retain, nonatomic) _INPBNumericSettingValue *numericValue; // ivar: _numericValue
@property (retain, nonatomic) _INPBSettingMetadata *settingMetadata; // ivar: _settingMetadata
@property (readonly) Class superclass;
@property (retain, nonatomic) _INPBTemporalEventTrigger *temporalEventTrigger; // ivar: _temporalEventTrigger


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)actionAsString:(int)arg0 ;
-(id)boundedValueAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(int)StringAsAction:(id)arg0 ;
-(int)StringAsBoundedValue:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif