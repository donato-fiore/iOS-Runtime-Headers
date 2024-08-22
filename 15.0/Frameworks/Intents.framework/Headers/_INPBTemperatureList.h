// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBTEMPERATURELIST_H
#define _INPBTEMPERATURELIST_H

@class PBCodable, NSString, NSArray;
@protocol _INPBTemperatureList, NSSecureCoding, NSCopying;


#import "_INPBCondition.h"

@interface _INPBTemperatureList : PBCodable <_INPBTemperatureList, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _INPBCondition *condition; // ivar: _condition
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasCondition;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *temperatures; // ivar: _temperatures
@property (readonly, nonatomic) NSUInteger temperaturesCount;


+(BOOL)supportsSecureCoding;
+(Class)temperatureType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)temperatureAtIndex:(NSUInteger)arg0 ;
-(void)addTemperature:(id)arg0 ;
-(void)clearTemperatures;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif