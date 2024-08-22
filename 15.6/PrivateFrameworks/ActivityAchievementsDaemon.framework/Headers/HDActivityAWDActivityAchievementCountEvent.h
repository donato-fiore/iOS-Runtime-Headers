// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDACTIVITYAWDACTIVITYACHIEVEMENTCOUNTEVENT_H
#define HDACTIVITYAWDACTIVITYACHIEVEMENTCOUNTEVENT_H

@class PBCodable;
@protocol NSCopying;



@interface HDActivityAWDActivityAchievementCountEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasMoreThanOneYearSinceActivitySetup;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasTotalAchievementCount;
@property (nonatomic) BOOL hasTotalOTAAchievementCount;
@property (nonatomic) BOOL hasTotalOTAAchievementViewedCount;
@property (nonatomic) BOOL moreThanOneYearSinceActivitySetup; // ivar: _moreThanOneYearSinceActivitySetup
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (nonatomic) int totalAchievementCount; // ivar: _totalAchievementCount
@property (nonatomic) int totalOTAAchievementCount; // ivar: _totalOTAAchievementCount
@property (nonatomic) int totalOTAAchievementViewedCount; // ivar: _totalOTAAchievementViewedCount


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)totalAchievementCountAsString:(int)arg0 ;
-(id)totalOTAAchievementCountAsString:(int)arg0 ;
-(id)totalOTAAchievementViewedCountAsString:(int)arg0 ;
-(int)StringAsTotalAchievementCount:(id)arg0 ;
-(int)StringAsTotalOTAAchievementCount:(id)arg0 ;
-(int)StringAsTotalOTAAchievementViewedCount:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif