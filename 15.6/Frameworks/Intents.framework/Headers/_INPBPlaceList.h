// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INPBPLACELIST_H
#define _INPBPLACELIST_H

@class PBCodable, NSString, NSArray;
@protocol _INPBPlaceList, NSSecureCoding, NSCopying;


#import "_INPBCondition.h"

@interface _INPBPlaceList : PBCodable <_INPBPlaceList, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _INPBCondition *condition; // ivar: _condition
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasCondition;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *places; // ivar: _places
@property (readonly, nonatomic) NSUInteger placesCount;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(Class)placeType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)placeAtIndex:(NSUInteger)arg0 ;
-(void)addPlace:(id)arg0 ;
-(void)clearPlaces;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif