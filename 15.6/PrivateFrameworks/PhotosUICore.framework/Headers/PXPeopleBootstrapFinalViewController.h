// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPEOPLEBOOTSTRAPFINALVIEWCONTROLLER_H
#define PXPEOPLEBOOTSTRAPFINALVIEWCONTROLLER_H

@class UIViewController, NSString, UILabel;
@protocol PXPeopleFlowViewController, PXPeopleFlowViewControllerActionDelegate;


#import "PXPeopleBootstrapContext.h"

@interface PXPeopleBootstrapFinalViewController : UIViewController <PXPeopleFlowViewController>



@property (weak, nonatomic) NSObject<PXPeopleFlowViewControllerActionDelegate> *actionDelegate;
@property (readonly, nonatomic) PXPeopleBootstrapContext *bootstrapContext; // ivar: _bootstrapContext
@property (readonly, nonatomic) BOOL controlsAdvancementInternally;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) UILabel *descriptionLabel; // ivar: _descriptionLabel
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGSize preferredSize;
@property (readonly, weak, nonatomic) UILabel *promptLabel; // ivar: _promptLabel
@property (readonly) Class superclass;
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


@end


#endif