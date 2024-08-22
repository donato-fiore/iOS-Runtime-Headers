// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNFREGFIRSTRUNCONTROLLER_H
#define CNFREGFIRSTRUNCONTROLLER_H

@class NSTimer, IMAccount, UIBarButtonItem, NSString;
@protocol CNFRegFirstRunExperience, CNFRegFirstRunDelegate;


#import "CNFRegListController.h"

@interface CNFRegFirstRunController : CNFRegListController <CNFRegFirstRunExperience>

 {
    BOOL _showingActivityIndicator;
    NSTimer *_timeoutTimer;
    BOOL _cancelled;
}


@property (retain, nonatomic) IMAccount *account; // ivar: _account
@property (nonatomic) Class completionControllerClass; // ivar: _completionControllerClass
@property (readonly, nonatomic) NSInteger currentAppearanceStyle;
@property (retain, nonatomic) UIBarButtonItem *customLeftButton; // ivar: _customLeftButton
@property (retain, nonatomic) UIBarButtonItem *customRightButton; // ivar: _customRightButton
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<CNFRegFirstRunDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL previousHidesBackButton; // ivar: _previousHidesBackButton
@property (retain, nonatomic) UIBarButtonItem *previousLeftButton; // ivar: _previousLeftButton
@property (retain, nonatomic) UIBarButtonItem *previousRightButton; // ivar: _previousRightButton
@property (readonly) Class superclass;
@property (nonatomic) BOOL timedOut; // ivar: _timedOut


-(BOOL)_hidesBackButton;
-(BOOL)dismissWithState:(NSUInteger)arg0 ;
-(BOOL)pushCompletionControllerIfPossible;
-(id)_leftButtonItem;
-(id)_rightButtonItem;
-(id)_validationModeCancelButton;
-(id)customTitle;
-(id)initWithParentController:(id)arg0 account:(id)arg1 ;
-(id)initWithRegController:(id)arg0 ;
-(id)initWithRegController:(id)arg0 account:(id)arg1 ;
-(id)titleString;
-(id)validationString;
-(void)_cancelValidationMode;
-(void)_executeDismissBlock:(id)arg0 ;
-(void)_handleReturnKeyTapped:(id)arg0 ;
-(void)_handleTimeout;
-(void)_handleValidationModeCancelled;
-(void)_leftButtonTapped;
-(void)_refreshCurrentState;
-(void)_refreshNavBarAnimated:(BOOL)arg0 ;
-(void)_returnKeyPressed;
-(void)_rightButtonTapped;
-(void)_setupEventHandlers;
-(void)_startActivityIndicatorWithTitle:(id)arg0 animated:(BOOL)arg1 ;
-(void)_startActivityIndicatorWithTitle:(id)arg0 animated:(BOOL)arg1 allowCancel:(BOOL)arg2 ;
-(void)_startListeningForReturnKey;
-(void)_startTimeoutWithDuration:(CGFloat)arg0 ;
-(void)_startValidationModeAnimated:(BOOL)arg0 ;
-(void)_startValidationModeAnimated:(BOOL)arg0 allowCancel:(BOOL)arg1 ;
-(void)_stopActivityIndicatorAnimated:(BOOL)arg0 ;
-(void)_stopActivityIndicatorWithTitle:(id)arg0 animated:(BOOL)arg1 ;
-(void)_stopListeningForReturnKey;
-(void)_stopTimeout;
-(void)_stopValidationModeAnimated:(BOOL)arg0 ;
-(void)_timeoutFired:(id)arg0 ;
-(void)_updateControllerState;
-(void)_updateUI;
-(void)dealloc;
-(void)setCellsChecked:(BOOL)arg0 ;
-(void)setSpecifier:(id)arg0 ;
-(void)systemApplicationDidEnterBackground;
-(void)systemApplicationWillEnterForeground;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif