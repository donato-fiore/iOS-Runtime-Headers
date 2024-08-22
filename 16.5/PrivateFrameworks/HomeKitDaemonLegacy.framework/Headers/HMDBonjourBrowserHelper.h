// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDBONJOURBROWSERHELPER_H
#define HMDBONJOURBROWSERHELPER_H

@class HMFObject, NSMutableArray, NSString, NSMutableDictionary, NSDictionary, NSArray, HMFTimer;
@protocol HMFNetServiceBrowserDelegate, HMFTimerDelegate, OS_dispatch_queue;



@interface HMDBonjourBrowserHelper : HMFObject <HMFNetServiceBrowserDelegate, HMFTimerDelegate>

 {
    os_unfair_lock_s _lock;
}


@property (retain, nonatomic) NSMutableArray *browsers; // ivar: _browsers
@property (retain, nonatomic) NSMutableArray *browsingCompletions; // ivar: _browsingCompletions
@property (nonatomic) CGFloat browsingInterval; // ivar: _browsingInterval
@property (nonatomic) CGFloat browsingPeriodicity; // ivar: _browsingPeriodicity
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *internalDiscoveredServices; // ivar: _internalDiscoveredServices
@property (retain, nonatomic) NSDictionary *latestDiscoveredServices; // ivar: _latestDiscoveredServices
@property (retain, nonatomic) NSArray *serviceTypes; // ivar: _serviceTypes
@property (readonly, nonatomic, getter=isStarted) BOOL started;
@property (nonatomic) NSUInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (retain, nonatomic) HMFTimer *timer; // ivar: _timer
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(BOOL)_startBrowsers;
-(NSUInteger)discoveredServicesCountForServiceType:(id)arg0 ;
-(id)initWithServicesOfTypes:(id)arg0 browsingTimeInterval:(CGFloat)arg1 browsingPeriodicity:(CGFloat)arg2 workQueue:(id)arg3 ;
-(void)_addBrowser:(id)arg0 ;
-(void)_removeBrowser:(id)arg0 ;
-(void)_stopBrowsers;
-(void)_updateTimerWithTimeout:(CGFloat)arg0 ;
-(void)netServiceBrowser:(id)arg0 didAddService:(id)arg1 ;
-(void)netServiceBrowser:(id)arg0 didRemoveService:(id)arg1 ;
-(void)netServiceBrowser:(id)arg0 didStopBrowsingWithError:(id)arg1 ;
-(void)startWithBrowsingCompletion:(id)arg0 ;
-(void)stop;
-(void)timerDidFire:(id)arg0 ;


@end


#endif