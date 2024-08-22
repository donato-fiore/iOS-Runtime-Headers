// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXINTERNALMAGICALMOMENTSAPPPREDICTIONNOTIFICATION_H
#define ATXINTERNALMAGICALMOMENTSAPPPREDICTIONNOTIFICATION_H


#import <Foundation/Foundation.h>

#import "_ATXInternalNotification.h"

@interface ATXInternalMagicalMomentsAppPredictionNotification : NSObject {
    _ATXInternalNotification *_note;
}




+(void)postNotificationWithPredictions:(id)arg0 ;
-(id)init;
-(void)registerForNotificationsWithBlock:(id)arg0 ;


@end


#endif