// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIROTATINGALERTCONTROLLER_H
#define _UIROTATINGALERTCONTROLLER_H

@protocol UIPopoverPresentationControllerDelegate, _UIRotatingAlertControllerDelegate;


#import "UIAlertController.h"
#import "UIViewController.h"

@interface _UIRotatingAlertController : UIAlertController {
    BOOL _isRotating;
    BOOL _readyToPresentAfterRotation;
    UIViewController *_presentedViewControllerWhileRotating;
    id<UIPopoverPresentationControllerDelegate> *_popoverPresentationControllerDelegateWhileRotating;
}


@property (nonatomic) NSUInteger arrowDirections; // ivar: _arrowDirections
@property (weak, nonatomic) NSObject<_UIRotatingAlertControllerDelegate> *rotatingSheetDelegate; // ivar: _rotatingSheetDelegate


-(BOOL)_canShowWhileLocked;
-(BOOL)_shouldAbortAdaptationFromTraitCollection:(id)arg0 toTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(BOOL)presentSheet;
-(BOOL)presentSheetFromRect:(struct CGRect )arg0 ;
-(id)init;
-(void)_didRotateAndLayout;
-(void)_presentingViewControllerDidChange:(id)arg0 ;
-(void)_presentingViewControllerWillChange:(id)arg0 ;
-(void)_updateSheetPositionAfterRotation;
-(void)dealloc;
-(void)didRotate:(id)arg0 ;
-(void)doneWithSheet;
-(void)willRotate:(id)arg0 ;


@end


#endif