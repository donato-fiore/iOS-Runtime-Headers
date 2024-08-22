// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXNOTIFICATIONCONTEXT_H
#define ATXNOTIFICATIONCONTEXT_H

@class NSDate, NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface ATXNotificationContext : NSObject

@property (retain, nonatomic) NSDate *activatedTime; // ivar: _activatedTime
@property (nonatomic) CGFloat appLaunchPopularity; // ivar: _appLaunchPopularity
@property (copy, nonatomic) NSDictionary *contentFeatures; // ivar: _contentFeatures
@property (copy, nonatomic) NSString *location; // ivar: _location
@property (nonatomic) NSInteger motion; // ivar: _motion
@property (nonatomic) CGFloat notificationsCleared; // ivar: _notificationsCleared
@property (nonatomic) CGFloat notificationsDefAction; // ivar: _notificationsDefAction
@property (nonatomic) CGFloat notificationsEngaged; // ivar: _notificationsEngaged
@property (nonatomic) CGFloat notificationsIgnored; // ivar: _notificationsIgnored
@property (nonatomic) CGFloat notificationsOrb; // ivar: _notificationsOrb
@property (nonatomic) CGFloat notificationsReceived; // ivar: _notificationsReceived
@property (nonatomic) CGFloat notificationsSuppAction; // ivar: _notificationsSuppAction
@property (nonatomic) CGFloat notificationsTapCoa; // ivar: _notificationsTapCoa
@property (nonatomic) BOOL stationary; // ivar: _stationary
@property (nonatomic) CGFloat totalLaunches; // ivar: _totalLaunches
@property (retain, nonatomic) NSDate *unlockedTime; // ivar: _unlockedTime
@property (nonatomic) NSUInteger visits; // ivar: _visits


-(id)initFromMetadata:(id)arg0 ;
-(id)pbmsg;
-(id)serializedToMetadata;


@end


#endif