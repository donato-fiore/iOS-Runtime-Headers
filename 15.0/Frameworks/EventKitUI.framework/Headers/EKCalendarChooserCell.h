// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKCALENDARCHOOSERCELL_H
#define EKCALENDARCHOOSERCELL_H

@class UIImage, UIImageView, UIColor, NSTextAttachment, NSString;


#import "EKUITableViewCell.h"

@interface EKCalendarChooserCell : EKUITableViewCell {
    UIImage *_colorDot;
    UIImage *_colorDotHighlighted;
    UIImageView *_colorDotView;
    UIImageView *_checkmarkView;
    UIColor *_checkMarkColor;
    NSTextAttachment *_colorDotAttachment;
}


@property (nonatomic) BOOL checked; // ivar: _checked
@property (nonatomic) BOOL multiSelectStyle; // ivar: _multiSelectStyle
@property (retain, nonatomic) UIColor *selectionCheckmarkColor; // ivar: _selectionCheckmarkColor
@property (nonatomic) BOOL shouldAnimate; // ivar: _shouldAnimate
@property (nonatomic) BOOL showCheckmarksOnLeft; // ivar: _showCheckmarksOnLeft
@property (nonatomic) BOOL showingSelectionCheckmark; // ivar: _showingSelectionCheckmark
@property (nonatomic) BOOL showsColorDot; // ivar: _showsColorDot
@property (retain, nonatomic) NSString *textLabelText; // ivar: _textLabelText


-(CGFloat)textLeadingIndent;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_updateTextLabelTextWithColorDot;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setAccessoryType:(NSInteger)arg0 ;
-(void)setColorDotHighlightedImage:(id)arg0 ;
-(void)setColorDotImage:(id)arg0 ;
-(void)setContentAlpha:(CGFloat)arg0 ;
-(void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)updateSelectionCheckmark;


@end


#endif