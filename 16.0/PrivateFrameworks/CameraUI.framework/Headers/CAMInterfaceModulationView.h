// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMINTERFACEMODULATIONVIEW_H
#define CAMINTERFACEMODULATIONVIEW_H

@class UIView, CALayer;



@interface CAMInterfaceModulationView : UIView

@property (nonatomic, setter=_setInFlightAnimationCount:) NSUInteger _inFlightAnimationCount; // ivar: __inFlightAnimationCount
@property (retain, nonatomic, setter=_setModulationFilterLayer:) CALayer *_modulationFilterLayer; // ivar: __modulationFilterLayer
@property (readonly, weak, nonatomic) UIView *hostingView; // ivar: _hostingView
@property (nonatomic) NSUInteger interfaceModulation; // ivar: _interfaceModulation


-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithHostingView:(id)arg0 ;
-(void)_addOrRemoveModulationLayer;
-(void)didAddSubview:(id)arg0 ;
-(void)layoutSubviews;
-(void)modulationAnimationDidStop:(BOOL)arg0 ;


@end


#endif