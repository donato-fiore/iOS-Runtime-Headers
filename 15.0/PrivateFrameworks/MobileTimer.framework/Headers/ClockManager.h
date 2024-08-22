// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLOCKMANAGER_H
#define CLOCKMANAGER_H


#import <Foundation/Foundation.h>


@interface ClockManager : NSObject



+(void)loadUserPreferences;
+(void)saveAndNotifyForUserPreferences:(BOOL)arg0 localNotifications:(BOOL)arg1 ;


@end


#endif