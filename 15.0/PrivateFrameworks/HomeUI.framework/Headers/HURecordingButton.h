// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HURECORDINGBUTTON_H
#define HURECORDINGBUTTON_H

@class UIControl, UIImage, UIImageView, UILabel, CAShapeLayer;



@interface HURecordingButton : UIControl

@property (retain, nonatomic) UIImage *currentButtonImage; // ivar: _currentButtonImage
@property (retain, nonatomic) UIImageView *currentButtonImageView; // ivar: _currentButtonImageView
@property (retain, nonatomic) UILabel *currentButtonLabel; // ivar: _currentButtonLabel
@property (nonatomic) NSUInteger currentRecordingState; // ivar: _currentRecordingState
@property (retain, nonatomic) UIImage *nextButtonImage; // ivar: _nextButtonImage
@property (retain, nonatomic) UIImageView *nextButtonImageView; // ivar: _nextButtonImageView
@property (retain, nonatomic) CAShapeLayer *stopButtonStrokeLayer; // ivar: _stopButtonStrokeLayer


-(id)initWithSize:(struct CGSize )arg0 state:(NSUInteger)arg1 image:(id)arg2 ;
-(id)initWithSize:(struct CGSize )arg0 state:(NSUInteger)arg1 title:(id)arg2 ;
-(void)_updateHighlight;
-(void)layoutSubviews;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setImage:(id)arg0 forState:(NSUInteger)arg1 animated:(BOOL)arg2 ;
-(void)setText:(id)arg0 forState:(NSUInteger)arg1 animated:(BOOL)arg2 ;


@end


#endif