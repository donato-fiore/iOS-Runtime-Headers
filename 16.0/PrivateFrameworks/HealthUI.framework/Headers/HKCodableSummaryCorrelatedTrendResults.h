// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKCODABLESUMMARYCORRELATEDTRENDRESULTS_H
#define HKCODABLESUMMARYCORRELATEDTRENDRESULTS_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface HKCodableSummaryCorrelatedTrendResults : PBCodable <NSCopying>

 {
    APPLE_170 _has;
}


@property (nonatomic) BOOL hasLatestSupportedVersion;
@property (nonatomic) BOOL hasMinimumSupportedVersion;
@property (nonatomic) NSInteger latestSupportedVersion; // ivar: _latestSupportedVersion
@property (nonatomic) NSInteger minimumSupportedVersion; // ivar: _minimumSupportedVersion
@property (retain, nonatomic) NSMutableArray *trendValues; // ivar: _trendValues


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)trendValuesAtIndex:(NSUInteger)arg0 ;
-(void)addTrendValues:(id)arg0 ;
-(void)clearTrendValues;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif