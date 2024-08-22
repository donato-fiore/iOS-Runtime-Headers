// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKEXPRESSTRANSACTIONBANNERVIEWCONTROLLER_H
#define PKEXPRESSTRANSACTIONBANNERVIEWCONTROLLER_H

@class UIViewController, PKPass, PKTransitBalanceModel, CLInUseAssertion, PKExpressTransactionState, PKPaymentService, NSMutableDictionary, NSString, UIColor, NSURL, UIView<SBUISystemApertureAccessoryView>;
@protocol PKPaymentServiceDelegate, PKExpressBannerLeadingViewDelegate, PKExpressBannerTrailingViewDelegate, PKExpressBannerLabelViewDelegate, PKBannerViewController, OS_dispatch_source, PKBannerViewControllerPresentable;


#import "PKExpressBannerLeadingView.h"
#import "PKExpressBannerLabelView.h"
#import "PKExpressBannerTrailingView.h"

@interface PKExpressTransactionBannerViewController : UIViewController <PKPaymentServiceDelegate, PKExpressBannerLeadingViewDelegate, PKExpressBannerTrailingViewDelegate, PKExpressBannerLabelViewDelegate, PKBannerViewController>

 {
    PKPass *_pass;
    PKTransitBalanceModel *_transitBalanceModel;
    BOOL _transitioning;
    PKExpressBannerLeadingView *_leadingView;
    PKExpressBannerLabelView *_trailingLabel;
    CGFloat _trailingLabelBlur;
    PKExpressBannerTrailingView *_trailingView;
    CGFloat _trailingBlur;
    NSObject<OS_dispatch_source> *_transitionTimer;
    int _state;
    BOOL _revoked;
    BOOL _successPlayed;
    BOOL _shrunk;
    CLInUseAssertion *_inUseAssertion;
    CGFloat _shrinkCommitStartTime;
    CGFloat _shrinkCommitEndTime;
    unsigned int _resolutionCounter;
    BOOL _showingResolution;
    BOOL _showingSuccessResolution;
    unsigned int _animationCount;
    NSObject<OS_dispatch_source> *_revokeTimer;
    PKExpressTransactionState *_expressState;
    BOOL _receivedTransaction;
    BOOL _receivedExit;
    PKPaymentService *_paymentService;
    NSMutableDictionary *_registeredExpressObservers;
    BOOL _updatingPreferredContentSize;
}


@property (nonatomic) NSInteger activeLayoutMode; // ivar: _activeLayoutMode
@property (readonly, copy, nonatomic) NSString *associatedAppBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *associatedScenePersistenceIdentifier;
@property (nonatomic) BOOL canRequestAlertingAssertion;
@property (readonly, nonatomic) NSInteger contentRole;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *elementIdentifier;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) UIColor *keyColor;
@property (readonly, copy, nonatomic) NSURL *launchURL;
@property (readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *leadingView;
@property (readonly, nonatomic) NSInteger maximumLayoutMode;
@property (readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *minimalView;
@property (nonatomic) NSUInteger minimalViewLayoutAxis;
@property (readonly, nonatomic) NSInteger minimumLayoutMode;
@property (readonly, nonatomic) CGSize preferredCustomAspectRatio;
@property (readonly, nonatomic) NSInteger preferredCustomLayout;
@property (readonly, nonatomic) CGFloat preferredHeightForBottomSafeArea;
@property (readonly, nonatomic) NSInteger preferredLayoutMode;
@property (weak, nonatomic) NSObject<PKBannerViewControllerPresentable> *presentable; // ivar: _presentable
@property (readonly, nonatomic) NSUInteger presentationBehaviors;
@property (readonly, nonatomic) BOOL preventsAutomaticDismissal;
@property (readonly, nonatomic) BOOL preventsInteractiveDismissal;
@property (readonly, nonatomic) NSUInteger statusBarStyleOverridesToSuppress;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *trailingView;


-(BOOL)_canShowWhileLocked;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)dealloc;
-(void)expressLabelViewDidChangeSize:(id)arg0 ;
-(void)expressTrailingView:(id)arg0 revealingCheckmarkAnimated:(BOOL)arg1 ;
-(void)loadView;
-(void)paymentPassWithUniqueIdentifier:(id)arg0 didReceiveBalanceUpdate:(id)arg1 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg0 didUpdateWithTransitPassProperties:(id)arg1 ;
-(void)presentableWillAppearAsBanner:(id)arg0 ;
-(void)revoked;
-(void)viewWillLayoutSubviews;
-(void)viewWillLayoutSubviewsWithTransitionCoordinator:(id)arg0 ;


@end


#endif