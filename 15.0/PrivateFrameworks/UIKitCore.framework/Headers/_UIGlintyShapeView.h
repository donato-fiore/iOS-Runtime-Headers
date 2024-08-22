// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIGLINTYSHAPEVIEW_H
#define _UIGLINTYSHAPEVIEW_H

@class CAShapeLayer;


#import "UIView.h"
#import "UIColor.h"
#import "UIBezierPath.h"

@interface _UIGlintyShapeView : UIView

@property (readonly, nonatomic) UIColor *fillColor; // ivar: _fillColor
@property (readonly, nonatomic) UIBezierPath *path; // ivar: _path
@property (readonly, nonatomic) CAShapeLayer *shapeLayer;
@property (readonly, nonatomic) UIColor *strokeColor; // ivar: _strokeColor


+(Class)layerClass;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif