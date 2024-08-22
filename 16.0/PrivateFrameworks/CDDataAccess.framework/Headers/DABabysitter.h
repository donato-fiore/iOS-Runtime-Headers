// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DABABYSITTER_H
#define DABABYSITTER_H

@class NSString, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface DABabysitter : NSObject

@property (retain, nonatomic) NSString *buildVersion; // ivar: _buildVersion
@property (retain, nonatomic) NSMutableDictionary *l_failedWaiters; // ivar: _l_failedWaiters
@property (retain, nonatomic) NSMutableDictionary *l_refreshingWaiters; // ivar: _l_refreshingWaiters
@property (retain, nonatomic) NSMutableDictionary *l_restrictedWaiters; // ivar: _l_restrictedWaiters
@property (readonly, nonatomic) os_unfair_lock_s lock; // ivar: _lock


+(id)sharedBabysitter;
-(BOOL)accountShouldContinue:(id)arg0 ;
-(BOOL)accountWithIDShouldContinue:(id)arg0 ;
-(BOOL)registerAccount:(id)arg0 forOperationWithName:(id)arg1 ;
-(id)_init;
-(id)_populatedStringDictionaryWithWaitersDictionary:(id)arg0 ;
-(id)init;
-(id)tokenByRegisteringAccount:(id)arg0 forOperationWithName:(id)arg1 ;
-(void)_diagnosticReportWithWaiterID:(id)arg0 failureCount:(int)arg1 ;
-(void)_incrementRefreshCountForWaiterID:(id)arg0 operationName:(id)arg1 ;
-(void)_l_decrementRefreshCountForWaiter:(id)arg0 forOperationWithName:(id)arg1 ;
-(void)_l_decrementRefreshCountForWaiterID:(id)arg0 operationName:(id)arg1 ;
-(void)_l_giveAccountWithIDAnotherChance:(id)arg0 ;
-(void)_l_incrementRefreshCountForWaiterID:(id)arg0 operationName:(id)arg1 ;
-(void)_l_reloadBabysitterWaitersWithRefreshingWaitersPrefs:(id)arg0 failedWaitersPrefs:(id)arg1 restrictedWaitersPrefs:(id)arg2 ;
-(void)_reloadBabysitterProperties;
-(void)dealloc;
-(void)giveAccountWithIDAnotherChance:(id)arg0 ;
-(void)statusReportWithCompletionBlock:(id)arg0 ;
-(void)unregisterAccount:(id)arg0 forOperationWithName:(id)arg1 ;


@end


#endif