// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBSETRADIOSTATIONINTENT_H
#define _INPBSETRADIOSTATIONINTENT_H

@class PBCodable, NSString;
@protocol _INPBSetRadioStationIntent, NSSecureCoding, NSCopying;


#import "_INPBString.h"
#import "_INPBDouble.h"
#import "_INPBIntentMetadata.h"
#import "_INPBInteger.h"

@interface _INPBSetRadioStationIntent : PBCodable <_INPBSetRadioStationIntent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _INPBString *channel; // ivar: _channel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _INPBDouble *frequency; // ivar: _frequency
@property (readonly, nonatomic) BOOL hasChannel;
@property (readonly, nonatomic) BOOL hasFrequency;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly, nonatomic) BOOL hasPresetNumber;
@property (nonatomic) BOOL hasRadioType;
@property (readonly, nonatomic) BOOL hasStationName;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata; // ivar: _intentMetadata
@property (retain, nonatomic) _INPBInteger *presetNumber; // ivar: _presetNumber
@property (nonatomic) int radioType; // ivar: _radioType
@property (retain, nonatomic) _INPBString *stationName; // ivar: _stationName
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)radioTypeAsString:(int)arg0 ;
-(int)StringAsRadioType:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif