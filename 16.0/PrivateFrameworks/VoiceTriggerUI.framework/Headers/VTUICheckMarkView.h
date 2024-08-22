// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VTUICHECKMARKVIEW_H
#define VTUICHECKMARKVIEW_H

@class UIView, UIColor, CALayer;


#import "VTUIColorLayer.h"

@interface VTUICheckMarkView : UIView {
    float _phase;
    UIColor *_blueColor;
    UIColor *_redColor;
    UIView *_blueView;
    UIView *_greenView;
    UIView *_redView;
}


@property (retain, nonatomic) CALayer *checkMaskLayer; // ivar: _checkMaskLayer
@property (retain, nonatomic) VTUIColorLayer *colorLayer; // ivar: _colorLayer
@property (retain, nonatomic) CALayer *xMaskLayer; // ivar: _xMaskLayer


-(struct CGSize )intrinsicContentSize;
-(void)animateForSuccess:(BOOL)arg0 completion:(id)arg1 ;


@end


#endif