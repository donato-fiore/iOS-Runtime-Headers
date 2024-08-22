// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPEOPLEBOOTSTRAPSUMMARYVIEWCONTROLLER_H
#define PXPEOPLEBOOTSTRAPSUMMARYVIEWCONTROLLER_H

@class UIViewController, NSString, UILabel;
@protocol PXPeopleFlowViewController, PXPeopleFlowViewControllerActionDelegate, PXPeoplePickerConfigurationControllerDelegate;


#import "PXPeopleBootstrapContext.h"

@interface PXPeopleBootstrapSummaryViewController : UIViewController <PXPeopleFlowViewController>



@property (weak, nonatomic) NSObject<PXPeopleFlowViewControllerActionDelegate> *actionDelegate;
@property (readonly, nonatomic) PXPeopleBootstrapContext *bootstrapContext; // ivar: _bootstrapContext
@property (weak, nonatomic) NSObject<PXPeoplePickerConfigurationControllerDelegate> *configControllerDelegate; // ivar: _configControllerDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) UILabel *descriptionLabel; // ivar: _descriptionLabel
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGSize preferredSize;
@property (readonly, weak, nonatomic) UILabel *promptLabel; // ivar: _promptLabel
@property (readonly, nonatomic) BOOL shouldConfirmAdvancement;
@property (readonly) Class superclass;
@property (nonatomic) BOOL useLowMemoryMode; // ivar: _useLowMemoryMode
@property (readonly, nonatomic) BOOL wantsCancelButton; // ivar: _wantsCancelButton


-(id)_localizedDescriptionString;
-(id)_localizedPromptString;
-(id)_localizedTitleString;
-(id)initWithContext:(id)arg0 ;
-(void)_updateNavigationBarForCurrentTraitCollection;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateUI;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif