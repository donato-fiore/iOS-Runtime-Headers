// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC33ICLOUDSUBSCRIPTIONOPTIMIZERCLIENT27NOTIFICATIONPENDINGRESPONSE_H
#define _TTC33ICLOUDSUBSCRIPTIONOPTIMIZERCLIENT27NOTIFICATIONPENDINGRESPONSE_H

@class NSString;


#import "ISONotificationPendingResponse.h"

@interface _TtC33iCloudSubscriptionOptimizerClient27NotificationPendingResponse : ISONotificationPendingResponse {
    ? responseError;
    ? maxDelayTsMillis;
}


@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *description;


-(BOOL)isNotificationPending;
-(id)error;
-(id)init;
-(id)maxDelayTimestampMillis;


@end


#endif