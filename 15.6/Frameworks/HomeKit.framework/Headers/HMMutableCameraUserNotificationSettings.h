// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMMUTABLECAMERAUSERNOTIFICATIONSETTINGS_H
#define HMMUTABLECAMERAUSERNOTIFICATIONSETTINGS_H

@class NSPredicate;


#import "HMCameraUserNotificationSettings.h"

@interface HMMutableCameraUserNotificationSettings : HMCameraUserNotificationSettings

@property (getter=isAccessModeChangeNotificationEnabled) BOOL accessModeChangeNotificationEnabled;
@property (getter=isReachabilityEventNotificationEnabled) BOOL reachabilityEventNotificationEnabled;
@property (copy) NSPredicate *smartBulletinBoardNotificationCondition;
@property (getter=isSmartBulletinBoardNotificationEnabled) BOOL smartBulletinBoardNotificationEnabled;
@property NSInteger version;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif