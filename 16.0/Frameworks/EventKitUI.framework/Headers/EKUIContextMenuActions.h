// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKUICONTEXTMENUACTIONS_H
#define EKUICONTEXTMENUACTIONS_H


#import <Foundation/Foundation.h>


@interface EKUIContextMenuActions : NSObject



+(BOOL)_canEmailOrganizerForEvent:(id)arg0 ;
+(BOOL)eventsAllDeletable:(id)arg0 ;
+(NSInteger)_menuStateForStatus:(NSInteger)arg0 events:(id)arg1 ;
+(NSInteger)statusButtonsActionFromContextMenuAction:(NSUInteger)arg0 ;
+(id)_allActionInfos;
+(id)_createCalendarsMenuForEvents:(id)arg0 presentationController:(id)arg1 isEditMenu:(BOOL)arg2 overrideActionBlock:(id)arg3 ;
+(id)_filteredSortedActionInfosForEvents:(id)arg0 presentationController:(id)arg1 isEditMenu:(BOOL)arg2 ;
+(id)_organizerContactForEvent:(id)arg0 ;
+(id)_proposedDateForEvent:(id)arg0 ;
+(id)menuForEvents:(id)arg0 presentationController:(id)arg1 isEditMenu:(BOOL)arg2 overrideActionBlock:(id)arg3 ;
+(void)_acceptProposedTimeForEvent:(id)arg0 presentationController:(id)arg1 ;
+(void)_performSaveWithEvent:(id)arg0 span:(NSInteger)arg1 editor:(id)arg2 ;
+(void)_presentMailViewControllerSendingToOrganizer:(BOOL)arg0 event:(id)arg1 presentationController:(id)arg2 ;
+(void)_saveStatus:(NSInteger)arg0 forEvent:(id)arg1 presentationController:(id)arg2 ;
+(void)deleteEvents:(id)arg0 presentationController:(id)arg1 ;


@end


#endif