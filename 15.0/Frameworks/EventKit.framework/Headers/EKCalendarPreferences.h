// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKCALENDARPREFERENCES_H
#define EKCALENDARPREFERENCES_H

@class CalPreferences, NSString;
@protocol EKNotificationPreferences;

#import <Foundation/Foundation.h>


@interface EKCalendarPreferences : NSObject <EKNotificationPreferences>

 {
    CalPreferences *_preferences;
}


@property (retain) CalPreferences *calPreferences; // ivar: _calPreferences
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL invitationNotificationsDisabled;
@property (nonatomic) BOOL sharedCalendarNotificationsDisabled;
@property BOOL showDeclinedEventsEnabled;
@property (readonly) Class superclass;
@property BOOL timeToLeaveEnabled;


+(id)calendarPreferences;
-(BOOL)_checkedStateForDisabledOrCollapsedItemWithUID:(id)arg0 delegateID:(id)arg1 withKey:(id)arg2 ;
-(BOOL)checkedStateForCalendarWithUID:(id)arg0 delegateID:(id)arg1 ;
-(BOOL)expandedStateForTopLevelNodeWithUID:(id)arg0 ;
-(NSUInteger)_displayOrderForSourceWithIdentifier:(id)arg0 key:(id)arg1 ;
-(NSUInteger)displayOrderForAccountWithSourceIdentifier:(id)arg0 ;
-(NSUInteger)displayOrderForLocalGroupWithSourceIdentifier:(id)arg0 ;
-(id)_disabledOrCollapsedItemsForDelegateID:(id)arg0 withKey:(id)arg1 ;
-(id)_keyForDelegateID:(id)arg0 ;
-(id)disabledCalendarsForDelegateWithUID:(id)arg0 ;
-(id)disabledCalendarsForMainWindow;
-(id)displayOrderForAccounts;
-(id)init;
-(void)_updateDisplayOrderForSources:(id)arg0 key:(id)arg1 ;
-(void)_updateStateForDisabledOrCollapsedItemWithUID:(id)arg0 delegateID:(id)arg1 state:(BOOL)arg2 withKey:(id)arg3 withNotification:(id)arg4 ;
-(void)updateCheckedStateForCalendarWithUID:(id)arg0 delegateID:(id)arg1 state:(BOOL)arg2 ;
-(void)updateDisplayOrderForAccountsWithSourceIdentifiers:(id)arg0 ;
-(void)updateDisplayOrderForLocalGroupsWithSourceIdentifiers:(id)arg0 ;
-(void)updateExpandedStateForTopLevelNodeWithUID:(id)arg0 state:(BOOL)arg1 ;


@end


#endif