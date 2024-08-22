// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RUILINKLABEL_H
#define RUILINKLABEL_H

@class UIView, UIButton, UIFont, NSString, UILabel;



@interface RUILinkLabel : UIView {
    UIButton *_linkButton;
    NSInteger _textAlignment;
}


@property (copy, nonatomic) id *action; // ivar: _action
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (copy, nonatomic) UIFont *font;
@property (nonatomic) NSInteger lineBreakMode;
@property (readonly, nonatomic) UIButton *linkButton;
@property (nonatomic) NSInteger numberOfLines;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) NSInteger textAlignment;
@property (readonly, nonatomic) UILabel *textLabel; // ivar: _textLabel


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_linkPressed;
-(void)_resize;
-(void)layoutSubviews;


@end


#endif