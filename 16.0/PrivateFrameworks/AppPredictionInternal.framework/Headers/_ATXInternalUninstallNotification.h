// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ATXINTERNALUNINSTALLNOTIFICATION_H
#define _ATXINTERNALUNINSTALLNOTIFICATION_H


#import <Foundation/Foundation.h>

#import "_ATXInternalNotification.h"

@interface _ATXInternalUninstallNotification : NSObject {
    _ATXInternalNotification *_note;
}




+(void)postNotificationWithUninstallSet:(id)arg0 histogramBundleIdTable:(id)arg1 ;
-(id)init;
-(void)registerForNotificationsWithUninstallBlock:(id)arg0 ;


@end


#endif