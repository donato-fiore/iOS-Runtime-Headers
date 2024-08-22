// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXGESTURERECORDERMAINVIEWCONTROLLER_H
#define AXGESTURERECORDERMAINVIEWCONTROLLER_H

@class PSViewController, NSString, AXAssertion, UILabel, UIView, UIBarButtonItem;
@protocol AXGestureRecorderViewControllerDelegate, AXGestureRecorderControlsViewDelegate, UITextFieldDelegate, AXGestureRecorderMainViewControllerDelegate;


#import "AXGestureRecorderControlsView.h"
#import "AXGestureRecorderViewController.h"
#import "AXGestureRecorderStyleProvider.h"

@interface AXGestureRecorderMainViewController : PSViewController <AXGestureRecorderViewControllerDelegate, AXGestureRecorderControlsViewDelegate, UITextFieldDelegate>



@property (weak, nonatomic) id *appDidResignActiveNotificationHandlerToken; // ivar: _appDidResignActiveNotificationHandlerToken
@property (retain, nonatomic) AXGestureRecorderControlsView *controlsView; // ivar: _controlsView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AXGestureRecorderMainViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) AXAssertion *disableSystemGesturesAssertion; // ivar: _disableSystemGesturesAssertion
@property (retain, nonatomic) AXGestureRecorderViewController *gestureRecorderViewController; // ivar: _gestureRecorderViewController
@property (nonatomic) CGFloat gestureRecordingDidStartTimeInterval; // ivar: _gestureRecordingDidStartTimeInterval
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isInReplayMode) BOOL inReplayMode; // ivar: _inReplayMode
@property (retain, nonatomic) UILabel *instructionsLabel; // ivar: _instructionsLabel
@property (nonatomic) BOOL isDisplayLinkInEffect; // ivar: _isDisplayLinkInEffect
@property (nonatomic) NSUInteger leftButtonIdentifier; // ivar: _leftButtonIdentifier
@property (retain, nonatomic) UIView *lineView; // ivar: _lineView
@property (nonatomic) NSInteger recorderType; // ivar: _recorderType
@property (nonatomic) NSUInteger rightButtonIdentifier; // ivar: _rightButtonIdentifier
@property (retain, nonatomic) UIBarButtonItem *saveButton; // ivar: _saveButton
@property (retain, nonatomic) AXGestureRecorderStyleProvider *styleProvider; // ivar: _styleProvider
@property (readonly) Class superclass;
@property (retain, nonatomic) UIView *topView; // ivar: _topView


+(BOOL)_shouldForwardViewWillTransitionToSize;
-(BOOL)_canSaveGestureWithName:(id)arg0 ;
-(BOOL)_isForRealTimeGesture;
-(BOOL)isChromeVisibleForGestureRecorderViewController:(id)arg0 ;
-(BOOL)shouldAutorotate;
-(CGFloat)maximumDurationOfRecordedGestureForGestureRecorderViewController:(id)arg0 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_defaultInstructionalText;
-(id)init;
-(id)initWithType:(NSInteger)arg0 ;
-(void)_cancelButtonTapped:(id)arg0 ;
-(void)_clearProgressView;
-(void)_commonInit;
-(void)_didSaveGestureWithName:(id)arg0 ;
-(void)_enterReplayMode;
-(void)_enterWaitingMode;
-(void)_getButtonPropertiesForIdentifier:(NSUInteger)arg0 enabled:(BOOL)arg1 color:(*int)arg2 title:(*id)arg3 ;
-(void)_hide;
-(void)_hideChrome;
-(void)_hideChromeButtonTapped:(id)arg0 ;
-(void)_manageDisplayLinkManager:(BOOL)arg0 ;
-(void)_releaseOutlets;
-(void)_reset;
-(void)_saveButtonTapped:(id)arg0 ;
-(void)_savePoint:(struct CGPoint )arg0 ;
-(void)_saveReplayableGesture;
-(void)_saveWithMessage:(id)arg0 ;
-(void)_unhideChrome;
-(void)_updateProgressView:(id)arg0 ;
-(void)dealloc;
-(void)gestureRecorderControlsView:(id)arg0 buttonTappedAtIndex:(NSUInteger)arg1 ;
-(void)gestureRecorderViewController:(id)arg0 didStartRecordingAtomicFingerPathAtPoint:(struct CGPoint )arg1 ;
-(void)gestureRecorderViewController:(id)arg0 setChromeVisible:(BOOL)arg1 ;
-(void)gestureRecorderViewControllerDidFinishReplayingRecordedGesture:(id)arg0 ;
-(void)gestureRecorderViewControllerDidStopRecordingAtomicFingerPath:(id)arg0 ;
-(void)loadView;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif