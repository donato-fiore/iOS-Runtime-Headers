// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSEARCHQUERYSTATUSFOOTER_H
#define PXSEARCHQUERYSTATUSFOOTER_H

@class UICollectionReusableView, UILabel;



@interface PXSearchQueryStatusFooter : UICollectionReusableView

@property (retain, nonatomic) UILabel *detailLabel; // ivar: _detailLabel
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


+(id)reuseIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)setSearchText:(id)arg0 ;


@end


#endif