// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKCODABLESAMPLECHARTDATA_H
#define HKCODABLESAMPLECHARTDATA_H

@class PBCodable;
@protocol NSCopying;


#import "HKCodableMetadataDictionary.h"
#import "HKCodableQuantity.h"

@interface HKCodableSampleChartData : PBCodable <NSCopying>

 {
    APPLE_141 _has;
}


@property (nonatomic) NSInteger dataType; // ivar: _dataType
@property (nonatomic) CGFloat endDate; // ivar: _endDate
@property (nonatomic) BOOL hasDataType;
@property (nonatomic) BOOL hasEndDate;
@property (nonatomic) BOOL hasInt64Value;
@property (readonly, nonatomic) BOOL hasMetadataDictionary;
@property (readonly, nonatomic) BOOL hasQuantity;
@property (nonatomic) BOOL hasStartDate;
@property (nonatomic) NSInteger int64Value; // ivar: _int64Value
@property (retain, nonatomic) HKCodableMetadataDictionary *metadataDictionary; // ivar: _metadataDictionary
@property (retain, nonatomic) HKCodableQuantity *quantity; // ivar: _quantity
@property (nonatomic) CGFloat startDate; // ivar: _startDate


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