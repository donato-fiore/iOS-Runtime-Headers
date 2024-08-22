// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPEERPAYMENTMESSAGESNUMBERPADVIEW_H
#define PKPEERPAYMENTMESSAGESNUMBERPADVIEW_H

@class UIView;



@interface PKPeerPaymentMessagesNumberPadView : UIView {
    UIView *_buttonContainerView;
    PKPeerPaymentNumberPadActionButton"] _buttons;
}


@property (copy, nonatomic) id *actionHandler; // ivar: _actionHandler
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled


+(struct CGSize )referenceSize;
-(id)_buttonForAction:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_handleActionButton:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif