// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DOCTAGCHECKABLEDOTVIEW_H
#define DOCTAGCHECKABLEDOTVIEW_H

@class UIView, CAShapeLayer;


#import "DOCTagDotView.h"

@interface DOCTagCheckableDotView : UIView

@property (readonly, nonatomic) CAShapeLayer *borderLayer; // ivar: _borderLayer
@property (nonatomic) BOOL checked; // ivar: _checked
@property (nonatomic) NSInteger tagColor;
@property (readonly, nonatomic) DOCTagDotView *tagDotView; // ivar: _tagDotView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSublayersOfLayer:(id)arg0 ;
-(void)layoutSubviews;
-(void)updateBorderLayerVisibility;
-(void)updateLayoutOfLayers;


@end


#endif