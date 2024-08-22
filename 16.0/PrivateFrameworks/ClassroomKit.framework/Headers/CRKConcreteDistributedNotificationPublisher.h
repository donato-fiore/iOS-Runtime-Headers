// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKCONCRETEDISTRIBUTEDNOTIFICATIONPUBLISHER_H
#define CRKCONCRETEDISTRIBUTEDNOTIFICATIONPUBLISHER_H

@class NSString;
@protocol CRKDistributedNotificationPublisher;

#import <Foundation/Foundation.h>


@interface CRKConcreteDistributedNotificationPublisher : NSObject <CRKDistributedNotificationPublisher>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)subscribeToNotificationWithName:(id)arg0 handler:(id)arg1 ;


@end


#endif