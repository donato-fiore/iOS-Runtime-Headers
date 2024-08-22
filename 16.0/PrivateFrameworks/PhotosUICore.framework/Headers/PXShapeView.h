// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSHAPEVIEW_H
#define PXSHAPEVIEW_H

@class UIView, UIColor, UIBezierPath;



@interface PXShapeView : UIView

@property (copy, nonatomic) UIColor *fillColor; // ivar: _fillColor
@property (copy, nonatomic) UIBezierPath *path; // ivar: _path


+(Class)layerClass;
-(id)shapeLayer;


@end


#endif