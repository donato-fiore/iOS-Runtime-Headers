// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUTRIGGERSUMMARYACTIONGRIDVIEWCONTROLLER_LEGACY_H
#define HUTRIGGERSUMMARYACTIONGRIDVIEWCONTROLLER_LEGACY_H

@class NSString, HFTriggerBuilder;
@protocol HFActionSetValueSourceDelegate, HUServiceActionControlsViewControllerDelegate, HUSceneEditorDelegate, HUServiceGridItemManagerDelegate, HUContainedServiceGridViewControllerDelegate_legacy, HUTriggerSummaryActionGridViewControllerProtocol, HUTriggerSummaryActionGridViewControllerDelegate_legacy;


#import "HUServiceGridViewController.h"
#import "HUContainedServicesGridViewController_legacy.h"
#import "HUServiceGridItemManager.h"

@interface HUTriggerSummaryActionGridViewController_legacy : HUServiceGridViewController <HFActionSetValueSourceDelegate, HUServiceActionControlsViewControllerDelegate, HUSceneEditorDelegate, HUServiceGridItemManagerDelegate, HUContainedServiceGridViewControllerDelegate_legacy, HUTriggerSummaryActionGridViewControllerProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUTriggerSummaryActionGridViewControllerDelegate_legacy> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HUContainedServicesGridViewController_legacy *presentedServiceGroupDetailsViewController; // ivar: _presentedServiceGroupDetailsViewController
@property (weak, nonatomic) HUServiceGridItemManager *serviceGridItemManager; // ivar: _serviceGridItemManager
@property (readonly, nonatomic) NSUInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (readonly, nonatomic) HFTriggerBuilder *triggerBuilder; // ivar: _triggerBuilder


+(id)_actionSetItemProviderFilterForTriggerBuilder:(SEL)arg0 ;
-(BOOL)_hasTapActionForItem:(id)arg0 ;
-(BOOL)hasDetailsActionForContainedServiceGridViewController:(id)arg0 item:(id)arg1 ;
-(BOOL)hasDetailsActionForPresentationCoordinator:(id)arg0 item:(id)arg1 ;
-(BOOL)presentationCoordinator:(id)arg0 shouldBeginInteractivePresentationWithTouchLocation:(struct CGPoint )arg1 view:(id)arg2 ;
-(BOOL)presentationCoordinator:(id)arg0 shouldBeginPresentationWithContext:(id)arg1 ;
-(id)_defaultLayoutOptionsForViewSize:(struct CGSize )arg0 ;
-(id)detailsViewControllerForContainedServiceGridViewController:(id)arg0 item:(id)arg1 ;
-(id)detailsViewControllerForPresentationCoordinator:(id)arg0 item:(id)arg1 ;
-(id)initWithItemManager:(id)arg0 ;
-(id)initWithTriggerBuilder:(id)arg0 withStyle:(NSUInteger)arg1 ;
-(void)_removeActionsInServiceActionItem:(id)arg0 ;
-(void)actionSetValueSource:(id)arg0 didUpdateValuesForActionBuilders:(id)arg1 ;
-(void)configureCell:(id)arg0 forItem:(id)arg1 ;
-(void)reloadActions;
-(void)sceneEditor:(id)arg0 removeActionSetBuilderFromTrigger:(id)arg1 ;
-(void)serviceActionControlsViewController:(id)arg0 removeServiceActionItem:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif