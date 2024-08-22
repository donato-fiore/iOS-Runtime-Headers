// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCODABLEQUANTITYSERIESDATUM_H
#define HDCODABLEQUANTITYSERIESDATUM_H

@class PBCodable;
@protocol NSCopying;



@interface HDCodableQuantitySeriesDatum : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat endDate; // ivar: _endDate
@property (nonatomic) BOOL hasEndDate;
@property (nonatomic) BOOL hasStartDate;
@property (nonatomic) BOOL hasValue;
@property (nonatomic) CGFloat startDate; // ivar: _startDate
@property (nonatomic) CGFloat value; // ivar: _value


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