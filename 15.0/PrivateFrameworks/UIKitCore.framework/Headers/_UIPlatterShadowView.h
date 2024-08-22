// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIPLATTERSHADOWVIEW_H
#define _UIPLATTERSHADOWVIEW_H



#import "UIView.h"
#import "UIColor.h"
#import "_UIShapeView.h"
#import "UIBezierPath.h"

@interface _UIPlatterShadowView : UIView

@property (nonatomic) BOOL punchOut; // ivar: _punchOut
@property (retain, nonatomic) UIColor *shadowColor;
@property (readonly, nonatomic) _UIShapeView *shadowMaskView; // ivar: _shadowMaskView
@property (nonatomic) CGSize shadowOffset;
@property (nonatomic) CGFloat shadowOpacity;
@property (retain, nonatomic) UIBezierPath *shadowPath;
@property (nonatomic) CGFloat shadowRadius;


-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(id)initWithShadowPath:(id)arg0 ;


@end


#endif