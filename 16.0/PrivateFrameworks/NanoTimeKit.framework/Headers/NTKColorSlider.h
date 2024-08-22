// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKCOLORSLIDER_H
#define NTKCOLORSLIDER_H

@class UISlider, UIImageView, CAGradientLayer, UISelectionFeedbackGenerator, NSArray;
@protocol NTKColorSliderDelegate;


#import "NTKColorSliderThumbView.h"

@interface NTKColorSlider : UISlider {
    UIImageView *_thumbView;
    NTKColorSliderThumbView *_thumbContent;
    NSInteger _layoutDirection;
    CAGradientLayer *_trackLayer;
    UISelectionFeedbackGenerator *_selectionFeedbackGenerator;
    BOOL _shouldTriggerMidpointFeedback;
}


@property (retain, nonatomic) NSArray *colors; // ivar: _colors
@property (weak, nonatomic) NSObject<NTKColorSliderDelegate> *delegate; // ivar: _delegate


+(struct CGRect )frameForTrackFrame:(struct CGRect )arg0 ;
-(BOOL)_valueIsInsideMidpoint:(float)arg0 ;
-(CGFloat)_colorGradientStep;
-(id)createThumbView;
-(id)currentMaximumTrackImage;
-(id)currentMinimumTrackImage;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )thumbRectForBounds:(struct CGRect )arg0 trackRect:(struct CGRect )arg1 value:(float)arg2 ;
-(struct CGRect )trackRectForBounds:(struct CGRect )arg0 ;
-(void)_setValue:(float)arg0 animated:(BOOL)arg1 ;
-(void)_updateThumbColor;
-(void)layoutSubviews;
-(void)setValue:(float)arg0 animated:(BOOL)arg1 ;
-(void)valueDidChange:(id)arg0 forEvent:(id)arg1 ;


@end


#endif