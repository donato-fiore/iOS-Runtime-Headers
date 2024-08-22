// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MUAPPLERATINGROWVIEW_H
#define MUAPPLERATINGROWVIEW_H

@class MKViewWithHairline, UILabel;
@protocol MURatingPercentageViewModel;



@interface MUAppleRatingRowView : MKViewWithHairline {
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}


@property (retain, nonatomic) NSObject<MURatingPercentageViewModel> *viewModel; // ivar: _viewModel


-(id)_attributesWithFont:(id)arg0 color:(id)arg1 ;
-(id)_ratingSubtitleAttributedString;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_contentSizeDidChange;
-(void)_setupConstraints;
-(void)_setupSubviews;
-(void)_updateAppearance;


@end


#endif