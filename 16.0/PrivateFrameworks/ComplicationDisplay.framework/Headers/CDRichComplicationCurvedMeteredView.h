// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDRICHCOMPLICATIONCURVEDMETEREDVIEW_H
#define CDRICHCOMPLICATIONCURVEDMETEREDVIEW_H

@class NSArray;


#import "CDRichComplicationCurveView.h"

@interface CDRichComplicationCurvedMeteredView : CDRichComplicationCurveView

@property (retain, nonatomic) NSArray *meterLayers; // ivar: _meterLayers


-(CGFloat)rotationAngleAtProgress:(float)arg0 ;
-(id)_shapeStrokeColor;
-(id)customizeMeterLayerBlock:(SEL)arg0 ;
-(void)_setupShapeLayer:(id)arg0 ;
-(void)_updateGradient;
-(void)colorMetersWithProgress:(CGFloat)arg0 ;
-(void)setProgress:(CGFloat)arg0 ;


@end


#endif