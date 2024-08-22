// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PNPPLATTERSHADOWVIEW_H
#define PNPPLATTERSHADOWVIEW_H

@class UIView, UIColor, UIBezierPath;



@interface PNPPlatterShadowView : UIView

@property (retain, nonatomic) UIColor *shadowColor;
@property (nonatomic) CGSize shadowOffset;
@property (nonatomic) CGFloat shadowOpacity;
@property (retain, nonatomic) UIBezierPath *shadowPath;
@property (nonatomic) CGFloat shadowRadius;


-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;


@end


#endif