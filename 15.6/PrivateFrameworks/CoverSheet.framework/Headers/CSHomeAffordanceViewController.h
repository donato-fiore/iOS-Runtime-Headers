// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSHOMEAFFORDANCEVIEWCONTROLLER_H
#define CSHOMEAFFORDANCEVIEWCONTROLLER_H

@class UIView, NSMutableArray, SBFHomeGrabberSettings, UIHoverGestureRecognizer;


#import "CSCoverSheetViewControllerBase.h"
#import "CSHomeAffordanceView.h"

@interface CSHomeAffordanceViewController : CSCoverSheetViewControllerBase {
    UIView *_counterRotationView;
    NSMutableArray *_rotationWrapperViews;
    NSInteger _orientation;
    SBFHomeGrabberSettings *_settings;
    UIHoverGestureRecognizer *_suppressAnimationForPointerGestureRecognizer;
    BOOL _suppressAnimationForPointer;
}


@property (nonatomic) CGPoint homeAffordanceOffset; // ivar: _homeAffordanceOffset
@property (readonly, nonatomic) CSHomeAffordanceView *homeAffordanceView; // ivar: _homeAffordanceView


-(BOOL)_canShowWhileLocked;
-(id)_addWrapperViewWithOrientation:(NSInteger)arg0 ;
-(struct CGRect )_homeAffordanceRestingFrame;
-(void)_handleSuppressAnimationForPointerGesture:(id)arg0 ;
-(void)_layoutHomeAffordance;
-(void)aggregateAppearance:(id)arg0 ;
-(void)setLegibilitySettings:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif