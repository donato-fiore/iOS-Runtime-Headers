// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMTIMELAPSESHUTTERRINGVIEW_H
#define CAMTIMELAPSESHUTTERRINGVIEW_H

@class UIView, CALayer, CAReplicatorLayer;



@interface CAMTimelapseShutterRingView : UIView

@property (readonly, nonatomic) CALayer *_largeTickLayer; // ivar: __largeTickLayer
@property (readonly, nonatomic) CAReplicatorLayer *_largeTickReplicatorLayer; // ivar: __largeTickReplicatorLayer
@property (readonly, nonatomic) CGFloat _largeTickRotationRadians; // ivar: __largeTickRotationRadians
@property (readonly, nonatomic) CALayer *_smallTickLayer; // ivar: __smallTickLayer
@property (readonly, nonatomic) CAReplicatorLayer *_smallTickReplicatorLayer; // ivar: __smallTickReplicatorLayer
@property (readonly, nonatomic) CGFloat _smallTickRotationRadians; // ivar: __smallTickRotationRadians
@property (readonly, nonatomic) CALayer *_timerHandLayer; // ivar: __timerHandLayer
@property (readonly, nonatomic) CALayer *_timerHandParentLayer; // ivar: __timerHandParentLayer
@property (nonatomic, getter=isAnimating) BOOL animating; // ivar: _animating
@property (readonly, nonatomic) ? spec; // ivar: _spec


-(BOOL)_shouldUseAnimations;
-(CGFloat)_rotationRadiansFromTickCount:(NSInteger)arg0 ;
-(CGFloat)_rotationZFromTransform:(struct CATransform3D )arg0 ;
-(CGFloat)_tickRadiusForTickSize:(struct CGSize )arg0 ringSize:(struct CGSize )arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 spec:(struct ? )arg1 ;
-(id)initWithSpec:(struct ? )arg0 ;
-(void)_addStartAnimations;
-(void)_addStopAnimations;
-(void)_commonCAMTimelapseShutterRingViewInitializationWithSpec:(struct ? )arg0 ;
-(void)_removeStartAnimations;
-(void)_removeStopAnimations;
-(void)_startAnimating;
-(void)_stopAnimating;
-(void)layoutSublayersOfLayer:(id)arg0 ;


@end


#endif