// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIPICKERCONTENTVIEW_H
#define UIPICKERCONTENTVIEW_H



#import "UIView.h"
#import "UILabel.h"
#import "UIImageView.h"

@interface UIPickerContentView : UIView {
    UILabel *_titleLabel;
    UIImageView *_checkView;
    ? _pickerContentViewFlags;
}


@property (nonatomic, getter=isChecked) BOOL checked;
@property (readonly, nonatomic) UILabel *titleLabel;


+(CGFloat)_checkmarkOffset;
-(BOOL)_isSelectable;
-(BOOL)isHighlighted;
-(CGFloat)labelWidthForBounds:(struct CGRect )arg0 ;
-(id)checkedColor;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif