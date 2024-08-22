// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUTRIGGERACTIONSETSMODULECONTROLLER_H
#define HUTRIGGERACTIONSETSMODULECONTROLLER_H

@class HUItemCollectionViewController<HUTriggerSummaryActionGridViewControllerProtocol>;
@protocol HUEmbeddedTriggerActionGridViewControllerDelegate, HUEmbeddedTriggerActionSetGridViewControllerDelegate, HUTriggerActionSetsModuleControllerDelegate;


#import "HUItemModuleController.h"

@interface HUTriggerActionSetsModuleController : HUItemModuleController <HUEmbeddedTriggerActionGridViewControllerDelegate, HUEmbeddedTriggerActionSetGridViewControllerDelegate>



@property (readonly, nonatomic) HUItemCollectionViewController<HUTriggerSummaryActionGridViewControllerProtocol> *actionSetsGridViewController; // ivar: _actionSetsGridViewController
@property (readonly, nonatomic) HUItemCollectionViewController<HUTriggerSummaryActionGridViewControllerProtocol> *actionsGridViewController; // ivar: _actionsGridViewController
@property (weak, nonatomic) NSObject<HUTriggerActionSetsModuleControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) HUItemCollectionViewController<HUTriggerSummaryActionGridViewControllerProtocol> *prioritizedActionsGridViewController; // ivar: _prioritizedActionsGridViewController


-(Class)cellClassForItem:(id)arg0 ;
-(id)childViewControllersToPreload;
-(void)reloadActions;
-(void)setupCell:(id)arg0 forItem:(id)arg1 ;
-(void)triggerActionGridViewController:(id)arg0 didUpdate:(id)arg1 ;
-(void)triggerActionSetGridViewController:(id)arg0 didUpdate:(id)arg1 ;


@end


#endif