// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKUIINVITEESVIEWORIGINALCONFLICTSECTION_H
#define EKUIINVITEESVIEWORIGINALCONFLICTSECTION_H

@class EKInviteeAlternativeTimeSearcher, NSArray, NSString, NSDate, NSMutableSet, NSTimeZone;
@protocol EKUIInviteesViewConflictResolutionSection;

#import <Foundation/Foundation.h>


@interface EKUIInviteesViewOriginalConflictSection : NSObject <EKUIInviteesViewConflictResolutionSection>



@property (retain, nonatomic) EKInviteeAlternativeTimeSearcher *availabilitySearcher; // ivar: _availabilitySearcher
@property (retain, nonatomic) NSArray *busyParticipants; // ivar: _busyParticipants
@property (retain, nonatomic) NSString *cachedCellReuseIdentifier; // ivar: _cachedCellReuseIdentifier
@property (nonatomic) BOOL checked; // ivar: _checked
@property (nonatomic) BOOL conflictFound; // ivar: _conflictFound
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *newTimeChosen; // ivar: _newTimeChosen
@property (nonatomic) NSUInteger reuseIdentifierVersion; // ivar: _reuseIdentifierVersion
@property (retain, nonatomic) NSMutableSet *rowsShowingAllParticipants; // ivar: _rowsShowingAllParticipants
@property (copy, nonatomic) id *showPreviewOfEventAtTime; // ivar: _showPreviewOfEventAtTime
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly) Class superclass;
@property (copy, nonatomic) id *tableViewCellHook; // ivar: _tableViewCellHook
@property (retain, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone
@property (retain, nonatomic) NSString *title; // ivar: _title


-(BOOL)_isValidRow:(NSInteger)arg0 ;
-(BOOL)canEditRow:(id)arg0 ;
-(BOOL)canSelectRow:(id)arg0 ;
-(BOOL)injectNewRowsBeforeLastExistingRow;
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
-(id)init;
-(id)titleForDeleteConfirmationButtonForRow:(id)arg0 ;
-(void)availabilitySearcherChangedState:(NSInteger)arg0 ;
-(void)cancelOutstandingOperations;
-(void)clearCheckmark;
-(void)commitEditingStyle:(NSInteger)arg0 forRow:(id)arg1 ;
-(void)refreshCellsAfterStateChange;
-(void)reloadAndRegisterReusableCellsWithTableView:(id)arg0 ;
-(void)selectRow:(id)arg0 ;


@end


#endif