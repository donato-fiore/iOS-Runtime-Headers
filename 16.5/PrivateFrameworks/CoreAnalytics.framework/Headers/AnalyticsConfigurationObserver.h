// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ANALYTICSCONFIGURATIONOBSERVER_H
#define ANALYTICSCONFIGURATIONOBSERVER_H

@protocol AnalyticsConfigurationObserverDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AnalyticsConfigurationObserver : NSObject {
    shared_ptr<(anonymous namespace)::ConfigurationObserverImpl> observer;
}


@property (weak, nonatomic) NSObject<AnalyticsConfigurationObserverDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(BOOL)startObservingConfigurationType:(id)arg0 ;
-(BOOL)stopObservingConfigurationType:(id)arg0 ;
-(id)init;
-(void)dealloc;
-(void)setConfigurationObserverDelegate:(id)arg0 queue:(id)arg1 ;


@end


#endif