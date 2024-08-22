// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBFILEPROPERTYVALUE_H
#define _INPBFILEPROPERTYVALUE_H

@class PBCodable, NSString;
@protocol _INPBFilePropertyValue, NSSecureCoding, NSCopying;


#import "_INPBDateTimeRange.h"
#import "_INPBContact.h"
#import "_INPBLong.h"
#import "_INPBString.h"

@interface _INPBFilePropertyValue : PBCodable <_INPBFilePropertyValue, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _INPBDateTimeRange *dateTime; // ivar: _dateTime
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int fileType; // ivar: _fileType
@property (readonly, nonatomic) BOOL hasDateTime;
@property (nonatomic) BOOL hasFileType;
@property (readonly, nonatomic) BOOL hasPerson;
@property (readonly, nonatomic) BOOL hasQuantity;
@property (readonly, nonatomic) BOOL hasValue;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBContact *person; // ivar: _person
@property (retain, nonatomic) _INPBLong *quantity; // ivar: _quantity
@property (readonly) Class superclass;
@property (retain, nonatomic) _INPBString *value; // ivar: _value


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)fileTypeAsString:(int)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(int)StringAsFileType:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif