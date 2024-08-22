// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AECONCRETESYSTEMNOTIFICATIONOBSERVATION_H
#define AECONCRETESYSTEMNOTIFICATIONOBSERVATION_H

@class NSString;
@protocol AEObservation, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AEConcreteSystemNotificationObservation : NSObject <AEObservation>

 {
    NSString *_notificationName;
    NSObject<OS_dispatch_queue> *_queue;
    id *_notificationHandler;
}




-(void)invalidate;


@end


#endif