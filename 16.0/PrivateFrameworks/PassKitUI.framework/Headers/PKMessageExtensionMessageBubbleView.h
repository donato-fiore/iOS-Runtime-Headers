// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKMESSAGEEXTENSIONMESSAGEBUBBLEVIEW_H
#define PKMESSAGEEXTENSIONMESSAGEBUBBLEVIEW_H

@class UIView, UIImageView, UILabel, UIActivityIndicatorView;


#import "PKSharingMessageExtensionViewProperties.h"

@interface PKMessageExtensionMessageBubbleView : UIView {
    UIView *_cardView;
    UIImageView *_cardArtImageView;
    UILabel *_leftTitleLabel;
    UILabel *_rightTitleLabel;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_buttonLabel;
    UIImageView *_buttonIconView;
    UIView *_buttonBackgroundView;
    UIActivityIndicatorView *_spinner;
    BOOL _isValidatingMessage;
    BOOL _isUsingFallbackImage;
}


@property (nonatomic) UIEdgeInsets contentInset; // ivar: _contentInset
@property (retain, nonatomic) PKSharingMessageExtensionViewProperties *properties; // ivar: _properties


-(id)init;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 isTemplateLayout:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_setupBubbleView;
-(void)beginValidateMessage;
-(void)completeValidateMessage;
-(void)layoutSubviews;


@end


#endif