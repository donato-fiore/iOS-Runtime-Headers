// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXINTERNALACTIONPREDICTIONUPDATENOTIFICATION_H
#define ATXINTERNALACTIONPREDICTIONUPDATENOTIFICATION_H


#import <Foundation/Foundation.h>

#import "_ATXInternalNotification.h"

@interface ATXInternalActionPredictionUpdateNotification : NSObject {
    _ATXInternalNotification *_note;
}




+(void)postNotificationWithCacheRefreshTTL:(CGFloat)arg0 reason:(NSUInteger)arg1 ;
-(id)init;
-(void)registerForNotificationsWithUpdateBlock:(id)arg0 ;


@end


#endif