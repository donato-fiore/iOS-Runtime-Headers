// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKUIINVITEESVIEWADDINVITEESSECTION_H
#define EKUIINVITEESVIEWADDINVITEESSECTION_H

@class NSOperationQueue, NSString, EKEvent, NSMutableSet, NSMutableDictionary, NSMutableArray, NSArray;
@protocol EKUIInviteesViewSection;

#import <Foundation/Foundation.h>


@interface EKUIInviteesViewAddInviteesSection : NSObject <EKUIInviteesViewSection>



@property (copy, nonatomic) id *addInviteesTapped; // ivar: _addInviteesTapped
@property (retain, nonatomic) NSOperationQueue *availabilityRequestsQueue; // ivar: _availabilityRequestsQueue
@property (retain, nonatomic) NSString *cachedAddInviteeCellReuseIdentifier; // ivar: _cachedAddInviteeCellReuseIdentifier
@property (retain, nonatomic) NSString *cachedInviteeCellReuseIdentifier; // ivar: _cachedInviteeCellReuseIdentifier
@property (nonatomic) BOOL canSeeAttendeeStatuses; // ivar: _canSeeAttendeeStatuses
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) EKEvent *event; // ivar: _event
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableSet *participantAddressesForInFlightAvailabilityOperations; // ivar: _participantAddressesForInFlightAvailabilityOperations
@property (retain, nonatomic) NSMutableDictionary *participantAddressesToAvailabilityType; // ivar: _participantAddressesToAvailabilityType
@property (retain, nonatomic) NSMutableDictionary *participantAddressesToParticipantIndex; // ivar: _participantAddressesToParticipantIndex
@property (copy, nonatomic) id *participantRemoved; // ivar: _participantRemoved
@property (copy, nonatomic) id *participantTapped; // ivar: _participantTapped
@property (retain, nonatomic) NSMutableArray *participants; // ivar: _participants
@property (retain, nonatomic) NSArray *pendingParticipants; // ivar: _pendingParticipants
@property (nonatomic) NSUInteger reuseIdentifierVersion; // ivar: _reuseIdentifierVersion
@property (nonatomic) BOOL showPending; // ivar: _showPending
@property (readonly) Class superclass;
@property (copy, nonatomic) id *tableViewCellHook; // ivar: _tableViewCellHook


+(id)_participantAddressForParticipant:(id)arg0 ;
-(BOOL)_isAddInviteesRow:(NSInteger)arg0 ;
-(BOOL)_isSendInviteRow:(NSInteger)arg0 ;
-(BOOL)_isValidRow:(NSInteger)arg0 ;
-(BOOL)_setOfAddressesToInflightOperationsContainsAddress:(id)arg0 ;
-(BOOL)canEditRow:(id)arg0 ;
-(BOOL)canSelectRow:(id)arg0 ;
-(BOOL)hasPendingParticipants;
-(BOOL)sectionShouldBeShown;
-(BOOL)supportsContextMenuForIndexPath:(id)arg0 ;
-(CGFloat)estimatedHeightForRow:(id)arg0 ;
-(NSInteger)editingStyleForRow:(id)arg0 ;
-(NSUInteger)numberOfRows;
-(id)_lookUpAvailabilityTypeForParticipantAddress:(id)arg0 ;
-(id)_lookUpParticipantIndexForParticipantAddress:(id)arg0 ;
-(id)actionsForRow:(id)arg0 ;
-(id)cellForIndexPath:(id)arg0 inTableView:(id)arg1 ;
-(id)contextMenuDataForIndexPath:(id)arg0 interaction:(id)arg1 ;
-(id)debugTitle;
-(id)headerTitle;
-(id)init;
-(id)titleForDeleteConfirmationButtonForRow:(id)arg0 ;
-(void)_addAddressToSetOfAddressesToInflightOperations:(id)arg0 ;
-(void)_removeAddressFromDictionaryOfAddressesToAvailabilityType:(id)arg0 ;
-(void)_removeAddressFromDictionaryOfAddressesToParticipantIndex:(id)arg0 ;
-(void)_removeAddressFromSetOfAddressesToInflightOperations:(id)arg0 ;
-(void)_removeParticipantAtIndexPath:(id)arg0 ;
-(void)_setAvailabilityType:(id)arg0 forParticipantAddress:(id)arg1 ;
-(void)_setParticipantIndex:(id)arg0 forParticipantAddress:(id)arg1 ;
-(void)_updateCell:(id)arg0 forParticipantAtIndex:(NSInteger)arg1 animated:(BOOL)arg2 ;
-(void)_updateCellForParticipantWithAddress:(id)arg0 ;
-(void)cancelOutstandingOperations;
-(void)commitEditingStyle:(NSInteger)arg0 forRow:(id)arg1 ;
-(void)dealloc;
-(void)reloadAndRegisterReusableCellsWithTableView:(id)arg0 ;
-(void)selectRow:(id)arg0 ;
-(void)updateWithEvent:(id)arg0 showPending:(BOOL)arg1 ;


@end


#endif