// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXINTERNALACTIONPREDICTIONUPDATEDNOTIFICATION_H
#define ATXINTERNALACTIONPREDICTIONUPDATEDNOTIFICATION_H


#import <Foundation/Foundation.h>

#import "_ATXInternalNotification.h"

@interface ATXInternalActionPredictionUpdatedNotification : NSObject {
    _ATXInternalNotification *_note;
}




+(void)postNotification;
-(id)init;
-(void)registerForNotificationsWithUpdateBlock:(id)arg0 ;


@end


#endif