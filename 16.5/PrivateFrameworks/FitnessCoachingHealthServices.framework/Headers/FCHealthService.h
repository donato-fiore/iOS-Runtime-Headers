// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCHEALTHSERVICE_H
#define FCHEALTHSERVICE_H

@class FCCDateProvider, FCCXPCActivityScheduler, HDProfile, NSString;
@protocol FCGoalCompletionCoordinatorDelegate, FCMoveModeCoordinatorDelegate, FCGoalProgressCoordinatorDelegate, HDHealthDaemonReadyObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "FCAppInstallationObserver.h"
#import "FCGoalCompletionActivitySummaryObserver.h"
#import "FCGoalCompletionCoordinator.h"
#import "FCGoalCompletionStore.h"
#import "FCGoalProgressCoordinator.h"
#import "FCGoalProgressDebouncer.h"
#import "FCGoalProgressStore.h"
#import "FCMoveModeCoordinator.h"
#import "FCTypicalDayProvider.h"

@interface FCHealthService : NSObject <FCGoalCompletionCoordinatorDelegate, FCMoveModeCoordinatorDelegate, FCGoalProgressCoordinatorDelegate, HDHealthDaemonReadyObserver>

 {
    FCAppInstallationObserver *_appInstallationObserver;
    FCCDateProvider *_dateProvider;
    FCGoalCompletionActivitySummaryObserver *_goalCompletionActivitySummaryObserver;
    FCGoalCompletionCoordinator *_goalCompletionCoordinator;
    FCGoalCompletionStore *_goalCompletionStore;
    FCGoalProgressCoordinator *_goalProgressCoordinator;
    FCGoalProgressDebouncer *_goalProgressDebouncer;
    FCCXPCActivityScheduler *_goalProgressScheduler;
    FCGoalProgressStore *_goalProgressStore;
    FCMoveModeCoordinator *_moveModeCoordinator;
    HDProfile *_profile;
    int _sampleNotificationToken;
    BOOL _serviceEnabled;
    NSObject<OS_dispatch_queue> *_serviceQueue;
    int _standalonePhoneNotificationToken;
    FCTypicalDayProvider *_typicalDayProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithProfile:(id)arg0 ;
-(void)_appInstallationChanged:(id)arg0 ;
-(void)_onqueue_registerForAppInstallationChange;
-(void)_onqueue_registerForStandalonePhoneModeChange;
-(void)_onqueue_updateService;
-(void)_postSampleNotification;
-(void)coordinator:(id)arg0 eventFiredWithContent:(id)arg1 ;
-(void)coordinator:(id)arg0 postGoalCompletionNotification:(id)arg1 ;
-(void)coordinator:(id)arg0 postMoveModeNotification:(id)arg1 ;
-(void)daemonReady:(id)arg0 ;
-(void)dealloc;
-(void)registerGoalProgressConfiguration:(id)arg0 completion:(id)arg1 ;


@end


#endif