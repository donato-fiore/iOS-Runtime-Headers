// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXPBUSERNOTIFICATIONDIGEST_H
#define ATXPBUSERNOTIFICATIONDIGEST_H

@class PBCodable, NSMutableArray, NSString;
@protocol ATXJSONSerializableProtocol, NSCopying;


#import "ATXPBDigestTimeline.h"
#import "ATXPBSharedDigestEngagementTrackingMetrics.h"

@interface ATXPBUserNotificationDigest : PBCodable <ATXJSONSerializableProtocol, NSCopying>

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
@property (retain, nonatomic) NSMutableArray *highlightedGroups; // ivar: _highlightedGroups
@property (retain, nonatomic) NSMutableArray *messageGroups; // ivar: _messageGroups
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
-(id)highlightedGroupsAtIndex:(NSUInteger)arg0 ;
-(id)initFromJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)messageGroupsAtIndex:(NSUInteger)arg0 ;
-(id)rankedGroupsAtIndex:(NSUInteger)arg0 ;
-(void)addHighlightedGroups:(id)arg0 ;
-(void)addMessageGroups:(id)arg0 ;
-(void)addRankedGroups:(id)arg0 ;
-(void)clearHighlightedGroups;
-(void)clearMessageGroups;
-(void)clearRankedGroups;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif