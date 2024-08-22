// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDREMOTECONTENTMANAGER_H
#define EDREMOTECONTENTMANAGER_H

@class NSBackgroundActivityScheduler, ECRemoteContentParser, EFCancelationToken, EFLocked, NSLock, NSDate, EMRemoteContentURLSession;
@protocol EFScheduler, EDRemoteContentManagerTestDelegate;

#import <Foundation/Foundation.h>

#import "EDRemoteContentPersistence.h"

@interface EDRemoteContentManager : NSObject {
    NSBackgroundActivityScheduler *_requestScheduler;
    id<EFScheduler> *_unconditionalRequestScheduler;
    NSUInteger _remainingCountToSchedule;
    os_unfair_lock_s _requestSchedulerLock;
    ECRemoteContentParser *_remoteContentParser;
    os_unfair_lock_s _remoteContentParserLock;
    os_unfair_lock_s _timeoutLock;
    os_unfair_lock_s _schedulingLock;
    EFCancelationToken *_token;
    EFCancelationToken *_contentRuleListsObservationToken;
    EFLocked *_currentContentRuleLists;
    EFLocked *_remoteLinkVerificationTimes;
}


@property (readonly, nonatomic) NSObject<EFScheduler> *backgroundWorkScheduler; // ivar: _backgroundWorkScheduler
@property (nonatomic) NSUInteger batchSize; // ivar: _batchSize
@property (nonatomic) CGFloat maximumTimeout; // ivar: _maximumTimeout
@property (nonatomic) CGFloat minimumTimeout; // ivar: _minimumTimeout
@property (nonatomic) NSUInteger pruneFrequency; // ivar: _pruneFrequency
@property (readonly, nonatomic) ECRemoteContentParser *remoteContentParser;
@property (readonly, nonatomic) EDRemoteContentPersistence *remoteContentPersistence; // ivar: _remoteContentPersistence
@property (nonatomic) CGFloat requestInterval; // ivar: _requestInterval
@property (readonly, nonatomic) NSLock *requestLock; // ivar: _requestLock
@property (copy, nonatomic) id *requestSchedulerBlock; // ivar: _requestSchedulerBlock
@property (nonatomic) NSUInteger requestedSinceLastPrune; // ivar: _requestedSinceLastPrune
@property (retain, nonatomic) NSDate *schedulingLastUpdate; // ivar: _schedulingLastUpdate
@property (weak, nonatomic) NSObject<EDRemoteContentManagerTestDelegate> *testDelegate; // ivar: _testDelegate
@property (retain, nonatomic) NSDate *timeoutLastUpdate; // ivar: _timeoutLastUpdate
@property (readonly, nonatomic) NSObject<EFScheduler> *unconditionalRequestScheduler;
@property (readonly, nonatomic) EMRemoteContentURLSession *urlSession; // ivar: _urlSession


-(BOOL)shouldAddRemoteContentLinksForMessage:(id)arg0 logMessage:(*id)arg1 ;
-(BOOL)shouldAddRemoteContentLinksForMessageWithDateReceived:(id)arg0 ;
-(BOOL)shouldVerifyRemoteLinks;
-(CGFloat)_getTimeout;
// -(NSUInteger)_performRequests:(NSUInteger)arg0 unconditionally:(BOOL)arg1 withDeferBlock:(id)arg2 completedCount:(unk)arg3  ;
-(NSUInteger)_requestRemoteLinksInBackground:(NSUInteger)arg0 unconditionally:(BOOL)arg1 hasMoreLinks:(*BOOL)arg2 deferBlock:(id)arg3 ;
// -(id)_issueAndWaitForBatch:(id)arg0 deferBlock:(id)arg1 successful:(unk)arg2 failed:(*NSUInteger)arg3 canceled:(*NSUInteger)arg4 deferred:(*NSUInteger)arg5  ;
-(id)_requestSchedulerWithInterval:(CGFloat)arg0 ;
-(id)_viewDurationsFromBiome;
-(id)initWithRemoteContentPersistence:(id)arg0 contentRuleListManager:(id)arg1 urlSession:(id)arg2 ;
-(void)_addRemoteContentLinks:(id)arg0 andVerify:(BOOL)arg1 withHTMLData:(id)arg2 defaultCharsetName:(id)arg3 ;
-(void)_addRemoteContentLinks:(id)arg0 requiredParsing:(BOOL)arg1 ;
-(void)_scheduleBackgroundRequests;
-(void)_scheduleRequestForLinks:(NSUInteger)arg0 unconditionally:(BOOL)arg1 withDelay:(CGFloat)arg2 completionHandler:(id)arg3 ;
-(void)_setRemoteContentRuleLists:(id)arg0 ;
-(void)_updateScheduling;
-(void)_updateTimeoutSettingDefaultIfNeeded:(BOOL)arg0 ;
-(void)addRemoteContentLinks:(id)arg0 ;
-(void)addRemoteContentLinks:(id)arg0 andVerifyWithHTMLData:(id)arg1 defaultCharsetName:(id)arg2 ;
-(void)addRemoteContentLinksFromHTMLData:(id)arg0 ;
-(void)addRemoteContentLinksFromHTMLData:(id)arg0 defaultCharsetName:(id)arg1 ;
-(void)contentRuleListMangager:(id)arg0 didAddRuleList:(id)arg1 ;
-(void)contentRuleListMangager:(id)arg0 didRemoveRuleList:(id)arg1 ;
-(void)contentRuleListMangager:(id)arg0 didUpdateContentRuleList:(id)arg1 oldContentRuleList:(id)arg2 ;
-(void)dealloc;
-(void)noteViewOfRemoteContentLinks:(id)arg0 ;
-(void)scheduleRecurringActivity;
-(void)test_tearDown;


@end


#endif