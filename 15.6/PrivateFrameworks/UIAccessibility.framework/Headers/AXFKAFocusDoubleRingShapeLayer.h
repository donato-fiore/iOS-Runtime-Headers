// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXFKAFOCUSDOUBLERINGSHAPELAYER_H
#define AXFKAFOCUSDOUBLERINGSHAPELAYER_H



#import "AXFKAFocusRingShapeLayer.h"
#import "AXFKAFocusRingBorderShapeLayer.h"

@interface AXFKAFocusDoubleRingShapeLayer : AXFKAFocusRingShapeLayer

@property (retain, nonatomic) AXFKAFocusRingBorderShapeLayer *topBorderLayer; // ivar: _topBorderLayer


-(CGFloat)lineWidthForTopLayer;
-(id)init;
-(id)topLayerFocusRingColorForTintColor:(id)arg0 ;
-(struct CGColor *)strokeColorForTopLayer;
-(void)_updateTopLayerPath;
-(void)setPath:(struct CGPath *)arg0 ;
-(void)updateAppearance;


@end


#endif