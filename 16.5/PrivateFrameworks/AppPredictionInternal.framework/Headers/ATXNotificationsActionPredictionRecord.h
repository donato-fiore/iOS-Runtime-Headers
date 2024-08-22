// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXNOTIFICATIONSACTIONPREDICTIONRECORD_H
#define ATXNOTIFICATIONSACTIONPREDICTIONRECORD_H

@class NSString;


#import "ATXNotificationsRecord.h"

@interface ATXNotificationsActionPredictionRecord : ATXNotificationsRecord {
    NSString *_actionPredBundleId;
}




-(BOOL)addEvent:(id)arg0 ;
-(BOOL)isMatchActionPredBundleId:(id)arg0 ;
-(NSInteger)determineEndingInteraction;
-(id)init;
-(id)initWithNotificationId:(id)arg0 timestamp:(id)arg1 ;


@end


#endif