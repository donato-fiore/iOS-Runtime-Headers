// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKRICHCOMPLICATIONLINEVIEW_H
#define NTKRICHCOMPLICATIONLINEVIEW_H

@class CDRichComplicationShapeView;



@interface NTKRichComplicationLineView : CDRichComplicationShapeView



-(BOOL)_shouldReverseGradient;
-(CGFloat)_shapeLineWidth;
-(id)_normalizeGradientLocations:(id)arg0 ;
-(struct CGPath *)_generatePath;
-(struct CGPoint )_pointAtProgress:(float)arg0 ;
-(void)_setupGradientLayer:(id)arg0 ;


@end


#endif