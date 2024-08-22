// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBHOMEATTRIBUTERANGE_H
#define _INPBHOMEATTRIBUTERANGE_H

@class PBCodable, NSString;
@protocol _INPBHomeAttributeRange, NSSecureCoding, NSCopying;



@interface _INPBHomeAttributeRange : PBCodable <_INPBHomeAttributeRange, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasLowerValue;
@property (nonatomic) BOOL hasUpperValue;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat lowerValue; // ivar: _lowerValue
@property (readonly) Class superclass;
@property (nonatomic) CGFloat upperValue; // ivar: _upperValue


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