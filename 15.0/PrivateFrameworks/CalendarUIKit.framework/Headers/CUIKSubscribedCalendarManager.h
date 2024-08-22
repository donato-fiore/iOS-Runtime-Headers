// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUIKSUBSCRIBEDCALENDARMANAGER_H
#define CUIKSUBSCRIBEDCALENDARMANAGER_H


#import <Foundation/Foundation.h>


@interface CUIKSubscribedCalendarManager : NSObject {
    NSUInteger _calendarSaveMonitoringToken;
    NSUInteger _accountsSaveMonitoringToken;
}




-(id)_accountDescriptionForCalendar:(id)arg0 ;
-(id)_createCalDAVChildSubCalAccountForCalendar:(id)arg0 inAccountStore:(id)arg1 ;
-(id)_createLocalSubCalAccountForCalendar:(id)arg0 inAccountStore:(id)arg1 ;
-(id)_createSubcalAccountForCalendar:(id)arg0 inAccountStore:(id)arg1 newAccountNeedsSaving:(*BOOL)arg2 ;
-(void)_saveAccount:(id)arg0 inStore:(id)arg1 updated:(BOOL)arg2 ;
-(void)_updateAccount:(id)arg0 inAccountStore:(id)arg1 withCalendar:(id)arg2 oldAccount:(id)arg3 newAccountDirty:(BOOL)arg4 newUsername:(id)arg5 newPassword:(id)arg6 newAllowsInsecureConnections:(BOOL)arg7 ;
-(void)restartDAAfterAccountUpdates;
-(void)restartDAAfterCalendarUpdates;
-(void)shutdownDAForAccountUpdates;
-(void)shutdownDAForCalendarUpdates;
-(void)updateOrCreateAccountWithCalendar:(id)arg0 previousAccountID:(id)arg1 newUsername:(id)arg2 newPassword:(id)arg3 newAllowsInsecureConnections:(BOOL)arg4 ;


@end


#endif