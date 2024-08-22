// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXPBMISSEDNOTIFICATIONRANKING_H
#define ATXPBMISSEDNOTIFICATIONRANKING_H

@class PBCodable, NSString, NSMutableArray;
@protocol ATXJSONSerializableProtocol, NSCopying;


#import "ATXPBDigestTimeline.h"
#import "ATXPBSharedDigestEngagementTrackingMetrics.h"

@interface ATXPBMissedNotificationRanking : PBCodable <ATXJSONSerializableProtocol, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) ATXPBDigestTimeline *digestTimeline; // ivar: _digestTimeline
@property (readonly, nonatomic) BOOL hasDigestTimeline;
@property (readonly, nonatomic) BOOL hasModeId;
@property (readonly, nonatomic) BOOL hasRankerId;
@property (readonly, nonatomic) BOOL hasSharedEngagementTracker;
@property (nonatomic) BOOL hasTimestamp;
@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSString *modeId; // ivar: _modeId
@property (retain, nonatomic) NSMutableArray *rankedGroups; // ivar: _rankedGroups
@property (retain, nonatomic) NSString *rankerId; // ivar: _rankerId
@property (retain, nonatomic) ATXPBSharedDigestEngagementTrackingMetrics *sharedEngagementTracker; // ivar: _sharedEngagementTracker
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (retain, nonatomic) NSString *uuid; // ivar: _uuid


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initFromJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)rankedGroupsAtIndex:(NSUInteger)arg0 ;
-(void)addRankedGroups:(id)arg0 ;
-(void)clearRankedGroups;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif