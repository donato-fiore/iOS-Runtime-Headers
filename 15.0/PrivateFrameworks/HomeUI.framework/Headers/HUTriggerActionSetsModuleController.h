// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUTRIGGERACTIONSETSMODULECONTROLLER_H
#define HUTRIGGERACTIONSETSMODULECONTROLLER_H

@class NSString;
@protocol HUTriggerSummaryActionGridViewControllerDelegate, HUTriggerActionSetsModuleControllerDelegate;


#import "HUItemTableModuleController.h"
#import "HUTriggerSummaryActionGridViewController.h"

@interface HUTriggerActionSetsModuleController : HUItemTableModuleController <HUTriggerSummaryActionGridViewControllerDelegate>



@property (readonly, nonatomic) HUTriggerSummaryActionGridViewController *actionSetsGridViewController; // ivar: _actionSetsGridViewController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUTriggerActionSetsModuleControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HUTriggerSummaryActionGridViewController *prioritizedServiceActionsGridViewController; // ivar: _prioritizedServiceActionsGridViewController
@property (readonly, nonatomic) HUTriggerSummaryActionGridViewController *serviceActionsGridViewController; // ivar: _serviceActionsGridViewController
@property (readonly) Class superclass;


-(BOOL)triggerSummaryActionGridViewController:(id)arg0 shouldShowAction:(id)arg1 ;
-(Class)cellClassForItem:(id)arg0 ;
-(id)childViewControllersToPreload;
-(void)reloadActions;
-(void)setupCell:(id)arg0 forItem:(id)arg1 ;
-(void)triggerSummaryActionGridViewController:(id)arg0 didUpdateTriggerBuilder:(id)arg1 ;


@end


#endif