// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXMOTIONIMAGECOMPONENTBEHAVIORHANDLER_H
#define SXMOTIONIMAGECOMPONENTBEHAVIORHANDLER_H

@class UIView, NSString, UIInterpolatingMotionEffect;
@protocol SXViewportChangeListener;


#import "SXComponentBehaviorHandler.h"

@interface SXMotionImageComponentBehaviorHandler : SXComponentBehaviorHandler <SXViewportChangeListener>



@property (nonatomic) CGFloat amplitude; // ivar: _amplitude
@property (retain, nonatomic) UIView *clippingView; // ivar: _clippingView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL horizontal; // ivar: _horizontal
@property (retain, nonatomic) UIView *motionContentView; // ivar: _motionContentView
@property (readonly) Class superclass;
@property (nonatomic) BOOL vertical; // ivar: _vertical
@property (nonatomic) NSUInteger viewHierarchyIndex; // ivar: _viewHierarchyIndex
@property (nonatomic) BOOL windowed; // ivar: _windowed
@property (retain, nonatomic) UIInterpolatingMotionEffect *xMotionEffect; // ivar: _xMotionEffect
@property (retain, nonatomic) UIInterpolatingMotionEffect *yMotionEffect; // ivar: _yMotionEffect


-(id)initWithComponentView:(id)arg0 withBehavior:(id)arg1 ;
-(void)destroyMotionDetection;
-(void)destroyWithBehaviorController:(id)arg0 ;
-(void)setupMotionDetection;
-(void)setupWithBehaviorController:(id)arg0 ;
-(void)updateEdgeAntialiasingForViewport:(id)arg0 ;
-(void)viewport:(id)arg0 appearStateChangedFromState:(NSUInteger)arg1 ;


@end


#endif