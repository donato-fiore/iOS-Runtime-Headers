// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACACTIVITYCENTER_H
#define ACACTIVITYCENTER_H


#import <Foundation/Foundation.h>

#import "_TtC11ActivityKit24ActivityCenterObjcBridge.h"

@interface ACActivityCenter : NSObject {
    _TtC11ActivityKit24ActivityCenterObjcBridge *_activityCenter;
}




-(BOOL)areActivitiesEnabled;
-(BOOL)isActivityActive:(id)arg0 ;
-(id)init;
-(id)observeActivitiesExceedingReducedPushBudgetWithHandler:(id)arg0 ;
-(id)observeContentUpdatesWithHandler:(id)arg0 ;
-(id)observeDescriptorsWithHandler:(id)arg0 ;
-(void)disableActivitiesWithBundleIdentifier:(id)arg0 ;
-(void)endActivity:(id)arg0 ;


@end


#endif