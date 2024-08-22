// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUCURATIONKEYASSETCOMPARISONDEBUGVIEWSECTIONHEADERVIEW_H
#define PUCURATIONKEYASSETCOMPARISONDEBUGVIEWSECTIONHEADERVIEW_H

@class UICollectionViewCell, UILabel, NSString;



@interface PUCurationKeyAssetComparisonDebugViewSectionHeaderView : UICollectionViewCell {
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}


@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif