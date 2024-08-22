// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REMOTEUISECTIONFOOTER_H
#define REMOTEUISECTIONFOOTER_H

@class UIView, NSString, UIButton, NSURL, UILabel;
@protocol RemoteUITableFooter, RUITableFooterDelegate;


#import "RUILinkLabel.h"

@interface RemoteUISectionFooter : UIView <RemoteUITableFooter>

 {
    BOOL _usesCustomTextAlignment;
    CGFloat _topMarginValue;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<RUITableFooterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *linkAction; // ivar: _linkAction
@property (readonly, nonatomic) UIButton *linkButton;
@property (readonly, nonatomic) RUILinkLabel *linkLabel; // ivar: _linkLabel
@property (retain, nonatomic) NSURL *linkURL; // ivar: _linkURL
@property (readonly) Class superclass;
@property (readonly, nonatomic) UILabel *textLabel;


-(CGFloat)_footerHeightForWidth:(CGFloat)arg0 ;
-(CGFloat)_getTopMargin;
-(CGFloat)footerHeightForWidth:(CGFloat)arg0 inTableView:(id)arg1 ;
-(CGFloat)footerHeightForWidth:(CGFloat)arg0 inView:(id)arg1 ;
-(id)initWithAttributes:(id)arg0 ;
-(struct CGSize )_labelSizeForWidth:(CGFloat)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_linkPressed;
-(void)layoutSubviews;
-(void)setFont:(id)arg0 ;
-(void)setText:(id)arg0 attributes:(id)arg1 ;
-(void)setTextAlignment:(NSInteger)arg0 ;
-(void)setTextColor:(id)arg0 ;
-(void)setTopMargin:(CGFloat)arg0 ;


@end


#endif