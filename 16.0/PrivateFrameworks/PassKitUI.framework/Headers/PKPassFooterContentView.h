// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPASSFOOTERCONTENTVIEW_H
#define PKPASSFOOTERCONTENTVIEW_H

@class UIView, UIButton, PKPass, PKPaymentPass, PKSecureElementPass;
@protocol PKPassFooterContentViewDelegate;


#import "PKLinkedAppIconView.h"

@interface PKPassFooterContentView : UIView {
    UIButton *_infoButton;
}


@property (readonly, nonatomic) PKLinkedAppIconView *appIconView; // ivar: _appIconView
@property (readonly, nonatomic) UIView *bottomRule; // ivar: _bottomRule
@property (readonly, nonatomic) NSInteger coachingState; // ivar: _coachingState
@property (weak, nonatomic) NSObject<PKPassFooterContentViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) CGFloat infoButtonAlpha;
@property (readonly, nonatomic) CGRect infoButtonFrame;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated; // ivar: _invalidated
@property (readonly, nonatomic) PKPass *pass; // ivar: _pass
@property (readonly, nonatomic, getter=isPassAuthorized) BOOL passAuthorized;
@property (readonly, nonatomic) PKPaymentPass *paymentPass;
@property (readonly, nonatomic, getter=isPhysicalButtonRequired) BOOL physicalButtonRequired; // ivar: _physicalButtonRequired
@property (readonly, nonatomic) BOOL requestPileSuppression; // ivar: _requestPileSuppression
@property (readonly, nonatomic) PKSecureElementPass *secureElementPass; // ivar: _secureElementPass
@property (readonly, nonatomic) NSInteger style; // ivar: _style


-(id)_buttonWithTitle:(id)arg0 action:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithPass:(id)arg0 ;
-(void)_didInvalidate;
-(void)_infoButtonPressed:(id)arg0 ;
-(void)dealloc;
-(void)didBecomeHiddenAnimated:(BOOL)arg0 ;
-(void)didBecomeVisibleAnimated:(BOOL)arg0 ;
-(void)invalidate;
-(void)layoutSubviews;
-(void)showFullScreenBarcode;
-(void)willBecomeHiddenAnimated:(BOOL)arg0 ;
-(void)willBecomeVisibleAnimated:(BOOL)arg0 ;


@end


#endif