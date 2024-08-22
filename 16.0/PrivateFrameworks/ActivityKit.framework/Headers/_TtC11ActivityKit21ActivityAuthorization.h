// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC11ACTIVITYKIT21ACTIVITYAUTHORIZATION_H
#define _TTC11ACTIVITYKIT21ACTIVITYAUTHORIZATION_H


#import <Foundation/Foundation.h>


@interface _TtC11ActivityKit21ActivityAuthorization : NSObject {
    ? observer;
    ? authorizationClient;
    ? lock;
}




-(BOOL)areActivitiesEnabledForBundleId:(id)arg0 ;
-(BOOL)setActivitiesWithEnabled:(BOOL)arg0 forBundleId:(id)arg1 error:(*id)arg2 ;
-(BOOL)supportsActivitiesForBundleId:(id)arg0 ;
-(id)init;


@end


#endif