// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUSCENEACTIONGRIDVIEWCONTROLLER_LEGACY_H
#define HUSCENEACTIONGRIDVIEWCONTROLLER_LEGACY_H

@class HFActionSetBuilder, NSSet, NSString;
@protocol HFActionSetValueSourceDelegate, HUServiceActionControlsViewControllerDelegate, HUServiceGridItemManagerDelegate, HUContainedServiceGridViewControllerDelegate_legacy;


#import "HUServiceGridViewController.h"
#import "HUContainedServicesGridViewController_legacy.h"

@interface HUSceneActionGridViewController_legacy : HUServiceGridViewController <HFActionSetValueSourceDelegate, HUServiceActionControlsViewControllerDelegate, HUServiceGridItemManagerDelegate, HUContainedServiceGridViewControllerDelegate_legacy>



@property (readonly, nonatomic) HFActionSetBuilder *actionSetBuilder; // ivar: _actionSetBuilder
@property (copy, nonatomic) NSSet *allowlistedServices; // ivar: _allowlistedServices
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSSet *denylistedServices; // ivar: _denylistedServices
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HUContainedServicesGridViewController_legacy *presentedServiceGroupDetailsViewController; // ivar: _presentedServiceGroupDetailsViewController
@property (readonly) Class superclass;


-(BOOL)hasDetailsActionForContainedServiceGridViewController:(id)arg0 item:(id)arg1 ;
-(BOOL)hasDetailsActionForPresentationCoordinator:(id)arg0 item:(id)arg1 ;
-(BOOL)presentationCoordinator:(id)arg0 shouldBeginInteractivePresentationWithTouchLocation:(struct CGPoint )arg1 view:(id)arg2 ;
-(BOOL)presentationCoordinator:(id)arg0 shouldBeginPresentationWithContext:(id)arg1 ;
-(id)detailsViewControllerForContainedServiceGridViewController:(id)arg0 item:(id)arg1 ;
-(id)detailsViewControllerForPresentationCoordinator:(id)arg0 item:(id)arg1 ;
-(id)initWithActionSetBuilder:(id)arg0 ;
-(id)initWithItemManager:(id)arg0 ;
-(id)layoutOptionsForSection:(NSInteger)arg0 ;
-(void)_removeActionsInServiceActionItem:(id)arg0 ;
-(void)actionSetValueSource:(id)arg0 didUpdateValuesForActionBuilders:(id)arg1 ;
-(void)configureCell:(id)arg0 forItem:(id)arg1 ;
-(void)serviceActionControlsViewController:(id)arg0 removeServiceActionItem:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif