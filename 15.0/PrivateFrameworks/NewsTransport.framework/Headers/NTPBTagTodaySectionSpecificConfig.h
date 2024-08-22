// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTPBTAGTODAYSECTIONSPECIFICCONFIG_H
#define NTPBTAGTODAYSECTIONSPECIFICCONFIG_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NTPBTagTodaySectionSpecificConfig : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSUInteger cutoffTime; // ivar: _cutoffTime
@property (nonatomic) int fetchingBin; // ivar: _fetchingBin
@property (nonatomic) BOOL hasCutoffTime;
@property (nonatomic) BOOL hasFetchingBin;
@property (nonatomic) BOOL hasHeadlinesPerFeedFetchCount;
@property (nonatomic) BOOL hasMinimumUpdateInterval;
@property (readonly, nonatomic) BOOL hasTagID;
@property (nonatomic) NSUInteger headlinesPerFeedFetchCount; // ivar: _headlinesPerFeedFetchCount
@property (nonatomic) NSUInteger minimumUpdateInterval; // ivar: _minimumUpdateInterval
@property (retain, nonatomic) NSString *tagID; // ivar: _tagID


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif