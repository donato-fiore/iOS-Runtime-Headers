// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11ACTIVITYKIT24ACTIVITYCENTEROBJCBRIDGE_H
#define _TTC11ACTIVITYKIT24ACTIVITYCENTEROBJCBRIDGE_H


#import <Foundation/Foundation.h>


@interface _TtC11ActivityKit24ActivityCenterObjcBridge : NSObject {
    ? _activityCenter;
    ? queue;
    ? latestActivityContentUpdateByIdentifier;
}


@property (nonatomic, readonly) BOOL areActivitiesEnabled;


+(id)shared;
-(BOOL)isActivityActiveWithIdentifier:(id)arg0 ;
-(id)init;
-(id)observeActivitiesExceedingReducedPushBudgetWithHandler:(id)arg0 ;
-(id)observeActivityContentUpdatesWithHandler:(id)arg0 ;
-(id)observeDescriptorsWithHandler:(id)arg0 ;
-(void)disableActivitiesWithBundleIdentifier:(id)arg0 ;
-(void)endActivity:(id)arg0 ;


@end


#endif