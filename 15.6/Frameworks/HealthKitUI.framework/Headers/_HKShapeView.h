// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HKSHAPEVIEW_H
#define _HKSHAPEVIEW_H

@class UIView, UIBezierPath, CAShapeLayer;



@interface _HKShapeView : UIView

@property (retain, nonatomic) UIBezierPath *path;
@property (readonly, nonatomic) CAShapeLayer *shapeLayer;


+(Class)layerClass;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;


@end


#endif