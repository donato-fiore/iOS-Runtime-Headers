// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXNOTIFICATIONSETTINGSLOGGER_H
#define ATXNOTIFICATIONSETTINGSLOGGER_H

@class ATXNotificationSettingsReader;

#import <Foundation/Foundation.h>


@interface ATXNotificationSettingsLogger : NSObject {
    ATXNotificationSettingsReader *_reader;
}




-(id)init;
-(id)initWithNotificationSettingsReader:(id)arg0 ;
-(void)logNotificationSettingsMetrics;
-(void)logNotificationSettingsMetricsWithXPCActivity:(id)arg0 ;


@end


#endif