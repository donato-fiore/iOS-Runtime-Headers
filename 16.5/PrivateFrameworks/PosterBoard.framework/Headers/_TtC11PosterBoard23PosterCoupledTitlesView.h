// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11POSTERBOARD23POSTERCOUPLEDTITLESVIEW_H
#define _TTC11POSTERBOARD23POSTERCOUPLEDTITLESVIEW_H

@class UICollectionReusableView;



@interface _TtC11PosterBoard23PosterCoupledTitlesView : UICollectionReusableView {
    ? titleLabel;
    ? lockFooterLabel;
    ? homeFooterLabel;
    ? titleLabelSpacingFromTopEdge;
    ? footerLabelSpacingFromBottomEdge;
}


@property (nonatomic) CGFloat alpha;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif