// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11POSTERBOARD23POSTERSECTIONHEADERVIEW_H
#define _TTC11POSTERBOARD23POSTERSECTIONHEADERVIEW_H

@class UICollectionReusableView, NSString;



@interface _TtC11PosterBoard23PosterSectionHeaderView : UICollectionReusableView {
    ? title;
    ? titleLabel;
    ? titleLabelSpacingFromBottomEdge;
}


@property (nonatomic, copy) NSString *title;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif