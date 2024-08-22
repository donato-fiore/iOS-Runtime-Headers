// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTSUPPORTTOPICEXPLANATIONCOLLECTIONVIEWCELL_H
#define PKACCOUNTSUPPORTTOPICEXPLANATIONCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UILabel, UIImageView;



@interface PKAccountSupportTopicExplanationCollectionViewCell : UICollectionViewCell {
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    UIImageView *_iconImageView;
}




-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setExplanationContent:(id)arg0 ;


@end


#endif