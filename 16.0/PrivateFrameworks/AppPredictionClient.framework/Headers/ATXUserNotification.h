// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXUSERNOTIFICATION_H
#define ATXUSERNOTIFICATION_H

@class NSString, NSArray, NSData, NSUUID;
@protocol NSSecureCoding, ATXProtoBufWrapper, ATXJSONSerializableProtocol;

#import <Foundation/Foundation.h>

#import "ATXUserNotificationDerivedData.h"
#import "ATXSharedDigestEngagementTrackingMetrics.h"

@interface ATXUserNotification : NSObject <NSSecureCoding, ATXProtoBufWrapper, ATXJSONSerializableProtocol>



@property (nonatomic) CGFloat appSpecifiedScore; // ivar: _appSpecifiedScore
@property (nonatomic) NSInteger attachmentType; // ivar: _attachmentType
@property (nonatomic) NSUInteger badge; // ivar: _badge
@property (copy, nonatomic) NSString *body; // ivar: _body
@property (copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (copy, nonatomic) NSString *categoryID; // ivar: _categoryID
@property (copy, nonatomic) NSArray *contactIDs; // ivar: _contactIDs
@property (retain, nonatomic) ATXUserNotificationDerivedData *derivedData; // ivar: _derivedData
@property (retain, nonatomic) ATXSharedDigestEngagementTrackingMetrics *digestEngagementTrackingMetrics; // ivar: _digestEngagementTrackingMetrics
@property (nonatomic) BOOL isGroupMessage; // ivar: _isGroupMessage
@property (nonatomic) BOOL isMessage; // ivar: _isMessage
@property (copy, nonatomic) NSArray *rawIdentifiers; // ivar: _rawIdentifiers
@property (copy, nonatomic) NSString *sectionID; // ivar: _sectionID
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (copy, nonatomic) NSString *threadID; // ivar: _threadID
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) NSInteger urgency; // ivar: _urgency
@property (copy, nonatomic) NSData *userInfo; // ivar: _userInfo
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
-(BOOL)hasPreviewableAttachment;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXUserNotification:(id)arg0 ;
-(CGFloat)finalDigestScoreForMode:(id)arg0 ;
-(NSInteger)compareForDigestRanking:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)digestRankingHardcodedComparisonValue;
-(id)encodeAsProto;
-(id)groupId;
-(id)initFromJSON:(id)arg0 ;
-(id)initFromNotificationData:(id)arg0 date:(id)arg1 title:(id)arg2 subtitle:(id)arg3 body:(id)arg4 bundleID:(id)arg5 threadID:(id)arg6 categoryID:(id)arg7 ;
-(id)initFromNotificationData:(id)arg0 timestamp:(CGFloat)arg1 title:(id)arg2 subtitle:(id)arg3 body:(id)arg4 badge:(NSUInteger)arg5 userInfo:(id)arg6 bundleID:(id)arg7 threadID:(id)arg8 categoryID:(id)arg9 derivedData:(id)arg10 ;
-(id)initFromNotificationData:(id)arg0 timestamp:(CGFloat)arg1 title:(id)arg2 subtitle:(id)arg3 body:(id)arg4 badge:(NSUInteger)arg5 userInfo:(id)arg6 bundleID:(id)arg7 threadID:(id)arg8 categoryID:(id)arg9 sectionID:(id)arg10 contactIDs:(id)arg11 isGroupMessage:(BOOL)arg12 derivedData:(id)arg13 ;
-(id)initFromNotificationData:(id)arg0 timestamp:(CGFloat)arg1 title:(id)arg2 subtitle:(id)arg3 body:(id)arg4 badge:(NSUInteger)arg5 userInfo:(id)arg6 bundleID:(id)arg7 threadID:(id)arg8 categoryID:(id)arg9 sectionID:(id)arg10 contactIDs:(id)arg11 isGroupMessage:(BOOL)arg12 derivedData:(id)arg13 urgency:(NSInteger)arg14 ;
-(id)initFromNotificationData:(id)arg0 timestamp:(CGFloat)arg1 title:(id)arg2 subtitle:(id)arg3 body:(id)arg4 badge:(NSUInteger)arg5 userInfo:(id)arg6 bundleID:(id)arg7 threadID:(id)arg8 categoryID:(id)arg9 sectionID:(id)arg10 contactIDs:(id)arg11 rawIdentifiers:(id)arg12 isGroupMessage:(BOOL)arg13 derivedData:(id)arg14 urgency:(NSInteger)arg15 ;
-(id)initFromNotificationData:(id)arg0 timestamp:(CGFloat)arg1 title:(id)arg2 subtitle:(id)arg3 body:(id)arg4 badge:(NSUInteger)arg5 userInfo:(id)arg6 bundleID:(id)arg7 threadID:(id)arg8 derivedData:(id)arg9 ;
-(id)initFromNotificationData:(id)arg0 timestamp:(CGFloat)arg1 title:(id)arg2 subtitle:(id)arg3 body:(id)arg4 badge:(NSUInteger)arg5 userInfo:(id)arg6 bundleID:(id)arg7 threadID:(id)arg8 sectionID:(id)arg9 contactIDs:(id)arg10 isGroupMessage:(BOOL)arg11 derivedData:(id)arg12 urgency:(NSInteger)arg13 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)initWithUUID:(id)arg0 timestamp:(CGFloat)arg1 ;
-(id)jsonRepresentation;
-(id)proto;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif