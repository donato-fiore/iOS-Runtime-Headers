// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUIDRAWINGVIEW_H
#define TUIDRAWINGVIEW_H

@class UIView, UIBezierPath, CAShapeLayer;



@interface TUIDrawingView : UIView

@property (retain, nonatomic) UIBezierPath *path; // ivar: _path
@property (readonly, nonatomic) CAShapeLayer *shapeLayer;


+(Class)layerClass;


@end


#endif