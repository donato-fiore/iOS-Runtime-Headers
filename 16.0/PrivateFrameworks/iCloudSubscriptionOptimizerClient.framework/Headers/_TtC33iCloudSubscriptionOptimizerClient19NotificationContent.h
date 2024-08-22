// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC33ICLOUDSUBSCRIPTIONOPTIMIZERCLIENT19NOTIFICATIONCONTENT_H
#define _TTC33ICLOUDSUBSCRIPTIONOPTIMIZERCLIENT19NOTIFICATIONCONTENT_H

@class NSString;


#import "ISONotificationContent.h"

@interface _TtC33iCloudSubscriptionOptimizerClient19NotificationContent : ISONotificationContent {
    ? context;
}


@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *description;


-(BOOL)shouldCallMlDaemon;
-(id)init;


@end


#endif