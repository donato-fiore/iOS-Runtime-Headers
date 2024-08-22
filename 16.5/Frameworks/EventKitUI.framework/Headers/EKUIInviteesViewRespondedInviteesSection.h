// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKUIINVITEESVIEWRESPONDEDINVITEESSECTION_H
#define EKUIINVITEESVIEWRESPONDEDINVITEESSECTION_H

@class NSString, EKEvent, NSMutableArray;
@protocol EKUIInviteesViewSection;

#import <Foundation/Foundation.h>


@interface EKUIInviteesViewRespondedInviteesSection : NSObject <EKUIInviteesViewSection>



@property (retain, nonatomic) NSString *cachedCellReuseIdentifier; // ivar: _cachedCellReuseIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL editable; // ivar: _editable
@property (retain, nonatomic) EKEvent *event; // ivar: _event
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *participantRemoved; // ivar: _participantRemoved
@property (copy, nonatomic) id *participantSetRole; // ivar: _participantSetRole
@property (copy, nonatomic) id *participantTapped; // ivar: _participantTapped
@property (retain, nonatomic) NSMutableArray *participants; // ivar: _participants
@property (nonatomic) int responseType; // ivar: _responseType
@property (nonatomic) NSUInteger reuseIdentifierVersion; // ivar: _reuseIdentifierVersion
@property (readonly) Class superclass;
@property (copy, nonatomic) id *tableViewCellHook; // ivar: _tableViewCellHook


-(BOOL)_isValidRow:(NSInteger)arg0 ;
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
-(id)initWithResponseType:(int)arg0 ;
-(id)titleForDeleteConfirmationButtonForRow:(id)arg0 ;
-(void)cancelOutstandingOperations;
-(void)commitEditingStyle:(NSInteger)arg0 forRow:(id)arg1 ;
-(void)reloadAndRegisterReusableCellsWithTableView:(id)arg0 ;
-(void)selectRow:(id)arg0 ;
-(void)updateWithEvent:(id)arg0 editable:(BOOL)arg1 ;


@end


#endif