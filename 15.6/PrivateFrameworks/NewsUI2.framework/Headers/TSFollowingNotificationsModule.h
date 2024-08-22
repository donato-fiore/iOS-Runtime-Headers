// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSFOLLOWINGNOTIFICATIONSMODULE_H
#define TSFOLLOWINGNOTIFICATIONSMODULE_H

@protocol TSBridgedFollowingNotificationsModuleType;

#import <Foundation/Foundation.h>


@interface TSFollowingNotificationsModule : NSObject <TSBridgedFollowingNotificationsModuleType>

 {
    ? resolver;
    ? tracker;
}




-(id)createViewController;
-(id)init;


@end


#endif