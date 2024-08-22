// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKUIINVITEESVIEWALTERNATIVETIMESECTION_H
#define EKUIINVITEESVIEWALTERNATIVETIMESECTION_H

@class NSArray, EKInviteeAlternativeTimeSearcher, NSString, NSMutableSet, NSTimeZone;
@protocol EKUIInviteesViewConflictResolutionSection;

#import <Foundation/Foundation.h>


@interface EKUIInviteesViewAlternativeTimeSection : NSObject <EKUIInviteesViewConflictResolutionSection>



@property (retain, nonatomic) NSArray *alternativeTimes; // ivar: _alternativeTimes
@property (nonatomic) BOOL availabilityRequestInProgress; // ivar: _availabilityRequestInProgress
@property (retain, nonatomic) EKInviteeAlternativeTimeSearcher *availabilitySearcher; // ivar: _availabilitySearcher
@property (retain, nonatomic) NSString *cachedConflictSearchCellReuseIdentifier; // ivar: _cachedConflictSearchCellReuseIdentifier
@property (retain, nonatomic) NSString *cachedTimeCellReuseIdentifier; // ivar: _cachedTimeCellReuseIdentifier
@property (readonly, nonatomic) Class customTimeCellClass;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasCheckedRow; // ivar: _hasCheckedRow
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger initialNumberOfTimeSlotsToShow;
@property (nonatomic) BOOL initialSearchInProgress; // ivar: _initialSearchInProgress
@property (nonatomic) NSInteger lastCheckedRow; // ivar: _lastCheckedRow
@property (nonatomic) NSUInteger maximumNumberOfTimeSlotsToShow; // ivar: _maximumNumberOfTimeSlotsToShow
@property (copy, nonatomic) id *newTimeChosen; // ivar: _newTimeChosen
@property (nonatomic) NSUInteger reuseIdentifierVersion; // ivar: _reuseIdentifierVersion
@property (retain, nonatomic) NSMutableSet *rowsShowingAllParticipants; // ivar: _rowsShowingAllParticipants
@property (nonatomic) BOOL searchExhausted; // ivar: _searchExhausted
@property (nonatomic) BOOL searcherHasError; // ivar: _searcherHasError
@property (readonly, nonatomic) NSArray *searcherTimeSlots;
@property (readonly, nonatomic) BOOL searchingForMoreTimes;
@property (copy, nonatomic) id *showMoreAlternativeTimesTapped; // ivar: _showMoreAlternativeTimesTapped
@property (copy, nonatomic) id *showPreviewOfEventAtTime; // ivar: _showPreviewOfEventAtTime
@property (readonly) Class superclass;
@property (copy, nonatomic) id *tableViewCellHook; // ivar: _tableViewCellHook
@property (retain, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone


-(BOOL)_isConflictSearchRow:(NSInteger)arg0 ;
-(BOOL)_isValidRow:(NSInteger)arg0 ;
-(BOOL)canEditRow:(id)arg0 ;
-(BOOL)canSelectRow:(id)arg0 ;
-(BOOL)injectNewRowsBeforeLastExistingRow;
-(BOOL)sectionShouldBeShown;
-(BOOL)supportsContextMenuForIndexPath:(id)arg0 ;
-(CGFloat)estimatedHeightForRow:(id)arg0 ;
-(NSInteger)editingStyleForRow:(id)arg0 ;
-(NSUInteger)_numberOfTimeSlotsShown;
-(NSUInteger)numberOfRows;
-(id)_alternativeTimeAtIndex:(NSInteger)arg0 ;
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
-(void)searchForMoreTimes;
-(void)selectRow:(id)arg0 ;


@end


#endif