// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCODABLEWORKOUTSTATISTICS_H
#define HDCODABLEWORKOUTSTATISTICS_H

@class PBCodable;
@protocol NSCopying;



@interface HDCodableWorkoutStatistics : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat avgQuantity; // ivar: _avgQuantity
@property (nonatomic) BOOL hasAvgQuantity;
@property (nonatomic) BOOL hasMaxQuantity;
@property (nonatomic) BOOL hasMinQuantity;
@property (nonatomic) BOOL hasQuantityType;
@property (nonatomic) BOOL hasSumQuantity;
@property (nonatomic) CGFloat maxQuantity; // ivar: _maxQuantity
@property (nonatomic) CGFloat minQuantity; // ivar: _minQuantity
@property (nonatomic) NSInteger quantityType; // ivar: _quantityType
@property (nonatomic) CGFloat sumQuantity; // ivar: _sumQuantity


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif