// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBDISTANCELIST_H
#define _INPBDISTANCELIST_H

@class PBCodable, NSString, NSArray;
@protocol _INPBDistanceList, NSSecureCoding, NSCopying;


#import "_INPBCondition.h"

@interface _INPBDistanceList : PBCodable <_INPBDistanceList, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _INPBCondition *condition; // ivar: _condition
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *distances; // ivar: _distances
@property (readonly, nonatomic) NSUInteger distancesCount;
@property (readonly, nonatomic) BOOL hasCondition;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(Class)distanceType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)distanceAtIndex:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)addDistance:(id)arg0 ;
-(void)clearDistances;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif