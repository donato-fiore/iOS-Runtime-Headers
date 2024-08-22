// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPEERPAYMENTHEROBUBBLEVIEW_H
#define PKPEERPAYMENTHEROBUBBLEVIEW_H

@class UIImageView, UILabel, UIView;


#import "PKPeerPaymentBubbleView.h"

@interface PKPeerPaymentHeroBubbleView : UIImageView {
    PKPeerPaymentBubbleView *_peerPaymentBubbleView;
    NSUInteger _bubbleState;
}


@property (readonly, nonatomic) UILabel *bubbleAmountLabel; // ivar: _bubbleAmountLabel
@property (readonly, nonatomic) UIView *pluginBalloonView; // ivar: _pluginBalloonView


-(NSUInteger)_bubbleStateForRegistrationState:(NSUInteger)arg0 ;
-(id)_bubbleAmountLabelTextWithAmount:(id)arg0 ;
-(id)initWithCurrencyAmount:(id)arg0 regitrationFlowState:(NSUInteger)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif