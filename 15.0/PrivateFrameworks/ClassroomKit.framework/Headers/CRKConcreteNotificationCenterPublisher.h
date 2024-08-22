// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKCONCRETENOTIFICATIONCENTERPUBLISHER_H
#define CRKCONCRETENOTIFICATIONCENTERPUBLISHER_H

@protocol CRKNotificationCenterPublisher;

#import <Foundation/Foundation.h>


@interface CRKConcreteNotificationCenterPublisher : NSObject <CRKNotificationCenterPublisher>





-(id)subscribeToNotificationWithName:(id)arg0 handler:(id)arg1 ;


@end


#endif