// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERCONTENTACTIONFOOTERVIEW_H
#define PKPAYLATERCONTENTACTIONFOOTERVIEW_H

@class UIView, _UIBackdropView, NSString, UIColor, UIImage;


#import "PKPayLaterContentActionFooterViewContent.h"

@interface PKPayLaterContentActionFooterView : UIView {
    NSInteger _backdropStyle;
    _UIBackdropView *_backdropView;
    UIView *_topSeparatorView;
    PKPayLaterContentActionFooterViewContent *_content;
}


@property (copy, nonatomic) NSString *buttonText; // ivar: _buttonText
@property (retain, nonatomic) UIColor *buttonTintColor; // ivar: _buttonTintColor
@property (retain, nonatomic) UIColor *buttonTitleColor; // ivar: _buttonTitleColor
@property (copy, nonatomic) NSString *leadingDetailText; // ivar: _leadingDetailText
@property (retain, nonatomic) UIColor *leadingDetailTextColor; // ivar: _leadingDetailTextColor
@property (retain, nonatomic) UIImage *leadingTitleIcon; // ivar: _leadingTitleIcon
@property (copy, nonatomic) NSString *leadingTitleText; // ivar: _leadingTitleText
@property (retain, nonatomic) UIColor *leadingTitleTextColor; // ivar: _leadingTitleTextColor
@property (nonatomic) BOOL showSpinner; // ivar: _showSpinner


+(id)leadingTitleFont;
-(NSInteger)preferredBackdropStyle;
-(id)initWithDelegate:(id)arg0 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 isTemplateLayout:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)layoutSubviews;


@end


#endif