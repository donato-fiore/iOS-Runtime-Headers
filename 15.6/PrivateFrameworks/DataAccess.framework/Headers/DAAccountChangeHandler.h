// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DAACCOUNTCHANGEHANDLER_H
#define DAACCOUNTCHANGEHANDLER_H


#import <Foundation/Foundation.h>


@interface DAAccountChangeHandler : NSObject



+(BOOL)_handleAccountAddOrModify:(id)arg0 withChangeInfo:(id)arg1 inStore:(id)arg2 accountUpdater:(id)arg3 ;
+(BOOL)_handleCalDAVAccountModifiedByDataAccess:(id)arg0 withChangeInfo:(id)arg1 inStore:(id)arg2 accountUpdater:(id)arg3 ;
+(BOOL)_handleChangeToSubscribedCalendar:(id)arg0 withChangeInfo:(id)arg1 inStore:(id)arg2 accountUpdater:(id)arg3 ;
+(BOOL)_sanityCheckChildAccountOfType:(id)arg0 withParent:(id)arg1 accountChangeInfo:(id)arg2 inStore:(id)arg3 updater:(id)arg4 ;
+(BOOL)_sanityCheckChildDAVAccount:(id)arg0 withParent:(id)arg1 modifiedDataClasses:(id)arg2 ;
+(BOOL)_sanityCheckChildSubCalAccountsWithParent:(id)arg0 inStore:(id)arg1 accountUpdater:(id)arg2 ;
+(BOOL)_sanityCheckEnabledDataclassesOnExchangeAccountInfo:(id)arg0 ;
+(BOOL)_sanityCheckSubscribedCalendarAccountInfo:(id)arg0 ;
+(BOOL)_updateCalendarFromAccount:(id)arg0 ;
+(BOOL)_updateSubscribedCalendarAccountProperties:(id)arg0 ;
+(BOOL)handleAccountWillChange:(id)arg0 withChangeInfo:(id)arg1 store:(id)arg2 accountUpdater:(id)arg3 ;
+(id)_accountTypeWithIdentifier:(id)arg0 inStore:(id)arg1 ;
+(id)_findSubscribedCalendarForAccount:(id)arg0 inEventStore:(id)arg1 ;
+(id)_pickAccountToKeepWithAccount:(id)arg0 andAccount:(id)arg1 ;
+(id)_supportedChildAccountTypesForParentAccountType:(id)arg0 ;
+(void)_cleanupStoreForDisabledAccount:(id)arg0 inStore:(id)arg1 ;
+(void)_handleAccountDelete:(id)arg0 withChangeInfo:(id)arg1 inStore:(id)arg2 ;
+(void)_performBlockWithGenericClientDB:(id)arg0 ;
+(void)_sanityCheckCalDAVAccount:(id)arg0 modifiedDataClasses:(id)arg1 ;
+(void)_setupStoreForNewAccount:(id)arg0 ;
+(void)handleAccountDidChange:(id)arg0 withChangeInfo:(id)arg1 store:(id)arg2 ;


@end


#endif