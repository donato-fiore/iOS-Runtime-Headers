// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ODCURAREREPORTFILLERDATASET_H
#define ODCURAREREPORTFILLERDATASET_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;


#import "ODCurareReportFillerDataSetSize.h"

@interface ODCurareReportFillerDataSet : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasSampleEndDate;
@property (readonly, nonatomic) BOOL hasSampleStartDate;
@property (retain, nonatomic) NSString *sampleEndDate; // ivar: _sampleEndDate
@property (retain, nonatomic) NSString *sampleStartDate; // ivar: _sampleStartDate
@property (retain, nonatomic) ODCurareReportFillerDataSetSize *size; // ivar: _size
@property (retain, nonatomic) NSMutableArray *stats; // ivar: _stats


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)statsAtIndex:(NSUInteger)arg0 ;
-(void)addStats:(id)arg0 ;
-(void)clearStats;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif