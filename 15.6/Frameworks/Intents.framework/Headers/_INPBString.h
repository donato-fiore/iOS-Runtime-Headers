// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INPBSTRING_H
#define _INPBSTRING_H

@class PBCodable, NSString, NSArray;
@protocol _INPBString, NSSecureCoding, NSCopying;



@interface _INPBString : PBCodable <_INPBString, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *values; // ivar: _values
@property (readonly, nonatomic) NSUInteger valuesCount;


+(BOOL)supportsSecureCoding;
+(Class)valueType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)valueAtIndex:(NSUInteger)arg0 ;
-(void)addValue:(id)arg0 ;
-(void)clearValues;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif