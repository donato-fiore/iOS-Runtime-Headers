// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMPONBOARDINGVIEWCONTROLLER_H
#define AMPONBOARDINGVIEWCONTROLLER_H

@class UIViewController, _UIBackdropView, UITraitCollection, NSString, UIImage, AMSUIOnboardingViewController, OBPrivacyLinkController, UIVisualEffectView;
@protocol UIScrollViewDelegate, OS_dispatch_queue;



@interface AMPOnboardingViewController : UIViewController <UIScrollViewDelegate>



@property (retain, nonatomic) _UIBackdropView *backdropView; // ivar: _backdropView
@property (readonly, nonatomic) UITraitCollection *cappedTraitCollection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *descriptionText; // ivar: _descriptionText
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIImage *headerImage;
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (readonly, nonatomic) BOOL isPresentedInFormSheet;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *metricsQueue; // ivar: _metricsQueue
@property (retain, nonatomic) AMSUIOnboardingViewController *onboardingController; // ivar: _onboardingController
@property (copy, nonatomic) id *primaryButtonCallback; // ivar: _primaryButtonCallback
@property (retain, nonatomic) NSString *primaryButtonText; // ivar: _primaryButtonText
@property (readonly, nonatomic) OBPrivacyLinkController *privacyLinkController; // ivar: _privacyLinkController
@property (retain, nonatomic) UIVisualEffectView *statusBarVisualEffectView; // ivar: _statusBarVisualEffectView
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *titleText; // ivar: _titleText
@property (nonatomic) BOOL viewHasAppeared; // ivar: _viewHasAppeared


-(BOOL)isModalInPresentation;
-(NSUInteger)supportedInterfaceOrientations;
-(id)childTraitCollectionForViewController:(id)arg0 ;
-(id)initWithHeaderImage:(id)arg0 titleText:(id)arg1 descriptionText:(id)arg2 primaryButtonText:(id)arg3 privacyLinkController:(id)arg4 ;
-(id)initWithTitleText:(id)arg0 features:(id)arg1 primaryButtonText:(id)arg2 privacyLinkController:(id)arg3 ;
-(void)didTapPrimaryButton:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateOverrideTraits;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif