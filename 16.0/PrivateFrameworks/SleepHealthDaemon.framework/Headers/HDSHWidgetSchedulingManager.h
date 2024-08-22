// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSHWIDGETSCHEDULINGMANAGER_H
#define HDSHWIDGETSCHEDULINGMANAGER_H

@class HDProfile, HKSPThrottler, HKSPSleepStore, NSString;
@protocol HDHealthDaemonReadyObserver, HDDataObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HDSHWidgetSchedulingManager : NSObject <HDHealthDaemonReadyObserver, HDDataObserver>

 {
    HDProfile *_profile;
    HKSPThrottler *_reloadThrottler;
    HKSPSleepStore *_sleepStore;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)_logSleepSampleStatistics:(id)arg0 ;
-(id)initWithProfile:(id)arg0 ;
-(void)_reloadWidgetsWithReasons:(NSUInteger)arg0 ;
-(void)_startObservingSleep;
-(void)_stopObservingSleep;
-(void)daemonReady:(id)arg0 ;
-(void)dealloc;
-(void)samplesAdded:(id)arg0 anchor:(id)arg1 ;


@end


#endif