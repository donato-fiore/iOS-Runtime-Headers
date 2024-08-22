// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIUISHAPEVIEW_H
#define FIUISHAPEVIEW_H

@class UIView;



@interface FIUIShapeView : UIView



+(Class)layerClass;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)shapeLayer;
-(void)setFillColor:(id)arg0 ;
-(void)setLineWidth:(CGFloat)arg0 ;
-(void)setPath:(id)arg0 ;
-(void)setStrokeColor:(id)arg0 ;
-(void)setStrokeEnd:(CGFloat)arg0 ;


@end


#endif