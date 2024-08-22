// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CCUIMODULEALERTVIEWCONTROLLER_H
#define CCUIMODULEALERTVIEWCONTROLLER_H

@class UIViewController, UIView, MTMaterialView, NSString, CCSModulePresentationOptions;
@protocol CCUIContentModuleContainerViewControllerDelegate, CCUIModuleAlertViewControllerDelegate;


#import "CCUIContentModuleContainerViewController.h"
#import "CCUIModuleInstance.h"

@interface CCUIModuleAlertViewController : UIViewController <CCUIContentModuleContainerViewControllerDelegate>

 {
    CCUIContentModuleContainerViewController *_moduleContainerViewController;
    CCUIModuleInstance *_moduleInstance;
    UIView *_contentView;
    MTMaterialView *_blurView;
}


@property (nonatomic) CGFloat backgroundViewWeighting;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CCUIModuleAlertViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIView *moduleAlertView;
@property (readonly, copy, nonatomic) NSString *moduleIdentifier; // ivar: _moduleIdentifier
@property (readonly, copy, nonatomic) CCSModulePresentationOptions *presentationOptions; // ivar: _presentationOptions
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(BOOL)contentModuleContainerViewController:(id)arg0 canBeginInteractionWithModule:(id)arg1 ;
-(id)initWithModuleIdentifier:(id)arg0 presentationOptions:(id)arg1 ;
-(struct CGRect )compactModeFrameForContentModuleContainerViewController:(id)arg0 ;
-(void)contentModuleContainerViewController:(id)arg0 didBeginInteractionWithModule:(id)arg1 ;
-(void)contentModuleContainerViewController:(id)arg0 didCloseExpandedModule:(id)arg1 ;
-(void)contentModuleContainerViewController:(id)arg0 didFinishInteractionWithModule:(id)arg1 ;
-(void)contentModuleContainerViewController:(id)arg0 didOpenExpandedModule:(id)arg1 ;
-(void)contentModuleContainerViewController:(id)arg0 willCloseExpandedModule:(id)arg1 ;
-(void)contentModuleContainerViewController:(id)arg0 willDismissViewController:(id)arg1 ;
-(void)contentModuleContainerViewController:(id)arg0 willOpenExpandedModule:(id)arg1 ;
-(void)contentModuleContainerViewController:(id)arg0 willPresentViewController:(id)arg1 ;
-(void)contentModuleContainerViewControllerDismissPresentedContent:(id)arg0 ;
-(void)dismissModulePresentedContentAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif