// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC23CONTEXTUALUNDERSTANDING25NOTIFICATIONCENTERMANAGER_H
#define _TTC23CONTEXTUALUNDERSTANDING25NOTIFICATIONCENTERMANAGER_H

@protocol UNUserNotificationCenterDelegate;

#import <Foundation/Foundation.h>


@interface _TtC23ContextualUnderstanding25NotificationCenterManager : NSObject <UNUserNotificationCenterDelegate>

 {
    ? notificationCenter;
    ? accept;
    ? reject;
    ? contact;
    ? stranger;
    ? contactAndStranger;
    ? nobody;
    ? evaluationDataCollectionCategory;
    ? labeledDataCollectionCategory;
}




-(?)userNotificationCenter:(?)arg0 didReceiveNotificationResponsewithCompletionHandler;
-(id)init;


@end


#endif