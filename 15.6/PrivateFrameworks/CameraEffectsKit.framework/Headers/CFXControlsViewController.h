// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CFXCONTROLSVIEWCONTROLLER_H
#define CFXCONTROLSVIEWCONTROLLER_H

@class UIViewController, UIView, NSLayoutConstraint;


#import "CFXEffectBrowserContentPresenterViewController.h"

@interface CFXControlsViewController : UIViewController

@property (weak, nonatomic) UIView *controlsContainerView; // ivar: _controlsContainerView
@property (retain, nonatomic) NSLayoutConstraint *controlsContainerViewHeightConstraint; // ivar: _controlsContainerViewHeightConstraint
@property (retain, nonatomic) NSLayoutConstraint *controlsContainerViewLeadingConstraint; // ivar: _controlsContainerViewLeadingConstraint
@property (retain, nonatomic) NSLayoutConstraint *controlsContainerViewTopConstraint; // ivar: _controlsContainerViewTopConstraint
@property (retain, nonatomic) NSLayoutConstraint *controlsContainerViewTrailingConstraint; // ivar: _controlsContainerViewTrailingConstraint
@property (retain, nonatomic) NSLayoutConstraint *controlsContainerViewWidthConstraint; // ivar: _controlsContainerViewWidthConstraint
@property (retain, nonatomic) CFXEffectBrowserContentPresenterViewController *effectBrowserContentPresenterViewController; // ivar: _effectBrowserContentPresenterViewController
@property (retain, nonatomic) UIView *effectsBrowser; // ivar: _effectsBrowser
@property (retain, nonatomic) UIView *effectsPickerDrawer; // ivar: _effectsPickerDrawer
@property (nonatomic) BOOL usesInternalCaptureSession; // ivar: _usesInternalCaptureSession


-(id)effectsPickerSnapshot;
-(struct CGPoint )effectsPickerCenter;
-(void)viewDidLoad;


@end


#endif