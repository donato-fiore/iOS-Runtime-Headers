// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKCODABLECHARTFEEDITEMDATA_H
#define HKCODABLECHARTFEEDITEMDATA_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "HKCodableChartSharableModel.h"

@interface HKCodableChartFeedItemData : PBCodable <NSCopying>



@property (retain, nonatomic) HKCodableChartSharableModel *chartModel; // ivar: _chartModel
@property (readonly, nonatomic) BOOL hasChartModel;
@property (retain, nonatomic) NSMutableArray *trends; // ivar: _trends


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)trendsAtIndex:(NSUInteger)arg0 ;
-(void)addTrends:(id)arg0 ;
-(void)clearTrends;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif