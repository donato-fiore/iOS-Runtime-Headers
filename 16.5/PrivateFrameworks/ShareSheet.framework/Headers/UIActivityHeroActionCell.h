// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIACTIVITYHEROACTIONCELL_H
#define UIACTIVITYHEROACTIONCELL_H

@class UIImageView, NSLayoutConstraint, UIStackView, UILabel;


#import "UIActivityActionCell.h"

@interface UIActivityHeroActionCell : UIActivityActionCell

@property (retain, nonatomic) UIImageView *activityImageView; // ivar: _activityImageView
@property (retain, nonatomic) NSLayoutConstraint *bottomInsetConstraint; // ivar: _bottomInsetConstraint
@property (retain, nonatomic) UIStackView *stackView; // ivar: _stackView
@property (retain, nonatomic) NSLayoutConstraint *tallBottomInsetConstraint; // ivar: _tallBottomInsetConstraint
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


+(CGFloat)heightForNumberOfLines:(CGFloat)arg0 ;
+(NSInteger)numberOfLinesForTitle:(id)arg0 itemWidth:(CGFloat)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)applyLayoutAttributes:(id)arg0 ;
-(void)prepareForReuse;
-(void)setDisabled:(BOOL)arg0 ;
-(void)updateConstraints;


@end


#endif