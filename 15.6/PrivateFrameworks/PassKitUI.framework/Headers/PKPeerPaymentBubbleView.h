// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPEERPAYMENTBUBBLEVIEW_H
#define PKPEERPAYMENTBUBBLEVIEW_H

@class UIView, PKPeerPayment3DTextView, UILabel, UIActivityIndicatorView, CAShapeLayer, UIImageView, NSTimer, NSDecimalNumber, NSString;
@protocol CKTranscriptPluginView, CKTranscriptPluginViewDelegate;


#import "PKContinuousButton.h"

@interface PKPeerPaymentBubbleView : UIView <CKTranscriptPluginView>

 {
    PKPeerPayment3DTextView *_renderView;
    BOOL _renderViewRemovedByLossOfWindow;
    BOOL _snapshotInProgress;
    BOOL _usedForSnapshotting;
    UILabel *_messageLabel;
    UILabel *_statusLabel;
    UIActivityIndicatorView *_actionSpinner;
    CAShapeLayer *_maskLayer;
    CGRect _lastBoundsForRoundedCornerLayout;
    UIImageView *_applePayLogoImageView;
    NSTimer *_testTimer;
}


@property (nonatomic) NSUInteger action; // ivar: _action
@property (readonly, nonatomic) PKContinuousButton *actionButton; // ivar: _actionButton
@property (copy, nonatomic) id *actionHandler; // ivar: _actionHandler
@property (copy, nonatomic) NSDecimalNumber *amount; // ivar: _amount
@property (nonatomic) UIEdgeInsets contentInset; // ivar: _contentInset
@property (copy, nonatomic) NSString *currency; // ivar: _currency
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL displaysApplePayLogo; // ivar: _displaysApplePayLogo
@property (nonatomic) BOOL hasRoundedCorners; // ivar: _hasRoundedCorners
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isLiveRenderingEnabled) BOOL liveRenderingEnabled; // ivar: _liveRenderingEnabled
@property (weak, nonatomic) NSObject<CKTranscriptPluginViewDelegate> *pluginViewDelegate;
@property (readonly, nonatomic) CGRect referenceBounds;
@property (readonly, nonatomic) CGSize referenceSize;
@property (nonatomic) BOOL showsActionSpinner; // ivar: _showsActionSpinner
@property (nonatomic) NSUInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (nonatomic) BOOL testTransition; // ivar: _testTransition
@property (nonatomic) BOOL usesWatchColors; // ivar: _usesWatchColors
@property (readonly, nonatomic) BOOL wantsOutline;


+(id)applePayLogo;
+(id)generatedSnapshotForDataURL:(id)arg0 contentInset:(struct UIEdgeInsets )arg1 isFromMe:(BOOL)arg2 ;
+(id)referenceBackgroundColor;
+(id)referenceBackgroundColorForState:(NSUInteger)arg0 ;
+(id)referenceWatchBackgroundColorForState:(NSUInteger)arg0 ;
+(struct CGSize )referenceSizeForPeerPaymentStatusResponse:(id)arg0 ;
+(struct CGSize )referenceSizeForState:(NSUInteger)arg0 ;
+(struct CGSize )referenceSizeForState:(NSUInteger)arg0 andAction:(NSUInteger)arg1 ;
-(CGFloat)_messageAlpha;
-(id)_backgroundColor;
-(id)_messageText;
-(id)_messageTextAttributes;
-(id)_statusText;
-(id)generatedSnapshot;
-(id)init;
-(id)initForSnapshotting;
-(id)initWithAmount:(id)arg0 currency:(id)arg1 state:(NSUInteger)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCurrencyAmount:(id)arg0 state:(NSUInteger)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)interactiveViews;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_actionButtonTapped:(id)arg0 ;
-(void)_commonInit;
-(void)_updateContent;
-(void)awakeFromNib;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)performPostRender:(id)arg0 ;
-(void)updateWithPaymentTransaction:(id)arg0 animated:(BOOL)arg1 ;
-(void)updateWithPeerPaymentMessage:(id)arg0 animated:(BOOL)arg1 ;
-(void)updateWithPeerPaymentStatus:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)updateWithPeerPaymentStatusResponse:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif