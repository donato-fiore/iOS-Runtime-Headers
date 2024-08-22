// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXINTERNALAPPREGISTRATIONNOTIFICATION_H
#define ATXINTERNALAPPREGISTRATIONNOTIFICATION_H


#import <Foundation/Foundation.h>

#import "_ATXInternalNotification.h"

@interface ATXInternalAppRegistrationNotification : NSObject {
    _ATXInternalNotification *_note;
}




+(void)postNotificationWithInstallDictionary:(id)arg0 ;
-(id)init;
-(void)registerForNotificationsWithRegisterBlock:(id)arg0 ;


@end


#endif