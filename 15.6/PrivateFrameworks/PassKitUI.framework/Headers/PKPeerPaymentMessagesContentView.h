// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPEERPAYMENTMESSAGESCONTENTVIEW_H
#define PKPEERPAYMENTMESSAGESCONTENTVIEW_H

@class UIView, UIActivityIndicatorView, UIImageView, UILabel;


#import "PKPeerPaymentMessagesRoundedButton.h"

@interface PKPeerPaymentMessagesContentView : UIView

@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator; // ivar: _activityIndicator
@property (retain, nonatomic) PKPeerPaymentMessagesRoundedButton *button; // ivar: _button
@property (nonatomic) ? contentAlignment; // ivar: _contentAlignment
@property (nonatomic) UIEdgeInsets contentInset; // ivar: _contentInset
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) UILabel *label; // ivar: _label
@property (nonatomic) CGFloat verticalPadding; // ivar: _verticalPadding


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif