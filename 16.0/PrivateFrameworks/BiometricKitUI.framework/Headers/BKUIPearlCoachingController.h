// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BKUIPEARLCOACHINGCONTROLLER_H
#define BKUIPEARLCOACHINGCONTROLLER_H

@class UIViewController, UIButton, UIView, UIScrollView;
@protocol BKUIPearlCoachingControllerDelegate;


#import "BKUIButtonTray.h"
#import "BKUIPearlCoachingDeviceView.h"
#import "BKUIPearlInstructionView.h"

@interface BKUIPearlCoachingController : UIViewController

@property (retain, nonatomic) BKUIButtonTray *buttonTray; // ivar: _buttonTray
@property (weak, nonatomic) NSObject<BKUIPearlCoachingControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic, getter=isDeviceFlat) BOOL deviceFlat;
@property (retain, nonatomic) BKUIPearlCoachingDeviceView *deviceView; // ivar: _deviceView
@property (retain, nonatomic) UIButton *escapeHatchButton; // ivar: _escapeHatchButton
@property (nonatomic) BOOL inBuddy; // ivar: _inBuddy
@property (nonatomic) BOOL inSheet; // ivar: _inSheet
@property (retain, nonatomic) BKUIPearlInstructionView *instructionView; // ivar: _instructionView
@property (nonatomic) BOOL isDisplayZoomEnabled; // ivar: _isDisplayZoomEnabled
@property NSInteger orientation; // ivar: _orientation
@property (retain, nonatomic) UIView *scrollContentView; // ivar: _scrollContentView
@property (retain, nonatomic) UIScrollView *scrollview; // ivar: _scrollview


-(BOOL)didOrientationChange;
-(BOOL)needsToShow;
-(void)deviceOrientationChanged;
-(void)escapeHatchButtonPressed:(id)arg0 ;
-(void)handleRotation;
-(void)stopCoachingAnimation;
-(void)updateInstructionText;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif