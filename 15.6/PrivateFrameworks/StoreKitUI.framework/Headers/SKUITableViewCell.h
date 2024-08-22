// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUITABLEVIEWCELL_H
#define SKUITABLEVIEWCELL_H

@class UITableViewCell, UIColor;


#import "SKUIBorderView.h"

@interface SKUITableViewCell : UITableViewCell {
    SKUIBorderView *_bottomBorderView;
    SKUIBorderView *_topBorderView;
    CGFloat _titlePaddingLeft;
}


@property (nonatomic) CGFloat borderPaddingLeft; // ivar: _borderPaddingLeft
@property (copy, nonatomic) UIColor *bottomBorderColor;
@property (nonatomic) UIEdgeInsets textLabelInsets; // ivar: _textLabelInsets
@property (copy, nonatomic) UIColor *topBorderColor;


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_reloadBorderVisibility;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;


@end


#endif