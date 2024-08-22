// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPEERPAYMENTMESSAGESMULTIACTIONVIEW_H
#define PKPEERPAYMENTMESSAGESMULTIACTIONVIEW_H

@class UIView, UIActivityIndicatorView;


#import "PKPeerPaymentMessagesMultiActionViewButton.h"

@interface PKPeerPaymentMessagesMultiActionView : UIView {
    PKPeerPaymentMessagesMultiActionViewButton *_leadingButton;
    PKPeerPaymentMessagesMultiActionViewButton *_trailingButton;
    UIActivityIndicatorView *_leadingActivityIndicator;
    UIActivityIndicatorView *_trailingActivityIndicator;
    UIView *_leadingActivityIndicatorBackground;
    UIView *_trailingActivityIndicatorBackground;
}


@property (copy, nonatomic) id *actionHandler; // ivar: _actionHandler
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (nonatomic) NSUInteger leadingAction;
@property (nonatomic) NSUInteger trailingAction;
@property (nonatomic) BOOL usesFlexibleButtonWidth; // ivar: _usesFlexibleButtonWidth


+(struct CGSize )referenceSize;
-(id)_axIdentifierForAction:(NSUInteger)arg0 ;
-(id)_button;
-(id)_titleForAction:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_handleActionButton:(id)arg0 ;
-(void)layoutSubviews;
-(void)setActivityIndicatorVisible:(BOOL)arg0 forAction:(NSUInteger)arg1 ;


@end


#endif