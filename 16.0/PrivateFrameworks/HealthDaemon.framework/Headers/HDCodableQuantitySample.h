// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCODABLEQUANTITYSAMPLE_H
#define HDCODABLEQUANTITYSAMPLE_H

@class PBCodable, NSString, NSMutableArray;
@protocol HDDecoding, NSCopying;


#import "HDCodableSample.h"

@interface HDCodableQuantitySample : PBCodable <HDDecoding, NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger count; // ivar: _count
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL final; // ivar: _final
@property (nonatomic) BOOL frozen; // ivar: _frozen
@property (nonatomic) BOOL hasCount;
@property (nonatomic) BOOL hasFinal;
@property (nonatomic) BOOL hasFrozen;
@property (nonatomic) BOOL hasMax;
@property (nonatomic) BOOL hasMin;
@property (nonatomic) BOOL hasMostRecent;
@property (nonatomic) BOOL hasMostRecentDate;
@property (nonatomic) BOOL hasMostRecentDuration;
@property (readonly, nonatomic) BOOL hasOriginalUnitString;
@property (readonly, nonatomic) BOOL hasSample;
@property (nonatomic) BOOL hasValueInCanonicalUnit;
@property (nonatomic) BOOL hasValueInOriginalUnit;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat max; // ivar: _max
@property (nonatomic) CGFloat min; // ivar: _min
@property (nonatomic) CGFloat mostRecent; // ivar: _mostRecent
@property (nonatomic) CGFloat mostRecentDate; // ivar: _mostRecentDate
@property (nonatomic) CGFloat mostRecentDuration; // ivar: _mostRecentDuration
@property (retain, nonatomic) NSString *originalUnitString; // ivar: _originalUnitString
@property (retain, nonatomic) NSMutableArray *quantitySeriesDatas; // ivar: _quantitySeriesDatas
@property (retain, nonatomic) HDCodableSample *sample; // ivar: _sample
@property (readonly) Class superclass;
@property (nonatomic) CGFloat valueInCanonicalUnit; // ivar: _valueInCanonicalUnit
@property (nonatomic) CGFloat valueInOriginalUnit; // ivar: _valueInOriginalUnit


+(Class)quantitySeriesDataType;
-(BOOL)applyToObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isSeries;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)quantitySeriesDataAtIndex:(NSUInteger)arg0 ;
-(void)addQuantitySeriesData:(id)arg0 ;
-(void)clearQuantitySeriesDatas;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif