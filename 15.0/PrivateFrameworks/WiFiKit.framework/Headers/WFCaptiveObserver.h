// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCAPTIVEOBSERVER_H
#define WFCAPTIVEOBSERVER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WFCaptiveObserver : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *captiveNotificationQueue; // ivar: _captiveNotificationQueue
@property (nonatomic) int endCaptiveNotificationToken; // ivar: _endCaptiveNotificationToken
@property (copy, nonatomic) id *eventHandler; // ivar: _eventHandler
@property (nonatomic, getter=isObserving) BOOL observing; // ivar: _observing
@property (nonatomic) int startCaptiveNotificationToken; // ivar: _startCaptiveNotificationToken


-(id)init;
-(void)dealloc;
-(void)startObservingEvents;
-(void)stopObservingEvents;


@end


#endif