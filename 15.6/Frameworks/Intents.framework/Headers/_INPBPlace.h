// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INPBPLACE_H
#define _INPBPLACE_H

@class PBCodable, NSString, NSArray;
@protocol _INPBPlace, NSSecureCoding, NSCopying;


#import "_INPBString.h"

@interface _INPBPlace : PBCodable <_INPBPlace, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasPersonalPlaceType;
@property (readonly, nonatomic) BOOL hasPlaceSubType;
@property (readonly, nonatomic) BOOL hasPlaceType;
@property (readonly) NSUInteger hash;
@property (nonatomic) int personalPlaceType; // ivar: _personalPlaceType
@property (copy, nonatomic) NSArray *placeDescriptors; // ivar: _placeDescriptors
@property (readonly, nonatomic) NSUInteger placeDescriptorsCount;
@property (retain, nonatomic) _INPBString *placeSubType; // ivar: _placeSubType
@property (retain, nonatomic) _INPBString *placeType; // ivar: _placeType
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)personalPlaceTypeAsString:(int)arg0 ;
-(id)placeDescriptorsAtIndex:(NSUInteger)arg0 ;
-(int)StringAsPersonalPlaceType:(id)arg0 ;
-(void)addPlaceDescriptors:(id)arg0 ;
-(void)clearPlaceDescriptors;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif