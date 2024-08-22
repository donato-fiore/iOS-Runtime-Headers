// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKSTACKEDLABELCELL_H
#define PKSTACKEDLABELCELL_H

@class UILabel, UIImageView, UIImage, NSString, UIColor;


#import "PKTableViewCell.h"

@interface PKStackedLabelCell : PKTableViewCell {
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UIImageView *_detailImageView;
    BOOL _isRTL;
}


@property (retain, nonatomic) UIImage *detailImage; // ivar: _detailImage
@property (copy, nonatomic) NSString *detailText; // ivar: _detailText
@property (retain, nonatomic) UIColor *detailTextColor; // ivar: _detailTextColor
@property (copy, nonatomic) NSString *titleText; // ivar: _titleText
@property (retain, nonatomic) UIColor *titleTextColor; // ivar: _titleTextColor


-(id)initWithReuseIdentifier:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_applyLabelStyles;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif