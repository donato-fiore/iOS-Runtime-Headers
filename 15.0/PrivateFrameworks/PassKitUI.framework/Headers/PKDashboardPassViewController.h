// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKDASHBOARDPASSVIEWCONTROLLER_H
#define PKDASHBOARDPASSVIEWCONTROLLER_H

@class BKPresenceDetectOperation, NSMutableArray, PKPaymentPass, UIButton, NSString, PKPass;
@protocol PKForegroundActiveArbiterObserver, _PKUIKVisibilityBackdropViewDelegate, PKDashboardPassTilesItemPresenterDelegate, BKOperationDelegate, OS_dispatch_source, OS_dispatch_queue, PKDashboardPassViewControllerDelegate><PKDashboardDelegate;


#import "PKDashboardViewController.h"
#import "_PKUIKVisibilityBackdropView.h"
#import "PKDashboardPassFlowLayout.h"
#import "PKDashboardPaymentTransactionItemPresenter.h"

@interface PKDashboardPassViewController : PKDashboardViewController <PKForegroundActiveArbiterObserver, _PKUIKVisibilityBackdropViewDelegate, PKDashboardPassTilesItemPresenterDelegate, BKOperationDelegate>

 {
    BOOL _fingerPresent;
    BKPresenceDetectOperation *_fingerDetectionOperation;
    NSObject<OS_dispatch_source> *_fingerTimer;
    os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_queue;
    uint8_t _invalidated;
    NSMutableArray *_sessionHandles;
    ? _foregroundActiveState;
    unsigned int _deactivationReasons;
    unsigned char _visibility;
    BOOL _footerVisible;
    PKPaymentPass *_frontmostPaymentPass;
    _PKUIKVisibilityBackdropView *_footerBackground;
    CGSize _defaultPasscodeButtonSize;
    UIButton *_passcodeButton;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKDashboardPassViewControllerDelegate><PKDashboardDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PKPass *frontmostPass; // ivar: _frontmostPass
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PKDashboardPassFlowLayout *passFlowLayout; // ivar: _passFlowLayout
@property (readonly) Class superclass;
@property (readonly, nonatomic) PKDashboardPaymentTransactionItemPresenter *transactionPresenter; // ivar: _transactionPresenter


-(BOOL)_isBackgrounded;
-(BOOL)_isDeactivated;
-(BOOL)_isForegroundActive;
-(NSInteger)visibilityBackdropView:(id)arg0 preferredStyleForTraitCollection:(id)arg1 ;
-(id)_passcodeButtonTitle;
-(id)initWithDataSource:(id)arg0 presenters:(id)arg1 layout:(id)arg2 ;
-(id)initWithPass:(id)arg0 ;
-(id)initWithPassGroupView:(id)arg0 context:(id)arg1 presentingViewController:(id)arg2 ;
-(void)_createFooter;
-(void)_passcodeTapped:(id)arg0 ;
-(void)_performActivationStateUpdate:(id)arg0 ;
-(void)_updateDefaultPasscodeButtonSize;
-(void)_updateFingerDetection;
-(void)_updateFooterAnimated:(BOOL)arg0 ;
-(void)_updatePasscodeButtonTitle;
-(void)_visibilityDidChange;
-(void)dealloc;
-(void)foregroundActiveArbiter:(id)arg0 didUpdateDeactivationReasons:(unsigned int)arg1 ;
-(void)foregroundActiveArbiter:(id)arg0 didUpdateForegroundActiveState:(struct ? )arg1 ;
-(void)invalidate;
-(void)loadView;
-(void)operation:(id)arg0 presenceStateChanged:(BOOL)arg1 ;
-(void)passTilesItemPresenter:(id)arg0 executeSEActionForPass:(id)arg1 tile:(id)arg2 withCompletion:(id)arg3 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewSafeAreaInsetsDidChange;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif