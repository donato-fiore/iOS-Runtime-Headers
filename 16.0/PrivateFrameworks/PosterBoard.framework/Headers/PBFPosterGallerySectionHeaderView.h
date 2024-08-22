// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBFPOSTERGALLERYSECTIONHEADERVIEW_H
#define PBFPOSTERGALLERYSECTIONHEADERVIEW_H

@class UICollectionReusableView, UILabel, NSString;



@interface PBFPosterGallerySectionHeaderView : UICollectionReusableView {
    UILabel *_label;
    UILabel *_subtitleLabel;
}


@property (readonly, nonatomic) UILabel *label;
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, nonatomic) UILabel *subtitleLabel;
@property (copy, nonatomic) NSString *text; // ivar: _text


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif