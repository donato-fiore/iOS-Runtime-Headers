// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRUSHADOWVIEW_H
#define MRUSHADOWVIEW_H

@class UIView, UIColor;



@interface MRUShadowView : UIView

@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (nonatomic) CGSize offset; // ivar: _offset
@property (nonatomic) float opacity; // ivar: _opacity
@property (nonatomic) CGFloat radius; // ivar: _radius


-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif