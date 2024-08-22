// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDDCLOUDKITSCHEDULEDACTIVITY_H
#define CDDCLOUDKITSCHEDULEDACTIVITY_H

@class NSNumber, NSUUID, NSDate;


#import "NSManagedObject.h"
#import "CDDCloudKitRegisteredClient.h"

@interface CDDCloudKitScheduledActivity : NSManagedObject

@property (nonatomic) NSUInteger activityType;
@property (retain, nonatomic) NSNumber *activityTypeNum;
@property (retain, nonatomic) NSUUID *activityUUID;
@property (retain, nonatomic) NSNumber *isUserRequestedBackupTask;
@property (retain, nonatomic) CDDCloudKitRegisteredClient *registeredClient;
@property (retain, nonatomic) NSDate *scheduledAt;


+(id)entityName;
-(id)xpcActivityCriteria;
-(void)populateFromCriteria:(id)arg0 ;


@end


#endif