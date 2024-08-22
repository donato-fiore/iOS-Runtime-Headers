// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBCONTACTHANDLE_H
#define _INPBCONTACTHANDLE_H

@class PBCodable, NSString;
@protocol _INPBContactHandle, NSSecureCoding, NSCopying;



@interface _INPBContactHandle : PBCodable <_INPBContactHandle, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int emergencyType; // ivar: _emergencyType
@property (nonatomic) int faceTimeType; // ivar: _faceTimeType
@property (nonatomic) BOOL hasEmergencyType;
@property (nonatomic) BOOL hasFaceTimeType;
@property (readonly, nonatomic) BOOL hasLabel;
@property (nonatomic) BOOL hasSuggested;
@property (nonatomic) BOOL hasType;
@property (readonly, nonatomic) BOOL hasValue;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) BOOL suggested; // ivar: _suggested
@property (readonly) Class superclass;
@property (nonatomic) int type; // ivar: _type
@property (copy, nonatomic) NSString *value; // ivar: _value


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)emergencyTypeAsString:(int)arg0 ;
-(id)faceTimeTypeAsString:(int)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsEmergencyType:(id)arg0 ;
-(int)StringAsFaceTimeType:(id)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif