// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TUIEMOJIVARIANTCELL_H
#define TUIEMOJIVARIANTCELL_H

@class UIView, EMFEmojiToken, UILabel;



@interface TUIEmojiVariantCell : UIView

@property (readonly, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (readonly, nonatomic) EMFEmojiToken *emojiToken; // ivar: _emojiToken
@property (nonatomic, getter=isHighlighted) BOOL highlighted; // ivar: _highlighted
@property (readonly, nonatomic) UILabel *labelView; // ivar: _labelView


-(id)initWithFrame:(struct CGRect )arg0 token:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif