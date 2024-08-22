// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STWEEKLYREPORTUSERNOTIFICATIONCONTEXT_H
#define STWEEKLYREPORTUSERNOTIFICATIONCONTEXT_H

@class NSString, NSNumber, NSData;


#import "STUserNotificationContext.h"

@interface STWeeklyReportUserNotificationContext : STUserNotificationContext

@property (nonatomic) CGFloat deltaScreenTimeUsage; // ivar: _deltaScreenTimeUsage
@property (retain, nonatomic) NSString *notificationBodyKey; // ivar: _notificationBodyKey
@property (copy, nonatomic) NSNumber *totalUsage; // ivar: _totalUsage
@property (retain, nonatomic) NSData *weeklyReportData; // ivar: _weeklyReportData


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)customizeNotificationContent:(id)arg0 withCompletionBlock:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif