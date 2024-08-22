// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTAUTHORIZATIONFOOTERVIEW_H
#define PKPAYMENTAUTHORIZATIONFOOTERVIEW_H

@class UIView, UILabel, PKGlyphView, UIButton, NSString, NSMutableArray, NSLayoutConstraint, NSArray;
@protocol PKGlyphViewDelegate, PKPaymentAuthorizationFooterViewDelegate;


#import "PKPaymentAuthorizationLayout.h"

@interface PKPaymentAuthorizationFooterView : UIView <PKGlyphViewDelegate>

 {
    UILabel *_labelView;
    PKGlyphView *_glyphView;
    UIButton *_payWithPasscodeButton;
    UILabel *_passbookPaymentDetailsView;
    UIView *_separatorView;
    UIView *_lockupView;
    NSString *_overrideString;
    NSUInteger _stateTransitionIndex;
    BOOL _deferringState;
    BOOL _deferredStateRequiresRetry;
    NSString *_deferredStateString;
    BOOL _biometricSuccessOutstanding;
    NSMutableArray *_completionHandlers;
    NSMutableArray *_deferredCompletionHandlers;
    NSLayoutConstraint *_separatorLeftConstraint;
    NSArray *_hiddenConstraints;
    NSArray *_staticRegularConstraints;
    NSMutableArray *_dynamicRegularConstraints;
    BOOL _compact;
    BOOL _compactUserIntent;
    NSInteger _constraintState;
    NSInteger _queuedConstraintState;
    BOOL _constraintsDirty;
    BOOL _isPad;
    BOOL _hasPearl;
    CGFloat _minimumHeight;
    unsigned int _emphasizedEdge;
}


@property (retain, nonatomic) NSString *authorizingTitle; // ivar: _authorizingTitle
@property (retain, nonatomic) NSString *biometricConfirmationTitle; // ivar: _biometricConfirmationTitle
@property (nonatomic) NSInteger completionStyle; // ivar: _completionStyle
@property (nonatomic) NSUInteger confirmationStyle; // ivar: _confirmationStyle
@property (retain, nonatomic) NSString *confirmationTitle; // ivar: _confirmationTitle
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPaymentAuthorizationFooterViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hidesSeparatorView; // ivar: _hidesSeparatorView
@property (retain, nonatomic) PKPaymentAuthorizationLayout *layout; // ivar: _layout
@property (nonatomic) BOOL occludesBodyView; // ivar: _occludesBodyView
@property (readonly, nonatomic, getter=isOffscreen) BOOL offscreen;
@property (nonatomic) BOOL preventBiometricStateFallbacks; // ivar: _preventBiometricStateFallbacks
@property (nonatomic) BOOL preventPasscodeFallbackForBiometricFailure; // ivar: _preventPasscodeFallbackForBiometricFailure
@property (nonatomic) NSUInteger requestType; // ivar: _requestType
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (nonatomic) NSInteger userIntentStyle; // ivar: _userIntentStyle


-(BOOL)_shouldCompact;
-(BOOL)setConstraintState:(NSInteger)arg0 ;
-(id)_payWithPasscodeTitleForState:(NSInteger)arg0 ;
-(id)_titleAttributedStringForState:(NSInteger)arg0 ;
-(id)_titleLabelAttributedString:(id)arg0 ;
-(id)createDefaultHeightConstraintForConstraintState:(NSInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 layout:(id)arg1 ;
-(void)_createSubviews;
-(void)_payWithPasscodePressed;
-(void)_prepareConstraints;
-(void)dealloc;
-(void)glyphView:(id)arg0 revealingCheckmark:(BOOL)arg1 ;
-(void)glyphViewUserIntentEdgeDidChange:(id)arg0 ;
-(void)setHidden:(BOOL)arg0 ;
-(void)updateConstraints;
-(void)updateRotation;


@end


#endif