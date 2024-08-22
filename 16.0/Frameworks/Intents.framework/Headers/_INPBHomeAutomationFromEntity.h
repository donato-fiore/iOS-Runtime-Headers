// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBHOMEAUTOMATIONFROMENTITY_H
#define _INPBHOMEAUTOMATIONFROMENTITY_H

@class PBCodable, NSString;
@protocol _INPBHomeAutomationFromEntity, NSSecureCoding, NSCopying;


#import "_INPBString.h"

@interface _INPBHomeAutomationFromEntity : PBCodable <_INPBHomeAutomationFromEntity, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasType;
@property (readonly, nonatomic) BOOL hasValue;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) int type; // ivar: _type
@property (retain, nonatomic) _INPBString *value; // ivar: _value


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif