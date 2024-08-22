// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKIDREGISTEREDREVIEWCELL_H
#define HKIDREGISTEREDREVIEWCELL_H

@class UITableViewCell, UILabel;



@interface HKIDRegisteredReviewCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


+(id)defaultReuseIdentifier;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_updateForCurrentSizeCategory;
-(void)setupConstraints;
-(void)setupSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif