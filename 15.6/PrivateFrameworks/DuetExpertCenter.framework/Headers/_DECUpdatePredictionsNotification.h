// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DECUPDATEPREDICTIONSNOTIFICATION_H
#define _DECUPDATEPREDICTIONSNOTIFICATION_H


#import <Foundation/Foundation.h>


@interface _DECUpdatePredictionsNotification : NSObject {
    id *_notificationToken;
}




+(void)postNotificationForPredictionCategory:(NSUInteger)arg0 consumerType:(NSUInteger)arg1 andRefreshTimeInterval:(CGFloat)arg2 ;
// +(void)runNotificationBlockForListenerCategory:(NSUInteger)arg0 notificationCategory:(NSUInteger)arg1 listenConsumerType:(NSUInteger)arg2 notificationConsumerType:(NSUInteger)arg3 updateTimeInterval:(CGFloat)arg4 currentDate:(id)arg5 withCachedDateGetter:(id)arg6 andUpdateBlock:(unk)arg7 finallyBlock:(id)arg8  ;
// -(id)initWithNotificationsForPredictionCategory:(NSUInteger)arg0 andConsumerType:(NSUInteger)arg1 withCachedDateGetter:(id)arg2 andUpdateBlock:(unk)arg3 finallyBlock:(id)arg4  ;
-(void)dealloc;


@end


#endif