// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PKPATHVIEW_H
#define _PKPATHVIEW_H

@class UIView, UIColor, UIBezierPath;



@interface _PKPathView : UIView

@property (retain, nonatomic) UIColor *fillColor;
@property (retain, nonatomic) UIBezierPath *path;


+(Class)layerClass;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(id)_shapeLayer;


@end


#endif