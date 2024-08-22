// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC10CHRONOCORE35SYSTEMAPERTUREELEMENTVIEWCONTROLLER_H
#define _TTC10CHRONOCORE35SYSTEMAPERTUREELEMENTVIEWCONTROLLER_H

@class UIViewController, NSString, UIView<SBUISystemApertureAccessoryView>, UIViewController<SBUISystemApertureElement>;
@protocol SBUISystemApertureElement, SBUISystemApertureElementProviding;



@interface _TtC10ChronoCore35SystemApertureElementViewController : UIViewController <SBUISystemApertureElement, SBUISystemApertureElementProviding>

 {
    ? viewModel;
    ? hostingController;
    ? accessoryLeadingView;
    ? accessoryTrailingView;
    ? accessoryMinimalView;
    ? _cancellables;
    ? associatedScenePersistenceIdentifier;
    ? associatedAppBundleIdentifier;
    ? $__lazy_storage_$_button;
}


@property (nonatomic) NSInteger activeLayoutMode; // ivar: activeLayoutMode
@property (nonatomic, copy) NSString *associatedAppBundleIdentifier;
@property (nonatomic, copy) NSString *associatedScenePersistenceIdentifier;
@property (nonatomic) NSInteger contentRole; // ivar: contentRole
@property (nonatomic, readonly) UIView<SBUISystemApertureAccessoryView> *leadingView; // ivar: leadingView
@property (nonatomic) NSInteger maximumLayoutMode; // ivar: maximumLayoutMode
@property (nonatomic, readonly) UIView<SBUISystemApertureAccessoryView> *minimalView; // ivar: minimalView
@property (nonatomic) CGFloat preferredHeightForBottomSafeArea; // ivar: preferredHeightForBottomSafeArea
@property (nonatomic) NSInteger preferredLayoutMode; // ivar: preferredLayoutMode
@property (nonatomic, readonly) UIViewController<SBUISystemApertureElement> *systemApertureElementViewController;
@property (nonatomic, readonly) UIView<SBUISystemApertureAccessoryView> *trailingView; // ivar: trailingView


-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif