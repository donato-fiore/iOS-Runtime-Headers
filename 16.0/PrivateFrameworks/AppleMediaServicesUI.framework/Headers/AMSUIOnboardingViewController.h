// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSUIONBOARDINGVIEWCONTROLLER_H
#define AMSUIONBOARDINGVIEWCONTROLLER_H

@class UIViewController, UITraitCollection, NSString, UIImage, OBPrivacyLinkController, OBWelcomeController;
@protocol UIScrollViewDelegate, OS_dispatch_queue;



@interface AMSUIOnboardingViewController : UIViewController <UIScrollViewDelegate>



@property (readonly, nonatomic) UITraitCollection *cappedTraitCollection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *descriptionText; // ivar: _descriptionText
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIImage *headerImage;
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (readonly, nonatomic) BOOL isPresentedInFormSheet;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *metricsQueue; // ivar: _metricsQueue
@property (copy, nonatomic) id *primaryButtonCallback; // ivar: _primaryButtonCallback
@property (retain, nonatomic) NSString *primaryButtonText; // ivar: _primaryButtonText
@property (retain, nonatomic) OBPrivacyLinkController *privacyLinkController; // ivar: _privacyLinkController
@property (retain, nonatomic) UIImage *rightImage; // ivar: _rightImage
@property (copy, nonatomic) id *secondaryButtonCallback; // ivar: _secondaryButtonCallback
@property (retain, nonatomic) NSString *secondaryButtonText; // ivar: _secondaryButtonText
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *titleText; // ivar: _titleText
@property (nonatomic) BOOL viewHasAppeared; // ivar: _viewHasAppeared
@property (retain, nonatomic) OBWelcomeController *welcomeController; // ivar: _welcomeController


+(id)privacyLinkIdentifiersFromController:(id)arg0 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)childTraitCollectionForViewController:(id)arg0 ;
-(id)initWithHeaderImage:(id)arg0 titleText:(id)arg1 descriptionText:(id)arg2 primaryButtonText:(id)arg3 privacyLinkBundleIdentifier:(id)arg4 ;
-(id)initWithHeaderImage:(id)arg0 titleText:(id)arg1 descriptionText:(id)arg2 primaryButtonText:(id)arg3 privacyLinkController:(id)arg4 ;
-(id)initWithHeaderImage:(id)arg0 titleText:(id)arg1 descriptionText:(id)arg2 primaryButtonText:(id)arg3 secondaryButtonText:(id)arg4 privacyLinkController:(id)arg5 ;
-(id)initWithHeaderImage:(id)arg0 titleText:(id)arg1 features:(id)arg2 primaryButtonText:(id)arg3 privacyLinkBundleIdentifier:(id)arg4 ;
-(id)initWithTitleText:(id)arg0 features:(id)arg1 primaryButtonText:(id)arg2 privacyLinkBundleIdentifier:(id)arg3 ;
-(id)initWithTitleText:(id)arg0 features:(id)arg1 primaryButtonText:(id)arg2 privacyLinkController:(id)arg3 ;
-(id)keyCommands;
-(struct CGSize )preferredContentSize;
-(void)commonInitWithPrimaryButtonText:(id)arg0 privacyLinkController:(id)arg1 ;
-(void)commonSetupWithPrimaryButtonText:(id)arg0 privacyLinkBundleIdentifiers:(id)arg1 ;
-(void)commonSetupWithPrimaryButtonText:(id)arg0 secondaryButtonText:(id)arg1 privacyLinkBundleIdentifiers:(id)arg2 ;
-(void)didTapPrimaryButton:(id)arg0 ;
-(void)didTapSecondaryButton:(id)arg0 ;
-(void)updateOverrideTraits;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif