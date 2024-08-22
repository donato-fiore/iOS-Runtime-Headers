// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKSEGMENTEDBARVIEW_H
#define PKSEGMENTEDBARVIEW_H

@class UIView, UIImageView, UIImage, UIColor;
@protocol PKSegmentedBarConfiguration;



@interface PKSegmentedBarView : UIView {
    unsigned int _axis;
    UIImageView *_bar;
    UIView *_placeholder;
    UIImage *_image;
    CGFloat _barLength;
    CGFloat _maximumLength;
    id<PKSegmentedBarConfiguration> *_configuration;
    id *_imageCompletion;
    uint8_t _generationCounter;
}


@property (nonatomic, getter=isBlurDisabled) BOOL blurDisabled; // ivar: _blurDisabled
@property (readonly, nonatomic) CGFloat minimumLength; // ivar: _minimumLength
@property (retain, nonatomic) UIColor *placeholderColor; // ivar: _placeholderColor
@property (nonatomic) BOOL roundBaselineCorners; // ivar: _roundBaselineCorners
@property (nonatomic) BOOL showPlaceholder; // ivar: _showPlaceholder
@property (nonatomic) BOOL useSmallCornerRadius; // ivar: _useSmallCornerRadius


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_callCompletion;
-(void)_generateImageForConfiguration:(id)arg0 barLength:(CGFloat)arg1 maximumLength:(CGFloat)arg2 synchronous:(BOOL)arg3 ;
-(void)_updateImageWithImage:(id)arg0 ;
-(void)_updatePlaceholder;
-(void)configureWithBarConfiguration:(id)arg0 axis:(unsigned int)arg1 maximumLength:(CGFloat)arg2 barLength:(CGFloat)arg3 synchronous:(BOOL)arg4 completion:(id)arg5 ;
-(void)layoutSubviews;


@end


#endif