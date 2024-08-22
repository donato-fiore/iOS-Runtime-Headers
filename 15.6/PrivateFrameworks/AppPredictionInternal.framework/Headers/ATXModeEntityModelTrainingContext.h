// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXMODEENTITYMODELTRAININGCONTEXT_H
#define ATXMODEENTITYMODELTRAININGCONTEXT_H

@class NSMutableDictionary, NSMutableSet;

#import <Foundation/Foundation.h>


@interface ATXModeEntityModelTrainingContext : NSObject {
    NSMutableDictionary *_receiveEventsForNotificationIds;
    NSMutableSet *_notificationIdsWithUnknownReceiveEvents;
}




-(id)dkEventForNotificationReceiptWithNotificationId:(id)arg0 ;
-(id)init;
-(id)receiveEventForNotificationId:(id)arg0 ;


@end


#endif