// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDNANOHEALTHNOTIFICATION_H
#define HDNANOHEALTHNOTIFICATION_H


#import <Foundation/Foundation.h>

#import "HDNotificationManager.h"

@interface HDNanoHealthNotification : NSObject {
    HDNotificationManager *_notificationManager;
}




+(id)category;
-(NSUInteger)destinations;
-(id)body;
-(id)initWithNotificationManager:(id)arg0 ;
-(id)title;
-(void)triggerNotification;


@end


#endif