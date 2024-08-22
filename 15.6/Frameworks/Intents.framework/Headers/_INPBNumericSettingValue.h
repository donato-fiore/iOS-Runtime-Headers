// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INPBNUMERICSETTINGVALUE_H
#define _INPBNUMERICSETTINGVALUE_H

@class PBCodable, NSString;
@protocol _INPBNumericSettingValue, NSSecureCoding, NSCopying;



@interface _INPBNumericSettingValue : PBCodable <_INPBNumericSettingValue, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasUnit;
@property (nonatomic) BOOL hasValue;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) int unit; // ivar: _unit
@property (nonatomic) CGFloat value; // ivar: _value


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)unitAsString:(int)arg0 ;
-(int)StringAsUnit:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif