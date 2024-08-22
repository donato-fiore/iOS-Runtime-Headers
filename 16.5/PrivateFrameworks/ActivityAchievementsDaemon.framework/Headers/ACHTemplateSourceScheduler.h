// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACHTEMPLATESOURCESCHEDULER_H
#define ACHTEMPLATESOURCESCHEDULER_H

@class ACHDatabaseAssertionClient, ACHAwardsClient, NSDate, NSString, NSCalendar, NSDictionary, HDProfile, NSSet;
@protocol HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver, ACHAchievementStoreObserving, ACHAchievementStoring, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ACHTemplateStore.h"

@interface ACHTemplateSourceScheduler : NSObject <HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver, ACHAchievementStoreObserving>

 {
    int _significantTimeChangeToken;
}


@property (readonly, nonatomic) NSUInteger _sourceCount;
@property (retain, nonatomic) NSObject<ACHAchievementStoring> *achievementStore; // ivar: _achievementStore
@property (nonatomic) BOOL achievementStoreDidFinishInitialFetch; // ivar: _achievementStoreDidFinishInitialFetch
@property (retain, nonatomic) ACHDatabaseAssertionClient *assertionClient; // ivar: _assertionClient
@property (retain, nonatomic) ACHAwardsClient *client; // ivar: _client
@property (retain, nonatomic) NSDate *currentDateOverride; // ivar: _currentDateOverride
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSCalendar *gregorianCalendar; // ivar: _gregorianCalendar
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL initialRunComplete; // ivar: _initialRunComplete
@property (retain, nonatomic) NSDictionary *lastRunDateByTemplateSourceIdentifier; // ivar: _lastRunDateByTemplateSourceIdentifier
@property (weak, nonatomic) HDProfile *profile; // ivar: _profile
@property (nonatomic) int protectedDataToken; // ivar: _protectedDataToken
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue
@property (nonatomic) BOOL shouldScheduleAfterInitialFetch; // ivar: _shouldScheduleAfterInitialFetch
@property (readonly) Class superclass;
@property (retain, nonatomic) NSSet *templateSources; // ivar: _templateSources
@property (retain, nonatomic) ACHTemplateStore *templateStore; // ivar: _templateStore


-(BOOL)_isProtectedDataAvailable;
-(BOOL)_queue_client_runTemplateSources:(id)arg0 requiringRunnableForDate:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)_queue_daemon_runTemplateSources:(id)arg0 requiringRunnableForDate:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)_queue_runTemplateSources:(id)arg0 requiringRunnableForDate:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)_runSynchronouslyWithError:(*id)arg0 ;
-(id)_currentDate;
-(id)_runnableSourcesInSources:(id)arg0 forDate:(id)arg1 calendar:(id)arg2 ;
-(id)initWithClient:(id)arg0 assertionClient:(id)arg1 templateStore:(id)arg2 achievementStore:(id)arg3 ;
-(id)initWithProfile:(id)arg0 templateStore:(id)arg1 achievementStore:(id)arg2 ;
-(void)_listenForSignificantTimeChanges;
-(void)_runAllTemplateSources;
-(void)_startUp;
-(void)achievementStore:(id)arg0 didAddAchievements:(id)arg1 ;
-(void)achievementStore:(id)arg0 didRemoveAchievements:(id)arg1 ;
-(void)achievementStore:(id)arg0 didUpdateAchievements:(id)arg1 ;
-(void)achievementStoreDidFinishInitialFetch:(id)arg0 ;
-(void)daemonReady:(id)arg0 ;
-(void)database:(id)arg0 protectedDataDidBecomeAvailable:(BOOL)arg1 ;
-(void)dealloc;
-(void)deregisterTemplateSource:(id)arg0 ;
-(void)registerTemplateSource:(id)arg0 ;
-(void)runImmediatelyForTemplateSource:(id)arg0 ;


@end


#endif