// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC11WEATHERMAPS31WEATHERMAPCIRCULARGRADIENTLAYER_H
#define _TTC11WEATHERMAPS31WEATHERMAPCIRCULARGRADIENTLAYER_H

@class CALayer;



@interface _TtC11WeatherMaps31WeatherMapCircularGradientLayer : CALayer {
    ? bottomMargin;
    ? circleRadius;
    ? circleStrokeWidth;
    ? colors;
    ? colorStops;
    ? indicatorValue;
    ? indicatorColor;
    ? scaleRange;
    ? segments;
    ? showIndicator;
    ? colorsWithStops;
}




-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLayer:(id)arg0 ;
-(void)drawInContext:(struct CGContext *)arg0 ;


@end


#endif