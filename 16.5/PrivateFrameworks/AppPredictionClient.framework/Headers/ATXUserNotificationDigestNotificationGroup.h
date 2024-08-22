// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXUSERNOTIFICATIONDIGESTNOTIFICATIONGROUP_H
#define ATXUSERNOTIFICATIONDIGESTNOTIFICATIONGROUP_H

@class NSString, NSArray, NSUUID;
@protocol NSSecureCoding, ATXProtoBufWrapper, ATXJSONSerializableProtocol;

#import <Foundation/Foundation.h>

#import "ATXSharedDigestEngagementTrackingMetrics.h"

@interface ATXUserNotificationDigestNotificationGroup : NSObject <NSSecureCoding, ATXProtoBufWrapper, ATXJSONSerializableProtocol>



@property (readonly, nonatomic) CGFloat appSpecifiedScore;
@property (readonly, nonatomic) NSString *bundleId;
@property (retain, nonatomic) ATXSharedDigestEngagementTrackingMetrics *digestEngagementTrackingMetrics; // ivar: _digestEngagementTrackingMetrics
@property (copy, nonatomic) NSString *groupDescription; // ivar: _groupDescription
@property (readonly, nonatomic) NSString *groupId; // ivar: _groupId
@property (nonatomic) CGFloat priority; // ivar: _priority
@property (readonly, nonatomic) NSArray *rankedNotifications; // ivar: _rankedNotifications
@property (retain, nonatomic) NSUUID *representativeNotificationUUID; // ivar: _representativeNotificationUUID
@property (copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
+(id)groupsFromNotifications:(id)arg0 modeId:(id)arg1 ;
+(id)groupsFromProtos:(id)arg0 ;
+(id)protosFromGroups:(id)arg0 ;
-(BOOL)hasPreviewableAttachment;
-(BOOL)isCommunicationGroup;
-(id)encodeAsProto;
-(id)init;
-(id)initFromJSON:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNotifications:(id)arg0 ;
-(id)initWithNotifications:(id)arg0 modeId:(id)arg1 ;
-(id)initWithNotifications:(id)arg0 useDigestOrder:(BOOL)arg1 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)jsonRepresentation;
-(id)proto;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif