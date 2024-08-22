// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSPASSWORDWARNINGMANAGER_H
#define WBSPASSWORDWARNINGMANAGER_H

@class NSUserDefaults, NSSet, NSArray, NSMapTable, NSString;
@protocol WBSRemotePlistControllerDelegate, OS_dispatch_queue, WBSHistoricalHighLevelDomainsProvider;

#import <Foundation/Foundation.h>

#import "WBSPasswordEvaluator.h"
#import "WBSSavedAccountStore.h"
#import "WBSPasswordWarningTopFraudTargetsManager.h"
#import "WBSPasswordBreachHelperProxy.h"
#import "WBSPasswordAuditor.h"

@interface WBSPasswordWarningManager : NSObject <WBSRemotePlistControllerDelegate>

 {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    os_unfair_lock_s _passwordEvaluatorLock;
    WBSPasswordEvaluator *_passwordEvaluator;
    WBSSavedAccountStore *_accountStore;
    NSUserDefaults *_userDefaults;
    WBSPasswordWarningTopFraudTargetsManager *_topFraudTargetsManager;
    WBSPasswordBreachHelperProxy *_passwordBreachHelperProxy;
    id<WBSHistoricalHighLevelDomainsProvider> *_historyHighLevelDomainsProvider;
    NSSet *_historyHighLevelDomains;
    os_unfair_lock_s _cachedDataLock;
    BOOL _updateInProgress;
    NSArray *_cachedWarnings;
    NSMapTable *_cachedWarningsForSavedAccounts;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasUnacknowledgedHighPriorityWarnings;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger numberOfNonHiddenWarningsWithSpecifiedPriority;
@property (readonly, nonatomic) WBSPasswordAuditor *passwordAuditor; // ivar: _passwordAuditor
@property (readonly, nonatomic) WBSPasswordEvaluator *passwordEvaluator;
@property (readonly) Class superclass;


-(BOOL)_historyContainsItemForDomain:(id)arg0 ;
-(NSInteger)_scoreForSavedAccount:(id)arg0 issueTypes:(NSUInteger)arg1 topFraudTargets:(id)arg2 contextKitCategories:(NSInteger)arg3 ;
-(NSUInteger)_issuesForPassword:(id)arg0 withWeakPasswordEvaluation:(id)arg1 breachResultRecord:(id)arg2 ;
-(id)_passwordBreachHelperProxy;
-(id)_scoredWarningForSavedAccount:(id)arg0 topFraudTargets:(id)arg1 contextKitCategories:(NSInteger)arg2 breachResultRecord:(id)arg3 ;
-(id)_warningForSavedAccount:(id)arg0 breachResultRecord:(id)arg1 ;
-(id)initWithSavedAccountStore:(id)arg0 autoFillQuirksManager:(id)arg1 userDefaults:(id)arg2 highLevelDomainsProvider:(id)arg3 ;
-(void)_getBreachResultRecordsForPasswords:(id)arg0 startSessionIfNecessary:(BOOL)arg1 withCompletionHandler:(id)arg2 ;
-(void)_scoreWarnings:(id)arg0 contextKitCategoryMap:(id)arg1 topFraudTargets:(id)arg2 ;
-(void)_sortWarningsBySeverity:(id)arg0 intoHighPriorityBucket:(id)arg1 intoStandardPriorityBucket:(id)arg2 unspecifiedSeverityBucket:(id)arg3 savedAccountMap:(id)arg4 highPriorityWarningHashes:(id)arg5 ;
-(void)_updateUserDefaultsWithWarningHashes:(id)arg0 ;
-(void)acknowledgeHighPriorityWarnings;
-(void)dealloc;
-(void)getAllWarningsForcingUpdate:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)getWarningForSavedAccount:(id)arg0 completionHandler:(id)arg1 ;
-(void)preWarmWarningsWithCompletionHandler:(id)arg0 ;
-(void)removeWarningForSavedAccount:(id)arg0 ;


@end


#endif