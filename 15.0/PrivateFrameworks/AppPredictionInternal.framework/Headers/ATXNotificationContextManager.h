// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXNOTIFICATIONCONTEXTMANAGER_H
#define ATXNOTIFICATIONCONTEXTMANAGER_H

@class ATXMotionManagerWrapper, ATXLocationManager;

#import <Foundation/Foundation.h>

#import "ATXNotificationsContentAnalyzer.h"
#import "_ATXAppLaunchCategoricalHistogram.h"
#import "_ATXAppLaunchHistogram.h"

@interface ATXNotificationContextManager : NSObject {
    ATXMotionManagerWrapper *_motionmanager;
    ATXLocationManager *_locationmanager;
    ATXNotificationsContentAnalyzer *_contentanalyzer;
    _ATXAppLaunchCategoricalHistogram *_notificationsHistory;
    _ATXAppLaunchHistogram *_appHistory;
}




+(id)sharedInstance;
+(void)appendContentFeaturesToMetadata:(id)arg0 features:(id)arg1 ;
+(void)appendLocationToMetadata:(id)arg0 locationType:(id)arg1 visits:(NSUInteger)arg2 ;
+(void)appendMotionToMetadata:(id)arg0 motion:(id)arg1 ;
+(void)appendNotificationHistoryToMetadata:(id)arg0 history:(id)arg1 ;
-(id)getNotificationHistoryForApp:(id)arg0 ;
-(id)init;
-(void)appendContextToMetadata:(id)arg0 ;


@end


#endif