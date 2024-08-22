// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUTRIGGERACTIONSETSMODULECONTROLLER_H
#define HUTRIGGERACTIONSETSMODULECONTROLLER_H

@class HUItemCollectionViewController<HUTriggerSummaryActionGridViewControllerProtocol>, NSString;
@protocol HUTriggerSummaryActionGridViewControllerDelegate_legacy, HUEmbeddedTriggerActionGridViewControllerDelegate, HUEmbeddedTriggerActionSetGridViewControllerDelegate, HUTriggerActionSetsModuleControllerDelegate;


#import "HUItemModuleController.h"

@interface HUTriggerActionSetsModuleController : HUItemModuleController <HUTriggerSummaryActionGridViewControllerDelegate_legacy, HUEmbeddedTriggerActionGridViewControllerDelegate, HUEmbeddedTriggerActionSetGridViewControllerDelegate>



@property (readonly, nonatomic) HUItemCollectionViewController<HUTriggerSummaryActionGridViewControllerProtocol> *actionSetsGridViewController; // ivar: _actionSetsGridViewController
@property (readonly, nonatomic) HUItemCollectionViewController<HUTriggerSummaryActionGridViewControllerProtocol> *actionsGridViewController; // ivar: _actionsGridViewController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUTriggerActionSetsModuleControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HUItemCollectionViewController<HUTriggerSummaryActionGridViewControllerProtocol> *prioritizedActionsGridViewController; // ivar: _prioritizedActionsGridViewController
@property (readonly) Class superclass;


-(BOOL)triggerSummaryActionGridViewController:(id)arg0 shouldShowAction:(id)arg1 ;
-(Class)cellClassForItem:(id)arg0 ;
-(id)childViewControllersToPreload;
-(void)reloadActions;
-(void)setupCell:(id)arg0 forItem:(id)arg1 ;
-(void)triggerActionGridViewController:(id)arg0 didUpdate:(id)arg1 ;
-(void)triggerActionSetGridViewController:(id)arg0 didUpdate:(id)arg1 ;
-(void)triggerSummaryActionGridViewController:(id)arg0 didUpdateTriggerBuilder:(id)arg1 ;


@end


#endif