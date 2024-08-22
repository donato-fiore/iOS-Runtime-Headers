// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSUIMESSAGEVIEW_H
#define AMSUIMESSAGEVIEW_H

@class UIView, UIImageView, AMSDialogAction, NSArray, NSAttributedString, UIColor;


#import "AMSUICommonView.h"
#import "AMSUICommonImageView.h"
#import "AMSUIMessageViewLayoutContext.h"
#import "AMSUICommonTextView.h"

@interface AMSUIMessageView : AMSUICommonView

@property (retain, nonatomic) UIView *accessoryView; // ivar: _accessoryView
@property (retain, nonatomic) UIImageView *backgroundImageView; // ivar: _backgroundImageView
@property (readonly, nonatomic) AMSDialogAction *bodyAction; // ivar: _bodyAction
@property (retain, nonatomic) UIView *containerView; // ivar: _containerView
@property (retain, nonatomic) NSArray *footerButtonViews; // ivar: _footerButtonViews
@property (readonly, nonatomic) AMSUICommonImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) AMSUIMessageViewLayoutContext *layoutContext; // ivar: _layoutContext
@property (retain, nonatomic) NSAttributedString *message; // ivar: _message
@property (nonatomic) BOOL preLayoutImageView; // ivar: _preLayoutImageView
@property (copy, nonatomic) UIColor *separatorColor; // ivar: _separatorColor
@property (retain, nonatomic) NSArray *separatorViews; // ivar: _separatorViews
@property (nonatomic) NSUInteger style; // ivar: _style
@property (readonly, nonatomic) AMSUICommonTextView *textView; // ivar: _textView
@property (retain, nonatomic) NSAttributedString *title; // ivar: _title


-(id)_defaultMessageColor;
-(id)_defaultMessageFont;
-(id)_defaultTitleColor;
-(id)_defaultTitleFont;
-(id)_makeSeparatorView;
-(id)initWithStyle:(NSUInteger)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_endObservations;
-(void)_setAccessibility;
-(void)_setBackground;
-(void)_setShadow;
-(void)_setTextAlignment;
-(void)_setupDefaults;
-(void)_setupInitialLayout;
-(void)_startObservations;
-(void)dealloc;
-(void)layoutSubviews;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setBodyDialogAction:(id)arg0 target:(id)arg1 action:(SEL)arg2 ;
-(void)setFooterForDialogActions:(id)arg0 target:(id)arg1 action:(SEL)arg2 ;
-(void)setNeedsLayout;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif