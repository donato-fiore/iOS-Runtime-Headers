// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKCODABLESLEEPSUMMARYCOLLECTION_H
#define HKCODABLESLEEPSUMMARYCOLLECTION_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface HKCodableSleepSummaryCollection : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *sleepSummaryEntrys; // ivar: _sleepSummaryEntrys


+(Class)sleepSummaryEntryType;
+(id)_codableSleepPeriodFromPeriod:(id)arg0 ;
+(id)_codableSleepPeriodSegmentFromSegment:(id)arg0 ;
+(id)_sleepEntryFromDaySummary:(id)arg0 ;
+(id)sleepSummaryCollectionFromDaySummaries:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)_daySummaryFromCodableSummary:(id)arg0 sourceTimeZone:(id)arg1 ;
-(id)_segmentFromCodableSegment:(id)arg0 sourceTimeZone:(id)arg1 ;
-(id)_sleepPeriodFromCodablePeriod:(id)arg0 sourceTimeZone:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)daySummariesWithSourceTimeZone:(id)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)sleepSummaryEntryAtIndex:(NSUInteger)arg0 ;
-(void)addSleepSummaryEntry:(id)arg0 ;
-(void)clearSleepSummaryEntrys;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif