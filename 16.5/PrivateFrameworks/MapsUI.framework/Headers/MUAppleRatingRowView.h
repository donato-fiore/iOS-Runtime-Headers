// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUAPPLERATINGROWVIEW_H
#define MUAPPLERATINGROWVIEW_H

@class MKViewWithHairline, UILabel;
@protocol MURatingPercentageViewModel;


#import "MUStackLayout.h"
#import "MUAppleRatingRowSubtitleView.h"

@interface MUAppleRatingRowView : MKViewWithHairline {
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    MUStackLayout *_stackLayout;
    MUAppleRatingRowSubtitleView *_subtitleView;
    BOOL _ratingsCountAnimationEnabled;
}


@property (retain, nonatomic) NSObject<MURatingPercentageViewModel> *viewModel; // ivar: _viewModel


+(NSInteger)_ratingsValueAnimationFromViewModel:(id)arg0 toViewModel:(id)arg1 ;
+(id)_numberOfPeopleMonospacedFont;
-(id)_attributesWithFont:(id)arg0 color:(id)arg1 ;
-(id)_percentageStringComponentsFromCurrentViewModel;
-(id)_ratingSubtitleAttributedString;
-(id)initWithFrame:(struct CGRect )arg0 ratingsCountAnimationEnabled:(BOOL)arg1 ;
-(void)_contentSizeDidChange;
-(void)_setupConstraints;
-(void)_setupSubviews;
-(void)_updateAppearance;
-(void)_updateAppearanceAnimatingFromPreviousViewModel:(id)arg0 ;


@end


#endif