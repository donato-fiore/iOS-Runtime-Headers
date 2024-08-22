// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AECONCRETESYSTEMNOTIFICATIONPRIMITIVES_H
#define AECONCRETESYSTEMNOTIFICATIONPRIMITIVES_H

@protocol AESystemNotificationPrimitives, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AEConcreteSystemNotificationPrimitives : NSObject <AESystemNotificationPrimitives>

 {
    NSObject<OS_dispatch_queue> *_queue;
}




-(id)observeAssessmentStateChangeWithHandler:(id)arg0 ;


@end


#endif