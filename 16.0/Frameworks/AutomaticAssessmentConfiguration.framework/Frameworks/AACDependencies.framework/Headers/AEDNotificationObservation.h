// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AEDNOTIFICATIONOBSERVATION_H
#define AEDNOTIFICATIONOBSERVATION_H

@class NSString, NSNotificationCenter;
@protocol AEDObservation, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AEDNotificationObservation : NSObject <AEDObservation>

 {
    NSString *_notificationName;
    NSNotificationCenter *_notificationCenter;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject *_object;
    id *_notificationHandler;
}




-(void)dealloc;
-(void)invalidate;
-(void)notificationDidFire:(id)arg0 ;


@end


#endif