// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUAVAILABLERELATEDTRIGGERITEMMODULECONTROLLER_H
#define HUAVAILABLERELATEDTRIGGERITEMMODULECONTROLLER_H

@class UIActivityIndicatorView, UIViewController, NAFuture, NSString;
@protocol HUIconSwitchCellDelegate, HUTriggerEditorDelegate, HFItemSectionAccessoryButtonHeaderDelegate;


#import "HUItemModuleController.h"
#import "HUAvailableRelatedTriggerItemModule.h"
#import "HUAccessoryButtonTableViewHeaderView.h"

@interface HUAvailableRelatedTriggerItemModuleController : HUItemModuleController <HUIconSwitchCellDelegate, HUTriggerEditorDelegate, HFItemSectionAccessoryButtonHeaderDelegate>



@property (retain, nonatomic) UIActivityIndicatorView *addAutomationActivityIndicator; // ivar: _addAutomationActivityIndicator
@property (retain, nonatomic) UIViewController *addAutomationPresentedViewController; // ivar: _addAutomationPresentedViewController
@property (retain, nonatomic) NAFuture *addAutomationPresentingFuture; // ivar: _addAutomationPresentingFuture
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL editing; // ivar: _editing
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HUAvailableRelatedTriggerItemModule *module;
@property (weak, nonatomic) HUAccessoryButtonTableViewHeaderView *sectionEditButtonHeader; // ivar: _sectionEditButtonHeader
@property (readonly) Class superclass;


-(Class)cellClassForItem:(id)arg0 ;
-(NSUInteger)didSelectItem:(id)arg0 ;
-(id)_activateItem:(id)arg0 active:(BOOL)arg1 ;
-(id)_addAutomationViewControllerWithActionFactories:(id)arg0 ;
-(id)_addAutomationViewControllerWithSensorCharacteristics:(id)arg0 ;
-(id)_createAddAutomationViewController;
-(id)_dismissViewController:(id)arg0 ;
-(id)_handleError:(id)arg0 retryBlock:(id)arg1 ;
-(id)commitSelectedItems;
-(id)initWithModule:(id)arg0 ;
-(void)_addAutomationCancelButtonPressed;
-(void)_enableItemPressed:(id)arg0 enabled:(BOOL)arg1 ;
-(void)_presentAddAutomationViewController;
-(void)_presentTriggerSummaryForAvailableTriggerItem:(id)arg0 ;
-(void)_presentTriggerSummaryForTriggerBuilder:(id)arg0 flow:(id)arg1 ;
-(void)_updateUIAnimated:(BOOL)arg0 ;
-(void)itemSection:(id)arg0 accessoryButtonPressedInHeader:(id)arg1 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 ;
-(void)switchCell:(id)arg0 didTurnOn:(BOOL)arg1 ;
-(void)triggerEditor:(id)arg0 didCommitTriggerBuilder:(id)arg1 withError:(id)arg2 ;
-(void)triggerEditor:(id)arg0 didFinishWithTriggerBuilder:(id)arg1 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 animated:(BOOL)arg2 ;


@end


#endif