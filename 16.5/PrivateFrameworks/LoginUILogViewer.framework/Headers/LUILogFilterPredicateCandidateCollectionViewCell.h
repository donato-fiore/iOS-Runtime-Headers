// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LUILOGFILTERPREDICATECANDIDATECOLLECTIONVIEWCELL_H
#define LUILOGFILTERPREDICATECANDIDATECOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UILabel;



@interface LUILogFilterPredicateCandidateCollectionViewCell : UICollectionViewCell

@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)_createTitleLabel;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setupUI;
-(void)layoutSubViews;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif