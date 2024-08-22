// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DAREFRESHMANAGER_H
#define DAREFRESHMANAGER_H

@class NSMutableDictionary, APSConnection, NSTimer, NSMutableSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DARefreshManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *apsConnections; // ivar: _apsConnections
@property (retain, nonatomic) APSConnection *connection; // ivar: _connection
@property (nonatomic) BOOL dailyRefreshInitialized; // ivar: _dailyRefreshInitialized
@property (retain, nonatomic) NSMutableDictionary *enabledTopicWrappersByEnv; // ivar: _enabledTopicWrappersByEnv
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *pcQueue; // ivar: _pcQueue
@property (nonatomic) BOOL persistAPSAfterShutdown; // ivar: _persistAPSAfterShutdown
@property (retain, nonatomic) NSMutableDictionary *suspendedTopicWrappersByEnv; // ivar: _suspendedTopicWrappersByEnv
@property (retain, nonatomic) NSTimer *tokenRegistrationTimer; // ivar: _tokenRegistrationTimer
@property (retain, nonatomic) NSMutableSet *wrappers; // ivar: _wrappers
@property (retain, nonatomic) NSMutableSet *wrappersForDailyRefresh; // ivar: _wrappersForDailyRefresh


+(id)sharedManager;
-(BOOL)_wrapperIsSuspended:(id)arg0 ;
-(id)_apsEnvStringForDAEnvString:(id)arg0 ;
-(id)_connectionForEnv:(id)arg0 ;
-(id)_enabledTopicsForWrapper:(id)arg0 ;
-(id)_portNameForEnvironmentName:(id)arg0 ;
-(id)_refreshWrapperForDelegate:(id)arg0 ;
-(id)_suspendedTopicsForWrapper:(id)arg0 ;
-(id)init;
-(id)pushTokenForEnvironment:(id)arg0 ;
-(id)stateString;
-(int)_currentTruePCStyleForDelegate:(id)arg0 ;
-(void)_dailyRefreshActivityFired;
-(void)_performBlockOnRefreshManagerThread:(id)arg0 ;
-(void)_pushRegistrationForDelegateFailed:(id)arg0 ;
-(void)_registerAPSTopics;
-(void)_registerAPSTopicsForDelegates:(id)arg0 withConnection:(id)arg1 ;
-(void)_resumeTopicsForSuspendedDelegate:(id)arg0 ;
-(void)_suspendTopicsForDelegate:(id)arg0 ;
-(void)_tearDownAPS;
-(void)_tearDownAllApsConnections;
-(void)_unregisterTopicLocked:(id)arg0 forDelegate:(id)arg1 inEnvironment:(id)arg2 ;
-(void)_unregisterWrapper:(id)arg0 forTopic:(id)arg1 inTopicDictionary:(id)arg2 ;
-(void)connection:(id)arg0 didReceiveMessageForTopic:(id)arg1 userInfo:(id)arg2 ;
-(void)connection:(id)arg0 didReceivePublicToken:(id)arg1 ;
-(void)dealloc;
-(void)delegateDidCompleteRefresh:(id)arg0 ;
-(void)endDailyRefreshActivityForWrapper:(id)arg0 ;
-(void)establishAllApsConnections;
-(void)pushPreferenceDidChange;
-(void)registerDelegate:(id)arg0 ;
-(void)registerTopic:(id)arg0 forDelegate:(id)arg1 inEnvironment:(id)arg2 ;
-(void)retryRefreshForDelegate:(id)arg0 withCollections:(id)arg1 after:(CGFloat)arg2 originalRefreshReason:(int)arg3 ;
-(void)startDailyRefreshActivityForWrapper:(id)arg0 ;
-(void)unregisterDelegate:(id)arg0 ;
-(void)unregisterTopic:(id)arg0 forDelegate:(id)arg1 inEnvironment:(id)arg2 ;


@end


#endif