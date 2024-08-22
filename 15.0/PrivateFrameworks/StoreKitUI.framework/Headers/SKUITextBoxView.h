// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUITEXTBOXVIEW_H
#define SKUITEXTBOXVIEW_H

@class UIControl, UILabel, UIImageView, NSString;


#import "SKUIColorScheme.h"

@interface SKUITextBoxView : UIControl {
    UILabel *_moreButtonLabel;
    UIImageView *_ratingImageView;
    UILabel *_ratingLabel;
    UILabel *_subtitleLabel;
    *__CTFrame _textFrame;
    UILabel *_titleLabel;
    *__CTFrame _titleTextFrame;
    *__CTLine _truncationToken;
    NSString *_underlyingText;
    BOOL _titleTextIsNaturallyRTL;
}


@property (retain, nonatomic) SKUIColorScheme *colorScheme; // ivar: _colorScheme
@property (nonatomic) UIEdgeInsets contentInsets; // ivar: _contentInsets
@property (copy, nonatomic) NSString *moreButtonTitle;
@property (nonatomic) NSInteger numberOfVisibleLines; // ivar: _numberOfVisibleLines
@property (nonatomic) CGFloat rating; // ivar: _rating
@property (copy, nonatomic) NSString *ratingText;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) BOOL textIsNaturallyRTL; // ivar: _textIsNaturallyRTL
@property (nonatomic) UIEdgeInsets titleInsets; // ivar: _titleInsets
@property (nonatomic) NSInteger truncationStyle; // ivar: _truncationStyle


-(id)_moreButtonLabel;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_textSizeToFitSize:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct __CTFrame *)_textFrame;
-(void)dealloc;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)reset;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setFixedWidthTextFrame:(struct __CTFrame *)arg0 ;
-(void)setFixedWidthTitleTextFrame:(struct __CTFrame *)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setTextFrameWithText:(id)arg0 ;
-(void)setTitle:(id)arg0 ;


@end


#endif