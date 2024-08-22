// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMUTILITYBAR_H
#define CAMUTILITYBAR_H

@class UIView, CEKApertureSlider, CEKWheelScrubberView, CEKSlider;



@interface CAMUtilityBar : UIView

@property (retain, nonatomic) CEKApertureSlider *apertureSlider; // ivar: _apertureSlider
@property (retain, nonatomic) CEKWheelScrubberView *filterScrubberView; // ivar: _filterScrubberView
@property (retain, nonatomic) CEKSlider *intensitySlider; // ivar: _intensitySlider
@property (nonatomic) NSUInteger visibleContent; // ivar: _visibleContent


-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(void)_layoutFilterScrubberView;
-(void)_layoutPortraitApertureSlider;
-(void)_layoutSliderView:(id)arg0 ;
-(void)_updateVisibilityForUpdatedContent:(NSUInteger)arg0 contentView:(id)arg1 ;
-(void)_updateVisibleViewAnimated:(BOOL)arg0 ;
-(void)layoutSubviews;


@end


#endif