// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKSPENDINGSUMMARYCHARTBARVIEW_H
#define PKSPENDINGSUMMARYCHARTBARVIEW_H

@class UIView, UIImageView, UIImage, PKSpendingSummary;



@interface PKSpendingSummaryChartBarView : UIView {
    UIImageView *_bar;
    UIView *_placeholder;
    UIImage *_image;
    CGFloat _barHeight;
    CGFloat _maximumHeight;
    PKSpendingSummary *_summary;
    id *_imageCompletion;
    uint8_t _generationCounter;
}


@property (nonatomic, getter=isBlurDisabled) BOOL blurDisabled; // ivar: _blurDisabled
@property (readonly, nonatomic) CGFloat minimumHeight; // ivar: _minimumHeight
@property (nonatomic) BOOL showPlaceholder; // ivar: _showPlaceholder


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_callCompletion;
-(void)_generateImageForSummary:(id)arg0 barHeight:(CGFloat)arg1 maximumHeight:(CGFloat)arg2 synchronous:(BOOL)arg3 ;
-(void)_updateImageWithImage:(id)arg0 ;
-(void)_updatePlaceholder;
-(void)configureWithSummary:(id)arg0 maximumHeight:(CGFloat)arg1 barHeight:(CGFloat)arg2 synchronous:(BOOL)arg3 completion:(id)arg4 ;
-(void)layoutSubviews;


@end


#endif