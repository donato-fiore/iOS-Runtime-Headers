// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKEVENTATTENDEESEDITITEM_H
#define EKEVENTATTENDEESEDITITEM_H

@class EKParticipant, NSString, NSOperationQueue;


#import "EKEventEditItem.h"

@interface EKEventAttendeesEditItem : EKEventEditItem {
    EKParticipant *_selfOrganizer;
    NSString *_searchAccountID;
    NSOperationQueue *_availabilityQueue;
    NSInteger _numberOfConflicts;
}




+(id)_noneInviteesLocalizedString;
-(BOOL)canBeConfiguredForCalendarConstraints:(id)arg0 ;
-(BOOL)configureForCalendarConstraints:(id)arg0 ;
-(BOOL)editItemViewControllerSave:(id)arg0 ;
-(BOOL)forceRefreshInviteesItemOnSave;
-(BOOL)forceRefreshStartAndEndDatesOnSave;
-(BOOL)forceTableReloadOnSave;
-(BOOL)requiresReconfigurationOnSave;
-(BOOL)shouldAppearWithVisibility:(int)arg0 ;
-(id)attendeesWithoutSelfOrganizerAndLocations;
-(id)cellForSubitemAtIndex:(NSUInteger)arg0 ;
-(id)detailViewControllerWithFrame:(struct CGRect )arg0 forSubitemAtIndex:(NSUInteger)arg1 ;
-(id)init;
-(id)injectableViewControllerWithFrame:(struct CGRect )arg0 forSubitemAtIndex:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)editor:(id)arg0 didSelectSubitem:(NSUInteger)arg1 ;
-(void)refreshFromCalendarItemAndStore;


@end


#endif