// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRUACTIVITYMIRRORINGVIEWCONTROLLER_H
#define MRUACTIVITYMIRRORINGVIEWCONTROLLER_H

@class UIViewController, NSString, UIView<SBUISystemApertureAccessoryView>, UIColor, BSAction, NSURL, UIViewController<SBUISystemApertureElement>;
@protocol MRUMirroringControllerDelegate, SBUISystemApertureElement, SBUISystemApertureElementProviding;


#import "MRUMirroringController.h"
#import "MRUActivityMirroringView.h"

@interface MRUActivityMirroringViewController : UIViewController <MRUMirroringControllerDelegate, SBUISystemApertureElement, SBUISystemApertureElementProviding>



@property (nonatomic) NSInteger activeLayoutMode; // ivar: _activeLayoutMode
@property (readonly, copy, nonatomic) NSString *associatedAppBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *associatedScenePersistenceIdentifier; // ivar: associatedScenePersistenceIdentifier
@property (readonly, nonatomic) BOOL attachedMinimalViewRequiresZeroPadding;
@property (nonatomic) BOOL canRequestAlertingAssertion;
@property (readonly, nonatomic) NSInteger contentRole;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *detachedMinimalView;
@property (readonly, copy, nonatomic) NSString *elementIdentifier;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) UIColor *keyColor;
@property (readonly, nonatomic) BSAction *launchAction;
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
@property (retain, nonatomic) MRUActivityMirroringView *view;
@property (retain, nonatomic) MRUActivityMirroringView *viewIfLoaded;


-(BOOL)_canShowWhileLocked;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)loadView;
-(void)mirroringController:(id)arg0 didChangeOutputDevice:(id)arg1 ;
-(void)stopMirroring:(id)arg0 ;
-(void)updateState;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif