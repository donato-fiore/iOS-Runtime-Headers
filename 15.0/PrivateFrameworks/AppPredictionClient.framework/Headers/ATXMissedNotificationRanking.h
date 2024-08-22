// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXMISSEDNOTIFICATIONRANKING_H
#define ATXMISSEDNOTIFICATIONRANKING_H

@class NSString, NSArray, NSUUID;
@protocol NSSecureCoding, ATXProtoBufWrapper, ATXJSONSerializableProtocol, BMStoreData;

#import <Foundation/Foundation.h>

#import "ATXSharedDigestEngagementTrackingMetrics.h"
#import "ATXDigestTimeline.h"
#import "ATXMissedNotificationRankingBiomeStream.h"

@interface ATXMissedNotificationRanking : NSObject <NSSecureCoding, ATXProtoBufWrapper, ATXJSONSerializableProtocol, BMStoreData>



@property (readonly, nonatomic) CGFloat creationTimestamp; // ivar: _creationTimestamp
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) ATXSharedDigestEngagementTrackingMetrics *digestEngagementTrackingMetrics; // ivar: _digestEngagementTrackingMetrics
@property (copy, nonatomic) ATXDigestTimeline *digestTimeline; // ivar: _digestTimeline
@property (nonatomic) BOOL hasLoggedCollapsed; // ivar: _hasLoggedCollapsed
@property (nonatomic) BOOL hasLoggedDeliveredCollapsed; // ivar: _hasLoggedDeliveredCollapsed
@property (nonatomic) BOOL hasLoggedDeliveredExpanded; // ivar: _hasLoggedDeliveredExpanded
@property (nonatomic) BOOL hasLoggedExpanded; // ivar: _hasLoggedExpanded
@property (nonatomic) BOOL hasLoggedRemoval; // ivar: _hasLoggedRemoval
@property (nonatomic) BOOL hasLoggedUpcomingCollapsed; // ivar: _hasLoggedUpcomingCollapsed
@property (nonatomic) BOOL hasLoggedUpcomingExpanded; // ivar: _hasLoggedUpcomingExpanded
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) ATXMissedNotificationRankingBiomeStream *loggingStream; // ivar: _loggingStream
@property (copy, nonatomic) NSString *modeIdString; // ivar: _modeIdString
@property (readonly, nonatomic) NSArray *rankedGroups; // ivar: _rankedGroups
@property (copy, nonatomic) NSString *rankerId; // ivar: _rankerId
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)doesRankingShareContentWithOtherRanking:(id)arg0 ;
-(id)allNotificationIds;
-(id)encodeAsProto;
-(id)init;
-(id)initFromJSON:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGroups:(id)arg0 modeId:(id)arg1 ranker:(id)arg2 ;
-(id)initWithNotificationArrays:(id)arg0 modeId:(id)arg1 ranker:(id)arg2 ;
-(id)initWithNotifications:(id)arg0 modeId:(id)arg1 ;
-(id)initWithNotifications:(id)arg0 modeId:(id)arg1 ranker:(id)arg2 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)json;
-(id)jsonDict;
-(id)jsonRepresentation;
-(id)proto;
-(id)serialize;
-(void)encodeWithCoder:(id)arg0 ;
-(void)logCollapsedPreview;
-(void)logCollapsedViewWithIsUpcoming:(BOOL)arg0 ;
-(void)logExpandedViewWithIsUpcoming:(BOOL)arg0 ;
-(void)logRemoval;
-(void)logView;


@end


#endif