// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDOTAFEATUREAVAILABILITYMANAGER_H
#define HDOTAFEATUREAVAILABILITYMANAGER_H

@class TRIClient, HKObserverSet, NSString, NSUserDefaults;
@protocol HDHealthDaemonReadyObserver, OS_os_log, OS_dispatch_queue, TRINotificationToken;

#import <Foundation/Foundation.h>

#import "HDDaemon.h"

@interface HDOTAFeatureAvailabilityManager : NSObject <HDHealthDaemonReadyObserver>

 {
    HDDaemon *_daemon;
    TRIClient *_trialClient;
    HKObserverSet *_observers;
    NSObject<OS_os_log> *_loggingCategory;
    NSObject<OS_dispatch_queue> *_queue;
    id<TRINotificationToken> *_trialToken;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *factorPackID;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) id *unitTest_daemonReadyObserverDidFinish; // ivar: _unitTest_daemonReadyObserverDidFinish
@property (copy, nonatomic) NSString *unitTest_factorPath; // ivar: _unitTest_factorPath
@property (retain, nonatomic) NSUserDefaults *unitTest_legacyDisableAndExpiryDefaults; // ivar: _unitTest_legacyDisableAndExpiryDefaults


-(BOOL)downloadImmediatelyWithError:(*id)arg0 ;
-(id)disableAndExpiryConditionsDictionaryWithError:(*id)arg0 ;
-(id)featureAvailabilityInfoForFeature:(id)arg0 error:(*id)arg1 ;
-(id)initWithDaemon:(id)arg0 ;
-(void)_unitTest_refreshClientAndNotifyObservers;
-(void)daemonReady:(id)arg0 ;
-(void)dealloc;
-(void)downloadWithCompletion:(id)arg0 ;
-(void)registerObserver:(id)arg0 queue:(id)arg1 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif