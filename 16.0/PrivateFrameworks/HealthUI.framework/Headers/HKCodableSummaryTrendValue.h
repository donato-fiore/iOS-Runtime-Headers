// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKCODABLESUMMARYTRENDVALUE_H
#define HKCODABLESUMMARYTRENDVALUE_H

@class PBCodable, NSData, NSString, NSMutableArray;
@protocol NSCopying;



@interface HKCodableSummaryTrendValue : PBCodable <NSCopying>



@property (retain, nonatomic) NSData *analysisData; // ivar: _analysisData
@property (retain, nonatomic) NSString *coveredDateRangeRawValue; // ivar: _coveredDateRangeRawValue
@property (retain, nonatomic) NSMutableArray *dataPresencePoints; // ivar: _dataPresencePoints
@property (readonly, nonatomic) BOOL hasAnalysisData;
@property (readonly, nonatomic) BOOL hasCoveredDateRangeRawValue;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataPresencePointsAtIndex:(NSUInteger)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addDataPresencePoints:(id)arg0 ;
-(void)clearDataPresencePoints;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif