// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKCODABLEQUANTITYSERIESENUMERATIONRESULT_H
#define HKCODABLEQUANTITYSERIESENUMERATIONRESULT_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface HKCodableQuantitySeriesEnumerationResult : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger count; // ivar: _count
@property (nonatomic) NSInteger dataTypeCode; // ivar: _dataTypeCode
@property (nonatomic) CGFloat endTime; // ivar: _endTime
@property (nonatomic) BOOL hasCount;
@property (nonatomic) BOOL hasDataTypeCode;
@property (nonatomic) BOOL hasEndTime;
@property (nonatomic) BOOL hasPersistentID;
@property (readonly, nonatomic) BOOL hasQuantitySample;
@property (nonatomic) BOOL hasSeriesIndex;
@property (nonatomic) BOOL hasSourceID;
@property (nonatomic) BOOL hasStartTime;
@property (readonly, nonatomic) BOOL hasUuid;
@property (nonatomic) BOOL hasValue;
@property (nonatomic) NSInteger persistentID; // ivar: _persistentID
@property (retain, nonatomic) NSData *quantitySample; // ivar: _quantitySample
@property (nonatomic) NSInteger seriesIndex; // ivar: _seriesIndex
@property (nonatomic) NSInteger sourceID; // ivar: _sourceID
@property (nonatomic) CGFloat startTime; // ivar: _startTime
@property (retain, nonatomic) NSData *uuid; // ivar: _uuid
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