// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDAPPSUBSCRIPTIONMANAGER_H
#define HDAPPSUBSCRIPTIONMANAGER_H

@class NSMutableSet, NSMutableDictionary, NSString;
@protocol HDDatabaseProtectedDataObserver, HDProfileReadyObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDProfile.h"
#import "HDBackgroundAppLauncher.h"
#import "HDBackgroundTaskScheduler.h"

@interface HDAppSubscriptionManager : NSObject <HDDatabaseProtectedDataObserver, HDProfileReadyObserver>

 {
    NSMutableSet *_observedDataTypeCodes;
    NSMutableDictionary *_outstandingLaunchesByBundleIdentifier;
    BOOL _shouldScheduleLaunches;
    int _backgroundAppRefreshNotifyToken;
    HDProfile *_profile;
    HDBackgroundAppLauncher *_backgroundAppLauncher;
    HDBackgroundTaskScheduler *_backgroundTaskScheduler;
    NSObject<OS_dispatch_queue> *_launchQueue;
    NSMutableDictionary *_pendingTypeCodesToAnchors;
    NSMutableDictionary *_launchTimers;
    NSMutableDictionary *_launchTimerLaunchTimes;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) id *unitTesting_backgroundAppRefreshStatusGenerator; // ivar: _unitTesting_backgroundAppRefreshStatusGenerator
@property (copy, nonatomic) id *unitTesting_launchEventHandler; // ivar: _unitTesting_launchEventHandler


-(BOOL)areSubscriptionsSupportedForDataTypeCode:(NSInteger)arg0 ;
-(BOOL)unitTesting_isAwaitingLaunchForBundleID:(id)arg0 anchor:(id)arg1 dataTypeCode:(NSInteger)arg2 ;
-(BOOL)unitTesting_isObservingDataTypeCode:(NSInteger)arg0 ;
-(id)init;
-(id)initWithProfile:(id)arg0 ;
-(void)_isBackgroundAppRefreshDisabledForBundleIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)ackForBundleID:(id)arg0 dataTypes:(id)arg1 anchor:(id)arg2 ackTime:(id)arg3 ;
-(void)database:(id)arg0 protectedDataDidBecomeAvailable:(BOOL)arg1 ;
-(void)dealloc;
-(void)profileDidBecomeReady:(id)arg0 ;
-(void)removeBundleID:(id)arg0 ;
-(void)removeSubscriptionForBundleID:(id)arg0 dataCode:(NSInteger)arg1 ;
-(void)setAnchor:(id)arg0 forDataCode:(NSInteger)arg1 ;
-(void)subscribeForBundleID:(id)arg0 dataCode:(NSInteger)arg1 frequencyInSeconds:(NSUInteger)arg2 appSDKVersion:(unsigned int)arg3 ;
-(void)unitTesting_synchronizeWithQueue;


@end


#endif