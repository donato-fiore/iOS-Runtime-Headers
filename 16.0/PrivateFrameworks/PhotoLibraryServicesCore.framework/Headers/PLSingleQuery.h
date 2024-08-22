// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLSINGLEQUERY_H
#define PLSINGLEQUERY_H

@class PBCodable, NSDate, NSData, NSString;
@protocol NSCopying;


#import "PLQueryCircularRegion.h"

@interface PLSingleQuery : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL boolValue;
@property (retain, nonatomic) PLQueryCircularRegion *circularRegionValue;
@property (nonatomic) int comparator; // ivar: _comparator
@property (retain, nonatomic) NSDate *dateValue;
@property (nonatomic) CGFloat doubleValue;
@property (retain, nonatomic) NSData *firstValue; // ivar: _firstValue
@property (nonatomic) BOOL hasComparator;
@property (readonly, nonatomic) BOOL hasFirstValue;
@property (nonatomic) BOOL hasKey;
@property (readonly, nonatomic) BOOL hasSecondValue;
@property (nonatomic) BOOL hasUnit;
@property (nonatomic) BOOL hasValueType;
@property (nonatomic) NSInteger integerValue;
@property (nonatomic) int key; // ivar: _key
@property (retain, nonatomic) PLQueryCircularRegion *secondCircularRegionValue;
@property (retain, nonatomic) NSDate *secondDateValue;
@property (nonatomic) CGFloat secondDoubleValue;
@property (nonatomic) NSInteger secondIntegerValue;
@property (retain, nonatomic) NSString *secondStringValue;
@property (retain, nonatomic) NSData *secondValue; // ivar: _secondValue
@property (retain, nonatomic) NSString *stringValue;
@property (nonatomic) int unit; // ivar: _unit
@property (nonatomic) int valueType; // ivar: _valueType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)logDescription;
-(int)migratedComparator;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)setValueAndType:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif