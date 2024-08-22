// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRUSESSIONMIRRORINGVIEWCONTROLLER_H
#define MRUSESSIONMIRRORINGVIEWCONTROLLER_H

@class UIViewController, NSString, UIColor, NSURL, UIView<SBUISystemApertureAccessoryView>, UIViewController<SBUISystemApertureElement>;
@protocol MRUMirroringControllerDelegate, SBUISystemApertureElement, SBUISystemApertureElementProviding;


#import "MRUMirroringController.h"
#import "MRUSessionMirroringView.h"

@interface MRUSessionMirroringViewController : UIViewController <MRUMirroringControllerDelegate, SBUISystemApertureElement, SBUISystemApertureElementProviding>



@property (nonatomic) NSInteger activeLayoutMode; // ivar: _activeLayoutMode
@property (readonly, copy, nonatomic) NSString *associatedAppBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *associatedScenePersistenceIdentifier; // ivar: associatedScenePersistenceIdentifier
@property (nonatomic) BOOL canRequestAlertingAssertion;
@property (readonly, nonatomic) NSInteger contentRole;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *elementIdentifier;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) UIColor *keyColor;
@property (readonly, copy, nonatomic) NSURL *launchURL;
@property (readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *leadingView;
@property (readonly, nonatomic) NSInteger maximumLayoutMode;
@property (readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *minimalView;
@property (nonatomic) NSUInteger minimalViewLayoutAxis;
@property (readonly, nonatomic) NSInteger minimumLayoutMode;
@property (retain, nonatomic) MRUMirroringController *mirroringController; // ivar: _mirroringController
@property (readonly, nonatomic) CGSize preferredCustomAspectRatio;
@property (readonly, nonatomic) NSInteger preferredCustomLayout;
@property (readonly, nonatomic) CGFloat preferredHeightForBottomSafeArea;
@property (readonly, nonatomic) NSInteger preferredLayoutMode;
@property (readonly, nonatomic) NSUInteger presentationBehaviors;
@property (readonly, nonatomic) BOOL preventsAutomaticDismissal;
@property (readonly, nonatomic) BOOL preventsInteractiveDismissal;
@property (readonly, nonatomic) NSUInteger statusBarStyleOverridesToSuppress;
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) NSObject<SBUISystemApertureElement> *systemApertureElement;
@property (readonly, nonatomic) UIViewController<SBUISystemApertureElement> *systemApertureElementViewController;
@property (readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *trailingView;
@property (retain, nonatomic) MRUSessionMirroringView *view;
@property (retain, nonatomic) MRUSessionMirroringView *viewIfLoaded;


-(BOOL)_canShowWhileLocked;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)loadView;
-(void)mirroringController:(id)arg0 didChangeOutputDevice:(id)arg1 ;
-(void)stopMirroring:(id)arg0 ;
-(void)updateState;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif