// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC9SEYMOURUI27ACCOUNTSETTINGAVATARROWCELL_H
#define _TTC9SEYMOURUI27ACCOUNTSETTINGAVATARROWCELL_H

@class UICollectionViewListCell;



@interface _TtC9SeymourUI27AccountSettingAvatarRowCell : UICollectionViewListCell {
    ? delegate;
    ? itemInfo;
    ? avatarViewController;
    ? layout;
    ? stackView;
    ? accountStackView;
    ? titleLabel;
    ? subtitleLabel;
    ? userImageView;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)prepareForReuse;


@end


#endif