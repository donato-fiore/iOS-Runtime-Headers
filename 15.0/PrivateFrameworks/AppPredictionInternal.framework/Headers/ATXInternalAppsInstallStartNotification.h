// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXINTERNALAPPSINSTALLSTARTNOTIFICATION_H
#define ATXINTERNALAPPSINSTALLSTARTNOTIFICATION_H


#import <Foundation/Foundation.h>

#import "_ATXInternalNotification.h"

@interface ATXInternalAppsInstallStartNotification : NSObject {
    _ATXInternalNotification *_note;
}




+(void)postNotificationWithInstallStartDictionary:(id)arg0 ;
-(id)init;
-(void)registerForNotificationsWithInstallStartBlock:(id)arg0 ;


@end


#endif