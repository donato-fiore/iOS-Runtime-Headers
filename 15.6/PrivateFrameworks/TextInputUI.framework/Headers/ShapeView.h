// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SHAPEVIEW_H
#define SHAPEVIEW_H

@class UIView, UIBezierPath, CAShapeLayer;



@interface ShapeView : UIView

@property (retain, nonatomic) UIBezierPath *path; // ivar: _path
@property (readonly, nonatomic) CAShapeLayer *shapeLayer;


+(Class)layerClass;


@end


#endif