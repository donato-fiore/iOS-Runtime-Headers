// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBPIECHARTVIEW_H
#define SBPIECHARTVIEW_H

@class UIView, NSArray;



@interface SBPieChartView : UIView {
    NSArray *_slices;
    CGFloat _valueTotal;
    CGFloat _radius;
    CGPoint _center;
    CGFloat _defaultRotation;
}




-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_drawSlice:(id)arg0 atValue:(CGFloat)arg1 ;
-(void)_rotateContext;
-(void)_updateMetrics;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)setSlices:(id)arg0 ;


@end


#endif