// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFPROGRESSVIEW_H
#define MFPROGRESSVIEW_H

@class UIView, CADisplayLink, NSTimer, UIColor;
@protocol MFProgressViewDelegate;



@interface MFProgressView : UIView {
    CGFloat _stroke;
    CGFloat _diameter;
    CADisplayLink *_displayLink;
    CGFloat _displayedProgress;
    CGFloat _targetProgress;
    NSTimer *_simulateActivityTimer;
}


@property (weak, nonatomic) NSObject<MFProgressViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIColor *tintColor; // ivar: _tintColor


+(id)progressViewWithDefaultStyleStrokeAndRect;
-(BOOL)_isValidCenter:(struct CGPoint )arg0 radius:(CGFloat)arg1 rect:(struct CGRect )arg2 ;
-(id)initWithProgressViewStyle:(int)arg0 stroke:(CGFloat)arg1 frame:(struct CGRect )arg2 ;
-(struct CGSize )intrinsicContentSize;
-(void)_adjustProgress;
-(void)_drawCircleWithCenter:(struct CGPoint )arg0 radius:(CGFloat)arg1 ;
-(void)_drawProgressInRect:(struct CGRect )arg0 ;
-(void)_drawWedgeWithCenter:(struct CGPoint )arg0 radius:(CGFloat)arg1 ;
-(void)_invalidateDisplayLink;
-(void)_invalidateSimulationTimer;
-(void)_onDisplayLink:(id)arg0 ;
-(void)_stopSimulationIfCompleted;
-(void)dealloc;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)progressDidFinish;
-(void)setProgress:(CGFloat)arg0 ;
-(void)simulateActivity;


@end


#endif