// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFRINGVIEW_H
#define SFRINGVIEW_H

@class UIView, CAShapeLayer;



@interface SFRingView : UIView

@property (nonatomic) CGFloat radius; // ivar: _radius
@property (readonly, nonatomic) CAShapeLayer *shapeLayer;


+(Class)layerClass;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)tintColorDidChange;


@end


#endif