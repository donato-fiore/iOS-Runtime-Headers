// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBLISTCARSINTENTRESPONSE_H
#define _INPBLISTCARSINTENTRESPONSE_H

@class PBCodable, NSArray, NSString;
@protocol _INPBListCarsIntentResponse, NSSecureCoding, NSCopying;



@interface _INPBListCarsIntentResponse : PBCodable <_INPBListCarsIntentResponse, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSArray *cars; // ivar: _cars
@property (readonly, nonatomic) NSUInteger carsCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)carsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(void)addCars:(id)arg0 ;
-(void)clearCars;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif