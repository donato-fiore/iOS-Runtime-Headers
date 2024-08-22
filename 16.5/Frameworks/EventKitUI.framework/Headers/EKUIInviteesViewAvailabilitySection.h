// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKUIINVITEESVIEWAVAILABILITYSECTION_H
#define EKUIINVITEESVIEWAVAILABILITYSECTION_H

@class NSString, EKEvent;
@protocol EKUIInviteesViewSection;

#import <Foundation/Foundation.h>


@interface EKUIInviteesViewAvailabilitySection : NSObject <EKUIInviteesViewSection>



@property (retain, nonatomic) NSString *cachedAvailabilityCellReuseIdentifier; // ivar: _cachedAvailabilityCellReuseIdentifier
@property (retain, nonatomic) NSString *cachedCellReuseIdentifier; // ivar: _cachedCellReuseIdentifier
@property (retain, nonatomic) NSString *cachedConflictCellReuseIdentifier; // ivar: _cachedConflictCellReuseIdentifier
@property (nonatomic) BOOL canSeeAttendeeStatuses; // ivar: _canSeeAttendeeStatuses
@property (nonatomic) BOOL checked; // ivar: _checked
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) EKEvent *event; // ivar: _event
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger reuseIdentifierVersion; // ivar: _reuseIdentifierVersion
@property (readonly) Class superclass;
@property (copy, nonatomic) id *tableViewCellHook; // ivar: _tableViewCellHook
@property (copy, nonatomic) id *viewAvailabilityTapped; // ivar: _viewAvailabilityTapped


-(BOOL)canEditRow:(id)arg0 ;
-(BOOL)canSelectRow:(id)arg0 ;
-(BOOL)sectionShouldBeShown;
-(BOOL)supportsContextMenuForIndexPath:(id)arg0 ;
-(CGFloat)estimatedHeightForRow:(id)arg0 ;
-(NSInteger)editingStyleForRow:(id)arg0 ;
-(NSUInteger)numberOfRows;
-(id)actionsForRow:(id)arg0 ;
-(id)cellForIndexPath:(id)arg0 inTableView:(id)arg1 ;
-(id)contextMenuDataForIndexPath:(id)arg0 interaction:(id)arg1 ;
-(id)debugTitle;
-(id)headerTitle;
-(id)titleForDeleteConfirmationButtonForRow:(id)arg0 ;
-(void)cancelOutstandingOperations;
-(void)commitEditingStyle:(NSInteger)arg0 forRow:(id)arg1 ;
-(void)reloadAndRegisterReusableCellsWithTableView:(id)arg0 ;
-(void)selectRow:(id)arg0 ;
-(void)updateWithEvent:(id)arg0 ;


@end


#endif