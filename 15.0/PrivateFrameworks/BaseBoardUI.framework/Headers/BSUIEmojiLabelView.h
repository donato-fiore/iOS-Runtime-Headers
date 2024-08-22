// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BSUIEMOJILABELVIEW_H
#define BSUIEMOJILABELVIEW_H

@class UIView, UILabel, NSString, UIFont, UIColor;



@interface BSUIEmojiLabelView : UIView {
    UILabel *_emojiLabel;
    NSString *_rawText;
}


@property (nonatomic, getter=_textAlignmentFollowsWritingDirection, setter=_setTextAlignmentFollowsWritingDirection:) BOOL _textAlignmentFollowsWritingDirection;
@property (nonatomic) BOOL adjustsFontSizeToFitWidth;
@property (readonly, nonatomic) UILabel *contentLabel; // ivar: _contentLabel
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) NSInteger lineBreakMode;
@property (nonatomic) NSInteger numberOfLines;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) NSInteger textAlignment;
@property (retain, nonatomic) UIColor *textColor;


-(CGFloat)_baselineOffsetFromBottom;
-(CGFloat)_firstLineBaselineOffsetFromBoundsTop;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;


@end


#endif