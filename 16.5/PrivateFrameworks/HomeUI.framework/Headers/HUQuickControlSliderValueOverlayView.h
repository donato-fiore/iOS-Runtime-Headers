// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUQUICKCONTROLSLIDERVALUEOVERLAYVIEW_H
#define HUQUICKCONTROLSLIDERVALUEOVERLAYVIEW_H

@class UIView, CAShapeLayer, UIColor;



@interface HUQuickControlSliderValueOverlayView : UIView

@property (nonatomic) NSUInteger controlSize; // ivar: _controlSize
@property (nonatomic) BOOL hasSecondGrabber; // ivar: _hasSecondGrabber
@property (readonly, nonatomic) CAShapeLayer *layer;
@property (retain, nonatomic) UIColor *layerColor; // ivar: _layerColor
@property (nonatomic, getter=isOff) BOOL off; // ivar: _off
@property (nonatomic) NSUInteger primaryGrabberLocation; // ivar: _primaryGrabberLocation
@property (retain, nonatomic) CAShapeLayer *primaryGrabberShadowLayer; // ivar: _primaryGrabberShadowLayer
@property (weak, nonatomic) CAShapeLayer *secondaryGrabberShadowLayer; // ivar: _secondaryGrabberShadowLayer
@property (nonatomic) BOOL showGrabbers; // ivar: _showGrabbers
@property (retain, nonatomic) UIView *topBorder; // ivar: _topBorder


-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(id)_createGrabberShadowLayer;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateBlendMode;
-(void)_updateShape;
-(void)layoutSubviews;


@end


#endif