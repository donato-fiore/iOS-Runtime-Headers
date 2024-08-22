// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIKEYBOARDDOCKITEMBUTTON_H
#define UIKEYBOARDDOCKITEMBUTTON_H

@class NSString, CAShapeLayer;


#import "UIButton.h"

@interface UIKeyboardDockItemButton : UIButton

@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) CAShapeLayer *shapeLayer; // ivar: _shapeLayer
@property (nonatomic) CGRect tapActionRegion; // ivar: _tapActionRegion


-(struct CGRect )imageRectForContentRect:(struct CGRect )arg0 ;
-(struct CGRect )rectWithSize:(struct CGSize )arg0 forContentRect:(struct CGRect )arg1 withAlignmentRectInsets:(struct UIEdgeInsets )arg2 ;
-(struct CGRect )titleRectForContentRect:(struct CGRect )arg0 ;
-(void)addAnimatitionIfNeeded;
-(void)didMoveToSuperview;
-(void)layoutSubviews;
-(void)setTintColor:(id)arg0 ;
-(void)setupDictationAnimationButtonIfNeeded;
-(void)updateFillColor;


@end


#endif