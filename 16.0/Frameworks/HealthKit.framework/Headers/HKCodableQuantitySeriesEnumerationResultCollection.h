// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKCODABLEQUANTITYSERIESENUMERATIONRESULTCOLLECTION_H
#define HKCODABLEQUANTITYSERIESENUMERATIONRESULTCOLLECTION_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface HKCodableQuantitySeriesEnumerationResultCollection : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasLatestSampleStartTime;
@property (nonatomic) CGFloat latestSampleStartTime; // ivar: _latestSampleStartTime
@property (retain, nonatomic) NSMutableArray *results; // ivar: _results


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)resultsAtIndex:(NSUInteger)arg0 ;
-(void)addResults:(id)arg0 ;
-(void)clearResults;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif