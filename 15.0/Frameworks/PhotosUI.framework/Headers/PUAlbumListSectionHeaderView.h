// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUALBUMLISTSECTIONHEADERVIEW_H
#define PUALBUMLISTSECTIONHEADERVIEW_H

@class UICollectionReusableView, NSArray, UILabel, NSString, UIFont;



@interface PUAlbumListSectionHeaderView : UICollectionReusableView

@property (retain, nonatomic, setter=_setConstraints:) NSArray *_constraints; // ivar: __constraints
@property (readonly, nonatomic) UILabel *_titleLabel; // ivar: __titleLabel
@property (nonatomic) UIEdgeInsets sectionHeaderInsets; // ivar: _sectionHeaderInsets
@property (copy, nonatomic) NSString *sectionHeaderTitle; // ivar: _sectionHeaderTitle
@property (retain, nonatomic) UIFont *sectionHeaderTitleFont; // ivar: _sectionHeaderTitleFont


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif