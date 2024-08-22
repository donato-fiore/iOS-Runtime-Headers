// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALDEVICELOCKOBSERVER_H
#define CALDEVICELOCKOBSERVER_H

@class NSString;
@protocol CalDeviceLockObservable, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CalDarwinNotificationListener.h"

@interface CalDeviceLockObserver : NSObject <CalDeviceLockObservable>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasBeenUnlockedSinceBoot;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL internalHasBeenUnlockedSinceBoot; // ivar: _internalHasBeenUnlockedSinceBoot
@property (retain, nonatomic) CalDarwinNotificationListener *notificationListener; // ivar: _notificationListener
@property (copy, nonatomic) id *stateChangedCallback; // ivar: _stateChangedCallback
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)stateChangedNotificationName;
-(id)init;
-(id)initWithStateChangedCallback:(id)arg0 ;
-(void)_notificationReceived;


@end


#endif