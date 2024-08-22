// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKCONCRETEDARWINNOTIFICATIONPUBLISHER_H
#define CRKCONCRETEDARWINNOTIFICATIONPUBLISHER_H

@protocol CRKDarwinNotificationPublisher;

#import <Foundation/Foundation.h>


@interface CRKConcreteDarwinNotificationPublisher : NSObject <CRKDarwinNotificationPublisher>





-(id)subscribeToNotificationWithName:(id)arg0 handler:(id)arg1 ;


@end


#endif