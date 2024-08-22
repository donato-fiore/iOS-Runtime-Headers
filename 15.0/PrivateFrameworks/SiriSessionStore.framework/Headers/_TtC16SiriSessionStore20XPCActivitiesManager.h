// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC16SIRISESSIONSTORE20XPCACTIVITIESMANAGER_H
#define _TTC16SIRISESSIONSTORE20XPCACTIVITIESMANAGER_H


#import <Foundation/Foundation.h>


@interface _TtC16SiriSessionStore20XPCActivitiesManager : NSObject {
    ? activityQueue;
    ? xpcActivities;
    ? xpcActivitiesRegistered;
}




+(id)shared;
-(id)init;
-(void)manageXPCActivities;
-(void)notifySiriSettingWasToggled;


@end


#endif