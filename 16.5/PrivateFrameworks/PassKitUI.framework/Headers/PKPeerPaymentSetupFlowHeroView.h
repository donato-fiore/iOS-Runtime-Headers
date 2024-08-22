// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPEERPAYMENTSETUPFLOWHEROVIEW_H
#define PKPEERPAYMENTSETUPFLOWHEROVIEW_H

@class UIView, UIImageView, PKPeerPaymentCredential;


#import "PKPeerPaymentHeroBubbleView.h"

@interface PKPeerPaymentSetupFlowHeroView : UIView {
    UIImageView *_passSnapshotView;
    PKPeerPaymentHeroBubbleView *_bubbleView;
    PKPeerPaymentCredential *_credential;
    NSInteger _animationState;
}




-(BOOL)_bubbleIsOnLeftSide;
-(BOOL)_shouldShowBubbleView;
-(id)_defaultCurrencyAmount;
-(id)initWithPeerPaymentPassSnapShot:(id)arg0 peerPaymentCredential:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_updateImageViewDynamicColors;
-(void)layoutSubviews;
-(void)startAnimation;
-(void)startAnimationWithCompletion:(id)arg0 ;


@end


#endif