// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LAUIPHYSICALBUTTONVIEW_H
#define LAUIPHYSICALBUTTONVIEW_H

@class UIView, UILabel, NSString;
@protocol UICoordinateSpace;


#import "LAUIPhysicalButtonViewAnimation.h"

@interface LAUIPhysicalButtonView : UIView {
    id<UICoordinateSpace> *_fixedCoordinateSpace;
    id<UICoordinateSpace> *_coordinateSpace;
    BOOL _onScreen;
    UIView *_containerView;
    UILabel *_instructionLabel;
    UIView *_buttonView;
    LAUIPhysicalButtonViewAnimation *_animation;
}


@property (nonatomic, getter=isAnimating) BOOL animating; // ivar: _animating
@property (nonatomic) NSInteger animationStyle; // ivar: _animationStyle
@property (readonly, nonatomic) unsigned int edge; // ivar: _edge
@property (copy, nonatomic) NSString *instruction; // ivar: _instruction
@property (nonatomic) NSInteger style; // ivar: _style


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)_colorForStyle:(NSInteger)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(struct CGRect )_physicalButtonNormalizedFrame;
-(void)_setOnScreen:(BOOL)arg0 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)updateFrame;


@end


#endif