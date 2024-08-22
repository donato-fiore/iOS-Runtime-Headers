// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTTIMELISTENER_H
#define MTTIMELISTENER_H

@class NSString;
@protocol MTAgentNotificationListener, OS_dispatch_queue, NAScheduler;

#import <Foundation/Foundation.h>

#import "MTObserverStore.h"

@interface MTTimeListener : NSObject <MTAgentNotificationListener>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MTObserverStore *observers; // ivar: _observers
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSObject<NAScheduler> *serializer; // ivar: _serializer
@property (readonly) Class superclass;


-(BOOL)handlesNotification:(id)arg0 ofType:(NSInteger)arg1 ;
-(CGFloat)assertionTimeOutForNotification:(id)arg0 ofType:(NSInteger)arg1 ;
-(id)init;
-(id)initWithCallbackScheduler:(id)arg0 ;
-(void)handleNotification:(id)arg0 ofType:(NSInteger)arg1 completion:(id)arg2 ;
-(void)registerObserver:(id)arg0 ;


@end


#endif