// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MUGRADIENTVIEW_H
#define MUGRADIENTVIEW_H

@class UIView, UIColor, NSArray;



@interface MUGradientView : UIView

@property (copy, nonatomic) UIColor *accessibilityColor; // ivar: _accessibilityColor
@property (copy, nonatomic) NSArray *colors; // ivar: _colors
@property (nonatomic) CGPoint endPoint; // ivar: _endPoint
@property (copy, nonatomic) NSArray *locations; // ivar: _locations
@property (nonatomic) BOOL shouldReduceTransparency; // ivar: _shouldReduceTransparency
@property (nonatomic) CGPoint startPoint; // ivar: _startPoint


+(Class)layerClass;
-(id)gradientLayer;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setup;
-(void)_transparencyStatusDidChange;
-(void)_update;


@end


#endif