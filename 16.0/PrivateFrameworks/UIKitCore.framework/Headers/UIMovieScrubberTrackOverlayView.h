// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIMOVIESCRUBBERTRACKOVERLAYVIEW_H
#define UIMOVIESCRUBBERTRACKOVERLAYVIEW_H



#import "UIView.h"
#import "UIImageView.h"

@interface UIMovieScrubberTrackOverlayView : UIView {
    CGFloat _value;
    CGFloat _minimumValue;
    CGFloat _maximumValue;
    CGFloat _startValue;
    CGFloat _endValue;
    UIImageView *_leftFillView;
    UIImageView *_rightFillView;
    unsigned int _editingHandle;
    BOOL _editing;
    BOOL _zoomed;
}




-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_clampValueAndLayout;
-(void)_updateLeftFill;
-(void)_updateRightFill;
-(void)animateFillFramesAway;
-(void)layoutSubviews;
-(void)setEditing:(BOOL)arg0 ;
-(void)setEditingHandle:(int)arg0 ;
-(void)setEndValue:(CGFloat)arg0 ;
-(void)setIsZoomed:(BOOL)arg0 ;
-(void)setMaximumValue:(CGFloat)arg0 ;
-(void)setMinimumValue:(CGFloat)arg0 ;
-(void)setStartValue:(CGFloat)arg0 ;
-(void)setValue:(CGFloat)arg0 ;


@end


#endif