// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSPASSWORDBREACHMANAGER_H
#define WBSPASSWORDBREACHMANAGER_H

@class WBSPasswordBreachContext, WBSPasswordBreachChecker, WBSPasswordBreachResults, WBSPasswordBreachQueuedPasswordBagManager;
@protocol OS_os_transaction, WBSPasswordBreachCredentialSource;

#import <Foundation/Foundation.h>


@interface WBSPasswordBreachManager : NSObject {
    os_unfair_lock_s _lock;
    NSObject<OS_os_transaction> *_sessionTransaction;
    WBSPasswordBreachContext *_context;
    id<WBSPasswordBreachCredentialSource> *_credentialSource;
    WBSPasswordBreachChecker *_checker;
    WBSPasswordBreachResults *_results;
    WBSPasswordBreachQueuedPasswordBagManager *_bagManager;
}




+(BOOL)isPasswordBreachDetectionOn;
+(id)testableManagerWithTestCredentialSource:(id)arg0 store:(id)arg1 configuration:(id)arg2 ;
+(void)_getStandardContextWithCompletionHandler:(id)arg0 ;
+(void)getSharedManagerWithCompletionHandler:(id)arg0 ;
+(void)setPasswordBreachDetectionOn:(BOOL)arg0 ;
-(BOOL)_canPerformSessionIgnoringMinimumDelay:(BOOL)arg0 ;
-(id)_checker;
-(id)initWithContext:(id)arg0 credentialSource:(id)arg1 ;
-(id)recentlyBreachedResultRecords;
-(id)recentlyBreachedSavedAccounts;
-(id)resultRecordsForQueries:(id)arg0 ;
-(void)_addRecentlyBreachedNotificationIfNecessaryWithCompletionHandler:(id)arg0 ;
-(void)_completeSessionWithResults:(id)arg0 completionHandler:(id)arg1 ;
-(void)_showActiveWarningsIfNecessaryWithInitialBagFillState:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)addResultRecords:(id)arg0 ;
-(void)clearAllRecordsWithCompletionHandler:(id)arg0 ;
-(void)clearRecentlyBreachedResultRecords;
-(void)performNextSessionLookupIgnoringMinimumDelay:(BOOL)arg0 completionHandler:(id)arg1 ;


@end


#endif