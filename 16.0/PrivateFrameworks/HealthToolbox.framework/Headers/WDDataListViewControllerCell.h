// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WDDATALISTVIEWCONTROLLERCELL_H
#define WDDATALISTVIEWCONTROLLERCELL_H

@class UITableViewCell, NSLayoutConstraint, NSArray, UIImageView, UILabel;



@interface WDDataListViewControllerCell : UITableViewCell {
    NSLayoutConstraint *_largeTextIconImageCenterYAnchorConstraint;
    NSArray *_regularConstraints;
    NSArray *_largeTextConstraints;
}


@property (retain, nonatomic) UIImageView *iconImageView; // ivar: _iconImageView
@property (retain, nonatomic) UILabel *subtitleTextLabel; // ivar: _subtitleTextLabel
@property (retain, nonatomic) UILabel *titleTextLabel; // ivar: _titleTextLabel


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_updateFont;
-(void)_updateForCurrentSizeCategory;
-(void)layoutSubviews;
-(void)setupConstraints;
-(void)setupSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif