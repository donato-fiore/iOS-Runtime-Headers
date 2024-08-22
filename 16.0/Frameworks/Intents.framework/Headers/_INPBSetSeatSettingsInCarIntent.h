// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBSETSEATSETTINGSINCARINTENT_H
#define _INPBSETSEATSETTINGSINCARINTENT_H

@class PBCodable, NSString;
@protocol _INPBSetSeatSettingsInCarIntent, NSSecureCoding, NSCopying;


#import "_INPBDataString.h"
#import "_INPBIntentMetadata.h"
#import "_INPBInteger.h"

@interface _INPBSetSeatSettingsInCarIntent : PBCodable <_INPBSetSeatSettingsInCarIntent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _INPBDataString *carName; // ivar: _carName
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enableCooling; // ivar: _enableCooling
@property (nonatomic) BOOL enableHeating; // ivar: _enableHeating
@property (nonatomic) BOOL enableMassage; // ivar: _enableMassage
@property (readonly, nonatomic) BOOL hasCarName;
@property (nonatomic) BOOL hasEnableCooling;
@property (nonatomic) BOOL hasEnableHeating;
@property (nonatomic) BOOL hasEnableMassage;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly, nonatomic) BOOL hasLevel;
@property (nonatomic) BOOL hasRelativeLevelSetting;
@property (nonatomic) BOOL hasSeat;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata; // ivar: _intentMetadata
@property (retain, nonatomic) _INPBInteger *level; // ivar: _level
@property (nonatomic) int relativeLevelSetting; // ivar: _relativeLevelSetting
@property (nonatomic) int seat; // ivar: _seat
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)relativeLevelSettingAsString:(int)arg0 ;
-(id)seatAsString:(int)arg0 ;
-(int)StringAsRelativeLevelSetting:(id)arg0 ;
-(int)StringAsSeat:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif