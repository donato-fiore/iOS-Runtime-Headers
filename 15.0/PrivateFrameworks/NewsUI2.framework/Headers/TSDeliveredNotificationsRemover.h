// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDELIVEREDNOTIFICATIONSREMOVER_H
#define TSDELIVEREDNOTIFICATIONSREMOVER_H

@protocol TSDeliveredNotificationsRemoverType;

#import <Foundation/Foundation.h>


@interface TSDeliveredNotificationsRemover : NSObject <TSDeliveredNotificationsRemoverType>

 {
    ? notificationService;
}




-(id)init;
-(void)removeDeliveredNotificationFor:(id)arg0 ;


@end


#endif