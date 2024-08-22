// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIEDITORIALLINKVIEW_H
#define SKUIEDITORIALLINKVIEW_H

@class UIView, NSMutableArray, UIColor;
@protocol SKUIEditorialLinkViewDelegate;


#import "SKUIEditorialLinkLayout.h"

@interface SKUIEditorialLinkView : UIView {
    NSMutableArray *_buttons;
    UIColor *_highlightedTextColor;
    UIColor *_textColor;
}


@property (weak, nonatomic) NSObject<SKUIEditorialLinkViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSInteger horizontalAlignment; // ivar: _horizontalAlignment
@property (retain, nonatomic) SKUIEditorialLinkLayout *linkLayout; // ivar: _layout


-(id)_newButton;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_linkButtonAction:(id)arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setColoringWithColorScheme:(id)arg0 ;
-(void)tintColorDidChange;


@end


#endif