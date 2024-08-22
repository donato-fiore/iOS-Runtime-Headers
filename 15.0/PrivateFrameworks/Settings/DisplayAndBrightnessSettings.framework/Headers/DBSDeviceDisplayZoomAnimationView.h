// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DBSDEVICEDISPLAYZOOMANIMATIONVIEW_H
#define DBSDEVICEDISPLAYZOOMANIMATIONVIEW_H

@class UIView, CAPackage, CALayer, CAStateController;



@interface DBSDeviceDisplayZoomAnimationView : UIView

@property (nonatomic, getter=isAnimating) BOOL animating; // ivar: _animating
@property (nonatomic) NSUInteger displayZoomOption; // ivar: _displayZoomOption
@property (nonatomic) float duration; // ivar: _duration
@property (retain, nonatomic) CAPackage *package; // ivar: _package
@property (retain, nonatomic) CALayer *packageLayer; // ivar: _packageLayer
@property (readonly, nonatomic) CGSize preferredSize;
@property (nonatomic) CGFloat scale; // ivar: _scale
@property (nonatomic) NSUInteger state; // ivar: _state
@property (retain, nonatomic) CAStateController *stateController; // ivar: _stateController


-(id)initWithDisplayZoomOption:(NSUInteger)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_configureView;
-(void)_startAnimationForLayer:(id)arg0 ;
-(void)_stepAnimamtionForLayer:(id)arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)startAnimation;
-(void)stopAnimation;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif