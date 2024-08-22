// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUISPORTSPRODUCTBANNERVIEW_H
#define VUISPORTSPRODUCTBANNERVIEW_H

@class SLAttributionView, UIView, NSArray;


#import "VUIBaseView.h"
#import "VUILabel.h"
#import "VUISeparatorView.h"

@interface VUISportsProductBannerView : VUIBaseView

@property (retain, nonatomic) SLAttributionView *attributionView; // ivar: _attributionView
@property (retain, nonatomic) UIView *availabilityImageView; // ivar: _availabilityImageView
@property (nonatomic) CGFloat availabilityImageViewLeftMargin; // ivar: _availabilityImageViewLeftMargin
@property (retain, nonatomic) VUILabel *availabilityTextView; // ivar: _availabilityTextView
@property (retain, nonatomic) NSArray *buttonViews; // ivar: _buttonViews
@property (retain, nonatomic) NSArray *descriptionLabels; // ivar: _descriptionLabels
@property (retain, nonatomic) VUILabel *footerLabel; // ivar: _footerLabel
@property (retain, nonatomic) NSArray *rowLabels; // ivar: _rowLabels
@property (retain, nonatomic) NSArray *scoreLabels; // ivar: _scoreLabels
@property (retain, nonatomic) VUISeparatorView *separatorView; // ivar: _separatorView
@property (retain, nonatomic) VUILabel *titleLabel; // ivar: _titleLabel


+(BOOL)shouldDisplayScoresBelowLabelsForWindowWidth:(CGFloat)arg0 ;
+(BOOL)shouldUseVerticalLayoutForWindowWidth:(CGFloat)arg0 ;
-(CGFloat)_maxScoreWidthForColumn:(NSUInteger)arg0 availableWidth:(CGFloat)arg1 ;
-(CGFloat)_totalMaxScoreWidthWithAvailableWidth:(CGFloat)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_availabilityImageSizeWithSize:(struct CGSize )arg0 ;
-(struct CGSize )_iOS_layoutSubviewsWithSize:(struct CGSize )arg0 computationOnly:(BOOL)arg1 ;
-(struct CGSize )vui_layoutSubviews:(struct CGSize )arg0 computationOnly:(BOOL)arg1 ;
-(void)_layoutButtonsWithOrigin:(struct CGPoint )arg0 buttonHeight:(CGFloat)arg1 buttonWidth:(CGFloat)arg2 spacing:(CGFloat)arg3 ;
-(void)_layoutLabels:(id)arg0 scoreLabels:(id)arg1 withOrigin:(struct CGPoint )arg2 maxWidth:(CGFloat)arg3 ;
-(void)_layoutLabels:(id)arg0 withOrigin:(struct CGPoint )arg1 maxWidth:(CGFloat)arg2 ;
-(void)_layoutScoresWithOrigin:(struct CGPoint )arg0 availableWidth:(CGFloat)arg1 padding:(CGFloat)arg2 ;


@end


#endif