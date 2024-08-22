// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUCURATEDCOLLECTIONSUMMARYVIEW_H
#define MUCURATEDCOLLECTIONSUMMARYVIEW_H

@class UIView, UILabel, UIImageView, UILayoutGuide;
@protocol MUCuratedCollectionSummary;



@interface MUCuratedCollectionSummaryView : UIView {
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UIImageView *_imageView;
    UILayoutGuide *_layoutGuide;
}


@property (retain, nonatomic) NSObject<MUCuratedCollectionSummary> *viewModel; // ivar: _viewModel


-(id)_attributesWithFont:(id)arg0 color:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)publisherString;
-(void)_contentSizeDidChange;
-(void)_setupConstraints;
-(void)_setupSubviews;
-(void)_updateAppearance;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif