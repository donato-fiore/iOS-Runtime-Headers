// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REENGAGEMENTACHIEVEMENTENTRY_H
#define REENGAGEMENTACHIEVEMENTENTRY_H

@class NSManagedObject, NSString, NSDate, NSNumber;



@interface ReengagementAchievementEntry : NSManagedObject

@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSDate *lastReportedDate;
@property (copy, nonatomic) NSNumber *percentComplete;
@property (copy, nonatomic) NSString *playerID;


+(id)fetchRequest;


@end


#endif