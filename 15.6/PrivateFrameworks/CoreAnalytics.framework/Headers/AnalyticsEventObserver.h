// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ANALYTICSEVENTOBSERVER_H
#define ANALYTICSEVENTOBSERVER_H

@protocol AnalyticsEventObserverDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AnalyticsEventObserver : NSObject {
    shared_ptr<(anonymous namespace)::EventObserverImpl> observer;
}


@property (weak, nonatomic) NSObject<AnalyticsEventObserverDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(BOOL)startObservingEventList:(id)arg0 ;
-(BOOL)startObservingEventList:(id)arg0 withErrorHandler:(id)arg1 ;
-(BOOL)stopObserving;
-(id)init;
-(void)dealloc;
-(void)setEventObserverDelegate:(id)arg0 queue:(id)arg1 ;


@end


#endif