// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASNOTIFICATIONEVENT_H
#define ASNOTIFICATIONEVENT_H

@class NSDate, NSString, NSUUID;
@protocol ASCloudKitCodable;

#import <Foundation/Foundation.h>


@interface ASNotificationEvent : NSObject <ASCloudKitCodable>



@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSUUID *friendUUID; // ivar: _friendUUID
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger triggerSnapshotIndex; // ivar: _triggerSnapshotIndex
@property (retain, nonatomic) NSUUID *triggerUUID; // ivar: _triggerUUID
@property (nonatomic) NSInteger type; // ivar: _type


+(id)achievementCompletionEventWithAchievement:(id)arg0 ;
+(id)deletedWorkoutEventWithUUID:(id)arg0 ;
+(id)goalCompletionEventWithActivitySummary:(id)arg0 ;
+(id)notificationEventWithRecord:(id)arg0 friendUUID:(id)arg1 ;
+(id)workoutCompletionEventWithWorkout:(id)arg0 ;
-(id)recordWithZoneID:(id)arg0 ;


@end


#endif