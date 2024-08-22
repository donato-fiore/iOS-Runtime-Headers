// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INPBRIDEDRIVER_H
#define _INPBRIDEDRIVER_H

@class PBCodable, NSString;
@protocol _INPBRideDriver, NSSecureCoding, NSCopying;


#import "_INPBImageValue.h"
#import "_INPBContactValue.h"

@interface _INPBRideDriver : PBCodable <_INPBRideDriver, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasImage;
@property (readonly, nonatomic) BOOL hasPerson;
@property (readonly, nonatomic) BOOL hasPhoneNumber;
@property (readonly, nonatomic) BOOL hasRating;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBImageValue *image; // ivar: _image
@property (retain, nonatomic) _INPBContactValue *person; // ivar: _person
@property (copy, nonatomic) NSString *phoneNumber; // ivar: _phoneNumber
@property (copy, nonatomic) NSString *rating; // ivar: _rating
@property (readonly) Class superclass;


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