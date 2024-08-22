// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVRUIDIRECTIONALCONTROLVIEW_H
#define TVRUIDIRECTIONALCONTROLVIEW_H

@class UIView, NSString, UIImageView, NSArray;
@protocol UIPointerInteractionDelegate, _TVRUIEventDelegate, TVRUIStyleProvider;


#import "TVRButtonHaptic.h"

@interface TVRUIDirectionalControlView : UIView <UIPointerInteractionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIView *directionControlsWrapperView; // ivar: _directionControlsWrapperView
@property (retain, nonatomic) UIImageView *downImageView; // ivar: _downImageView
@property (weak, nonatomic) NSObject<_TVRUIEventDelegate> *eventDelegate; // ivar: _eventDelegate
@property (retain, nonatomic) TVRButtonHaptic *haptic; // ivar: _haptic
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIView *highlightedView; // ivar: _highlightedView
@property (retain, nonatomic) NSArray *interactionViews; // ivar: _interactionViews
@property (retain, nonatomic) UIImageView *leftImageView; // ivar: _leftImageView
@property (nonatomic) BOOL offsetDirectionalPad; // ivar: _offsetDirectionalPad
@property (retain, nonatomic) UIImageView *rightImageView; // ivar: _rightImageView
@property (retain, nonatomic) UIView *selectIndicator; // ivar: _selectIndicator
@property (retain, nonatomic) NSObject<TVRUIStyleProvider> *styleProvider; // ivar: _styleProvider
@property (readonly) Class superclass;
@property (retain, nonatomic) UIView *tapHandlingSquareWrapperView; // ivar: _tapHandlingSquareWrapperView
@property (retain, nonatomic) UIImageView *upImageView; // ivar: _upImageView


-(NSInteger)_buttonTypeForLocation:(struct CGPoint )arg0 ;
-(id)_createDirectionalImageViewWithImageName:(id)arg0 ;
-(id)_directionalViewForTouchLocation:(struct CGPoint )arg0 ;
-(id)initWithStyleProvider:(id)arg0 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(void)_configureGesture;
-(void)_configureLongPressGesture:(id)arg0 ;
-(void)_highlightArrowView:(id)arg0 ;
-(void)_highlightView:(id)arg0 enabled:(BOOL)arg1 ;
-(void)_layoutHighlightViewForView:(id)arg0 ;
-(void)_sendSelectButtonPressBegan;
-(void)_sendSelectButtonPressEnded;
-(void)handleLongPress:(id)arg0 ;
-(void)handleTap:(id)arg0 ;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif