// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSNOTIFICATIONSERVICE_H
#define TSNOTIFICATIONSERVICE_H

@protocol TSNotificationServiceLegacyType, UNUserNotificationCenterDelegate;

#import <Foundation/Foundation.h>


@interface TSNotificationService : NSObject <TSNotificationServiceLegacyType, UNUserNotificationCenterDelegate>

 {
    ? options;
}




-(id)init;
-(void)fetchNotificationSettingsWith:(id)arg0 ;


@end


#endif