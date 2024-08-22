// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUPINCODELISTMODULECONTROLLER_H
#define HUPINCODELISTMODULECONTROLLER_H

@class UIBarButtonItem, NSString;
@protocol HUUserSwitchCellDelegate, HUSwitchCellDelegate, HFItemSectionAccessoryButtonHeaderDelegate, HUPinCodeDetailsViewDelegate;


#import "HUItemModuleController.h"
#import "HUPinCodeDetailsViewController.h"

@interface HUPinCodeListModuleController : HUItemModuleController <HUUserSwitchCellDelegate, HUSwitchCellDelegate, HFItemSectionAccessoryButtonHeaderDelegate, HUPinCodeDetailsViewDelegate>



@property (retain, nonatomic) UIBarButtonItem *addButtonItem;
@property (retain, nonatomic) UIBarButtonItem *addGuestDoneButtonItem; // ivar: _addGuestDoneButtonItem
@property (retain, nonatomic) HUPinCodeDetailsViewController *addGuestViewController; // ivar: _addGuestViewController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL editing; // ivar: _editing
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canSelectItem:(id)arg0 ;
-(Class)cellClassForItem:(id)arg0 ;
-(NSUInteger)didSelectItem:(id)arg0 ;
-(id)initWithModule:(id)arg0 ;
-(void)_switchCell:(id)arg0 didTurnOn:(BOOL)arg1 ;
-(void)addGuestDoneButtonPressed:(id)arg0 ;
-(void)cancelAddGuest:(id)arg0 ;
-(void)hideSpinner;
-(void)itemSection:(id)arg0 accessoryButtonPressedInHeader:(id)arg1 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 ;
-(void)showSpinner;
-(void)switchCell:(id)arg0 didTurnOn:(BOOL)arg1 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)userSwitchCell:(id)arg0 didTurnOn:(BOOL)arg1 ;


@end


#endif