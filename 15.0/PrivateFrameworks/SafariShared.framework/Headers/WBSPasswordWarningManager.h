// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSPASSWORDWARNINGMANAGER_H
#define WBSPASSWORDWARNINGMANAGER_H

@class WBSSavedPasswordStore, NSUserDefaults, NSMutableSet, NSArray, NSMapTable, NSString, WBSSavedPasswordAuditor;
@protocol WBSRemotePlistControllerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WBSHistory.h"
#import "WBSPasswordEvaluator.h"
#import "WBSPasswordWarningTopFraudTargetsManager.h"
#import "WBSPasswordBreachHelperProxy.h"

@interface WBSPasswordWarningManager : NSObject <WBSRemotePlistControllerDelegate>

 {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    WBSHistory *_historyStore;
    os_unfair_lock_s _passwordEvaluatorLock;
    WBSPasswordEvaluator *_passwordEvaluator;
    WBSSavedPasswordStore *_passwordStore;
    NSUserDefaults *_userDefaults;
    WBSPasswordWarningTopFraudTargetsManager *_topFraudTargetsManager;
    WBSPasswordBreachHelperProxy *_passwordBreachHelperProxy;
    NSMutableSet *_historyHighLevelDomains;
    os_unfair_lock_s _cachedDataLock;
    BOOL _updateInProgress;
    NSArray *_cachedWarnings;
    NSMapTable *_cachedWarningsForSavedPasswords;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasUnacknowledgedHighPriorityWarnings;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger numberOfWarningsWithSpecifiedPriority;
@property (readonly, nonatomic) WBSSavedPasswordAuditor *passwordAuditor; // ivar: _passwordAuditor
@property (readonly, nonatomic) WBSPasswordEvaluator *passwordEvaluator;
@property (readonly) Class superclass;


-(BOOL)_historyContainsItemForDomain:(id)arg0 ;
-(NSInteger)_scoreForSavedPassword:(id)arg0 issueTypes:(NSUInteger)arg1 topFraudTargets:(id)arg2 contextKitCategories:(NSInteger)arg3 ;
-(NSUInteger)_issuesForPassword:(id)arg0 withWeakPasswordEvaluation:(id)arg1 breachResultRecord:(id)arg2 ;
-(id)_passwordBreachHelperProxy;
-(id)_scoredWarningForSavedPassword:(id)arg0 topFraudTargets:(id)arg1 contextKitCategories:(NSInteger)arg2 breachResultRecord:(id)arg3 ;
-(id)_warningForSavedPassword:(id)arg0 breachResultRecord:(id)arg1 ;
-(id)initWithSavedPasswordStore:(id)arg0 autoFillQuirksManager:(id)arg1 userDefaults:(id)arg2 history:(id)arg3 ;
-(void)_getBreachResultRecordsForPasswords:(id)arg0 startSessionIfNecessary:(BOOL)arg1 withCompletionHandler:(id)arg2 ;
-(void)_scoreWarnings:(id)arg0 contextKitCategoryMap:(id)arg1 topFraudTargets:(id)arg2 ;
-(void)_sortWarningsBySeverity:(id)arg0 intoHighPriorityBucket:(id)arg1 intoStandardPriorityBucket:(id)arg2 unspecifiedSeverityBucket:(id)arg3 savedPasswordMap:(id)arg4 highPriorityWarningHashes:(id)arg5 ;
-(void)_updateUserDefaultsWithWarningHashes:(id)arg0 ;
-(void)acknowledgeHighPriorityWarnings;
-(void)dealloc;
-(void)getAllWarningsForcingUpdate:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)getWarningForSavedPassword:(id)arg0 completionHandler:(id)arg1 ;
-(void)preWarmWarningsWithCompletionHandler:(id)arg0 ;
-(void)removeWarningForSavedPassword:(id)arg0 ;


@end


#endif