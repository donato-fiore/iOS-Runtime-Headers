// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUCOLORWHEELVIEW_H
#define HUCOLORWHEELVIEW_H

@class UIView;
@protocol HUColorWheelSpace;



@interface HUColorWheelView : UIView

@property (retain, nonatomic) NSObject<HUColorWheelSpace> *colorWheelSpace; // ivar: _colorWheelSpace
@property (nonatomic) CGFloat wheelHoleRadius; // ivar: _wheelHoleRadius


+(CGFloat)_colorWheelRenderingScale;
-(CGFloat)_outerRadius;
-(id)initWithColorWheelSpace:(id)arg0 ;
-(id)wheelBezierPath;
-(struct ? )colorWheelCoordinateForPoint:(struct CGPoint )arg0 boundedToWheel:(BOOL)arg1 ;
-(struct CGPoint )pointForColorWheelCoordinate:(struct ? )arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif