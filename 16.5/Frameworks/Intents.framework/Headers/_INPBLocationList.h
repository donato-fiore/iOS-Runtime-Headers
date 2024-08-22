// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBLOCATIONLIST_H
#define _INPBLOCATIONLIST_H

@class PBCodable, NSString, NSArray;
@protocol _INPBLocationList, NSSecureCoding, NSCopying;


#import "_INPBCondition.h"

@interface _INPBLocationList : PBCodable <_INPBLocationList, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _INPBCondition *condition; // ivar: _condition
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasCondition;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *locations; // ivar: _locations
@property (readonly, nonatomic) NSUInteger locationsCount;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(Class)locationType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)locationAtIndex:(NSUInteger)arg0 ;
-(void)addLocation:(id)arg0 ;
-(void)clearLocations;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif