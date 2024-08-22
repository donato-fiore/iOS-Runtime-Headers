// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBCOVERSHEETSYSTEMAPERTURETRANSITIONOVERLAYVIEWCONTROLLER_H
#define SBCOVERSHEETSYSTEMAPERTURETRANSITIONOVERLAYVIEWCONTROLLER_H

@class UIViewController, UIView;
@protocol SBCoverSheetSystemApertureTransitionOverlayViewControllerDelegate;


#import "SBSystemApertureSettings.h"
#import "SBSystemApertureMeshAnimatedWrapperViewController.h"

@interface SBCoverSheetSystemApertureTransitionOverlayViewController : UIViewController {
    SBSystemApertureSettings *_settings;
    SBSystemApertureMeshAnimatedWrapperViewController *_meshWarpViewController;
    NSUInteger _state;
    UIView *_clippingView;
    NSUInteger _meshWarpTransitionsInProgress;
    BOOL _coverSheetTransitioning;
}


@property (weak, nonatomic) NSObject<SBCoverSheetSystemApertureTransitionOverlayViewControllerDelegate> *delegate; // ivar: _delegate


-(BOOL)_canShowWhileLocked;
-(struct CGRect )_systemApertureDefaultFrame;
-(void)_evaluateState;
-(void)coverSheetTransitionDidEnd;
-(void)coverSheetTransitionUpdatedWithProgress:(CGFloat)arg0 velocity:(CGFloat)arg1 ;
-(void)coverSheetTransitionWillBeginForPresentation:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif