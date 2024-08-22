// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUPIEPROGRESSVIEW_H
#define HUPIEPROGRESSVIEW_H

@class UIView, CAShapeLayer;
@protocol HUPieProgressViewDelegate;



@interface HUPieProgressView : UIView

@property (weak, nonatomic) NSObject<HUPieProgressViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL hidesWhenStopped; // ivar: _hidesWhenStopped
@property (nonatomic) CGFloat indeterminateExpectedDuration; // ivar: _indeterminateExpectedDuration
@property (nonatomic) CGFloat indeterminateMaxProgress; // ivar: _indeterminateMaxProgress
@property (nonatomic) BOOL isAnimating; // ivar: _isAnimating
@property (retain, nonatomic) CAShapeLayer *outlineLayer; // ivar: _outlineLayer
@property (nonatomic) CGFloat outlineLineWidth;
@property (nonatomic) CGFloat progress;
@property (retain, nonatomic) CAShapeLayer *progressLayer; // ivar: _progressLayer
@property (nonatomic) CGFloat progressLineWidth; // ivar: _progressLineWidth
@property (nonatomic) NSInteger style; // ivar: _style


-(id)_setupOutlineLayer;
-(id)_setupProgressLayer;
-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 style:(NSInteger)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(void)_fadeIn;
-(void)_fadeOut;
-(void)_setDefaults;
-(void)_updateLayerPaths;
-(void)_updateProgressLayerLineWidth;
-(void)layoutSubviews;
-(void)startWithFuture:(id)arg0 ;
-(void)tintColorDidChange;


@end


#endif