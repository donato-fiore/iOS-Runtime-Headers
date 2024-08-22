// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKUIINVITEESVIEWPROPOSEDTIMESECTION_H
#define EKUIINVITEESVIEWPROPOSEDTIMESECTION_H

@class EKInviteeAlternativeTimeSearcher, NSArray, NSString, EKEvent, NSMutableOrderedSet, NSMutableSet;
@protocol EKUIInviteesViewConflictResolutionSection;

#import <Foundation/Foundation.h>


@interface EKUIInviteesViewProposedTimeSection : NSObject <EKUIInviteesViewConflictResolutionSection>



@property (retain, nonatomic) EKInviteeAlternativeTimeSearcher *availabilitySearcher; // ivar: _availabilitySearcher
@property (retain, nonatomic) NSArray *busyParticipants; // ivar: _busyParticipants
@property (retain, nonatomic) NSString *cachedCellReuseIdentifier; // ivar: _cachedCellReuseIdentifier
@property (nonatomic) NSInteger checkedRow; // ivar: _checkedRow
@property (nonatomic) BOOL conflictFound; // ivar: _conflictFound
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) EKEvent *event; // ivar: _event
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *newTimeChosen; // ivar: _newTimeChosen
@property (retain, nonatomic) NSArray *proposedTimeResults; // ivar: _proposedTimeResults
@property (retain, nonatomic) NSMutableOrderedSet *proposedTimes; // ivar: _proposedTimes
@property (nonatomic) NSUInteger reuseIdentifierVersion; // ivar: _reuseIdentifierVersion
@property (retain, nonatomic) NSMutableSet *rowsShowingAllParticipants; // ivar: _rowsShowingAllParticipants
@property (copy, nonatomic) id *showPreviewOfEventAtTime; // ivar: _showPreviewOfEventAtTime
@property (readonly) Class superclass;
@property (copy, nonatomic) id *tableViewCellHook; // ivar: _tableViewCellHook
@property (retain, nonatomic) NSString *title; // ivar: _title


-(BOOL)_isValidRow:(NSInteger)arg0 ;
-(BOOL)canEditRow:(id)arg0 ;
-(BOOL)canSelectRow:(id)arg0 ;
-(BOOL)injectNewRowsBeforeLastExistingRow;
-(BOOL)isRowChecked:(NSInteger)arg0 ;
-(BOOL)sectionShouldBeShown;
-(CGFloat)estimatedHeightForRow:(id)arg0 ;
-(NSInteger)editingStyleForRow:(id)arg0 ;
-(NSUInteger)numberOfRows;
-(id)actionsForRow:(id)arg0 ;
-(id)busyParticipantsForDate:(id)arg0 ;
-(id)cellForIndexPath:(id)arg0 inTableView:(id)arg1 ;
-(id)debugTitle;
-(id)headerTitle;
-(id)init;
-(id)namesForParticipantsProposingDate:(id)arg0 ;
-(id)titleForDeleteConfirmationButtonForRow:(id)arg0 ;
-(void)availabilitySearcherChangedState:(NSInteger)arg0 ;
-(void)cancelOutstandingOperations;
-(void)clearCheckmark;
-(void)commitEditingStyle:(NSInteger)arg0 forRow:(id)arg1 ;
-(void)refreshCellsAfterStateChange;
-(void)reloadAndRegisterReusableCellsWithTableView:(id)arg0 ;
-(void)selectRow:(id)arg0 ;
-(void)setChecked:(NSInteger)arg0 ;
-(void)updateWithEvent:(id)arg0 ;


@end


#endif