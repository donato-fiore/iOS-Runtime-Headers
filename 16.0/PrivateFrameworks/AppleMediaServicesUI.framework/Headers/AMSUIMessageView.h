// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSUIMESSAGEVIEW_H
#define AMSUIMESSAGEVIEW_H

@class UIView, UIImageView, AMSDialogAction, UIScrollView, NSArray, NSAttributedString, UIColor;


#import "AMSUICommonView.h"
#import "AMSUICommonImageView.h"
#import "AMSUIMessageViewLayoutContext.h"
#import "AMSUIPopoverShapeLayerView.h"
#import "AMSUICommonTextView.h"

@interface AMSUIMessageView : AMSUICommonView

@property (retain, nonatomic) UIView *accessorySecondaryView; // ivar: _accessorySecondaryView
@property (retain, nonatomic) UIView *accessoryView; // ivar: _accessoryView
@property (retain, nonatomic) UIImageView *backgroundImageView; // ivar: _backgroundImageView
@property (readonly, nonatomic) AMSDialogAction *bodyAction; // ivar: _bodyAction
@property (retain, nonatomic) UIScrollView *containerView; // ivar: _containerView
@property (retain, nonatomic) NSArray *footerButtonViews; // ivar: _footerButtonViews
@property (retain, nonatomic) UIView *imageContainerView; // ivar: _imageContainerView
@property (nonatomic) NSUInteger imageStyle; // ivar: _imageStyle
@property (readonly, nonatomic) AMSUICommonImageView *imageView; // ivar: _imageView
@property (nonatomic) BOOL isSizing; // ivar: _isSizing
@property (retain, nonatomic) AMSUIMessageViewLayoutContext *layoutContext; // ivar: _layoutContext
@property (retain, nonatomic) AMSUIPopoverShapeLayerView *maskShapeView; // ivar: _maskShapeView
@property (retain, nonatomic) NSAttributedString *message; // ivar: _message
@property (nonatomic) BOOL preLayoutImageView; // ivar: _preLayoutImageView
@property (copy, nonatomic) UIColor *separatorColor; // ivar: _separatorColor
@property (retain, nonatomic) NSArray *separatorViews; // ivar: _separatorViews
@property (nonatomic) NSUInteger style; // ivar: _style
@property (readonly, nonatomic) AMSUICommonTextView *textView; // ivar: _textView
@property (retain, nonatomic) NSAttributedString *title; // ivar: _title


-(BOOL)_layoutHeightDependsOnWidth;
-(NSUInteger)_axesForDerivingIntrinsicContentSizeFromLayoutSize;
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
-(void)_setupImageView;
-(void)_setupInitialLayout;
-(void)_startObservations;
-(void)_syncRectsFromContext;
-(void)dealloc;
-(void)layoutSubviews;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)removeBubbleArrowMaskView;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setBodyDialogAction:(id)arg0 target:(id)arg1 action:(SEL)arg2 ;
-(void)setFooterForDialogActions:(id)arg0 target:(id)arg1 action:(SEL)arg2 ;
-(void)setNeedsLayout;
-(void)setupBubbleArrowMaskView;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif