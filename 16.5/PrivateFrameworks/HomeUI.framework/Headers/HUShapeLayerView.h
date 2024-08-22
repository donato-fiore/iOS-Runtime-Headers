// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUSHAPELAYERVIEW_H
#define HUSHAPELAYERVIEW_H

@class UIView, UIColor, CAShapeLayer;



@interface HUShapeLayerView : UIView

@property (retain, nonatomic) UIColor *fillColor;
@property (nonatomic) BOOL fillColorMatchesTintColor; // ivar: _fillColorMatchesTintColor
@property (readonly, nonatomic) CAShapeLayer *layer;
@property (copy, nonatomic) id *pathLayoutBlock; // ivar: _pathLayoutBlock


-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(id)initWithPathLayoutBlock:(id)arg0 ;
-(void)didMoveToSuperview;
-(void)layoutSubviews;
-(void)tintColorDidChange;


@end


#endif