// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKRICHCOMPLICATIONLINEVIEW_H
#define NTKRICHCOMPLICATIONLINEVIEW_H



#import "NTKRichComplicationShapeView.h"

@interface NTKRichComplicationLineView : NTKRichComplicationShapeView



-(BOOL)_shouldReverseGradient;
-(CGFloat)_shapeLineWidth;
-(id)_normalizeGradientLocations:(id)arg0 ;
-(struct CGPath *)_generatePath;
-(struct CGPoint )_pointAtProgress:(float)arg0 ;
-(void)_setupGradientLayer:(id)arg0 ;


@end


#endif