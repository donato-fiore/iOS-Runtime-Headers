// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXUSERNOTIFICATIONDIGEST_H
#define ATXUSERNOTIFICATIONDIGEST_H

@class NSString, NSArray, NSUUID;
@protocol NSSecureCoding, ATXProtoBufWrapper, ATXJSONSerializableProtocol, BMStoreData, NSCopying;

#import <Foundation/Foundation.h>

#import "ATXSharedDigestEngagementTrackingMetrics.h"
#import "ATXDigestTimeline.h"
#import "ATXUserNotificationDigestBiomeStream.h"

@interface ATXUserNotificationDigest : NSObject <NSSecureCoding, ATXProtoBufWrapper, ATXJSONSerializableProtocol, BMStoreData, NSCopying>



@property (readonly, nonatomic) CGFloat creationTimestamp; // ivar: _creationTimestamp
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) ATXSharedDigestEngagementTrackingMetrics *digestEngagementTrackingMetrics; // ivar: _digestEngagementTrackingMetrics
@property (copy, nonatomic) ATXDigestTimeline *digestTimeline; // ivar: _digestTimeline
@property (readonly, nonatomic) BOOL hasLoggedCollapsed; // ivar: _hasLoggedCollapsed
@property (readonly, nonatomic) BOOL hasLoggedScheduled; // ivar: _hasLoggedScheduled
@property (readonly, nonatomic) BOOL hasLoggedUpcoming; // ivar: _hasLoggedUpcoming
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *highlightedGroups; // ivar: _highlightedGroups
@property (retain, nonatomic) ATXUserNotificationDigestBiomeStream *loggingStream; // ivar: _loggingStream
@property (readonly, nonatomic) NSArray *messageGroups; // ivar: _messageGroups
@property (readonly, nonatomic) NSString *modeIdString; // ivar: _modeIdString
@property (readonly, nonatomic) NSArray *rankedGroups; // ivar: _rankedGroups
@property (copy, nonatomic) NSString *rankerId; // ivar: _rankerId
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)doesDigestShareContentWithOtherDigest:(id)arg0 ;
-(id)allNotificationIds;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)encodeAsProto;
-(id)init;
-(id)initFromJSON:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGroups:(id)arg0 modeId:(id)arg1 ranker:(id)arg2 ;
-(id)initWithMessageGroups:(id)arg0 highlightedGroups:(id)arg1 otherGroups:(id)arg2 rankerId:(id)arg3 ;
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
-(id)viewFlattenedGroups;
-(void)encodeWithCoder:(id)arg0 ;
-(void)logCollapsedPreview;
-(void)logCollapsedPreviewWithTimestamp:(CGFloat)arg0 ;
-(void)logScheduledView;
-(void)logScheduledViewWithTimestamp:(CGFloat)arg0 ;
-(void)logUpcomingView;
-(void)logUpcomingViewWithTimestamp:(CGFloat)arg0 ;


@end


#endif