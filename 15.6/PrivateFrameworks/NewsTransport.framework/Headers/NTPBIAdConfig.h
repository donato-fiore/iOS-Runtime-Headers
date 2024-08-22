// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBIADCONFIG_H
#define NTPBIADCONFIG_H

@class PBCodable;
@protocol NSCopying;



@interface NTPBIAdConfig : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasSegmentsEnabled;
@property (nonatomic) BOOL hasSegmentsHistoryWindowInterval;
@property (nonatomic) BOOL hasSegmentsMinimumArticleCount;
@property (nonatomic) BOOL hasSegmentsSubmissionFrequency;
@property (nonatomic) BOOL hasSegmentsThreshold;
@property (nonatomic) BOOL segmentsEnabled; // ivar: _segmentsEnabled
@property (nonatomic) NSInteger segmentsHistoryWindowInterval; // ivar: _segmentsHistoryWindowInterval
@property (nonatomic) NSInteger segmentsMinimumArticleCount; // ivar: _segmentsMinimumArticleCount
@property (nonatomic) NSInteger segmentsSubmissionFrequency; // ivar: _segmentsSubmissionFrequency
@property (nonatomic) CGFloat segmentsThreshold; // ivar: _segmentsThreshold


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif