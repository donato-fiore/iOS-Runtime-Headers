// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ATXINTERNALINSTALLNOTIFICATION_H
#define _ATXINTERNALINSTALLNOTIFICATION_H


#import <Foundation/Foundation.h>

#import "_ATXInternalNotification.h"

@interface _ATXInternalInstallNotification : NSObject {
    _ATXInternalNotification *_note;
}




+(void)postNotificationWithInstallDictionary:(id)arg0 ;
-(id)init;
-(void)registerForNotificationsWithInstallBlock:(id)arg0 ;


@end


#endif