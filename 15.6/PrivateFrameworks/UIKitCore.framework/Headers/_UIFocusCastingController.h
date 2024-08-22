// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIFOCUSCASTINGCONTROLLER_H
#define _UIFOCUSCASTINGCONTROLLER_H

@protocol _UIFocusCastingControllerDelegate;

#import <Foundation/Foundation.h>

#import "UIView.h"

@interface _UIFocusCastingController : NSObject

@property (weak, nonatomic) NSObject<_UIFocusCastingControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSUInteger entryPointAxis; // ivar: _entryPointAxis
@property (nonatomic) CGFloat entryPointMemorizationTimeout; // ivar: _entryPointMemorizationTimeout
@property (retain, nonatomic) UIView *focusCastingIndicator; // ivar: _focusCastingIndicator
@property (retain, nonatomic) UIView *focusEntryIndicator; // ivar: _focusEntryIndicator
@property (retain, nonatomic) UIView *focusMovementIndicator; // ivar: _focusMovementIndicator
@property (nonatomic) BOOL isRememberingEntryPoint; // ivar: _isRememberingEntryPoint
@property (nonatomic) CGPoint screenEntryPoint; // ivar: _screenEntryPoint


-(NSUInteger)_axisForHeading:(NSUInteger)arg0 ;
-(id)_focusEffectsControllerForFocusedItem;
-(id)init;
-(struct CGPoint )_castingPointInNormalizedFrame:(struct CGRect )arg0 forHeading:(NSUInteger)arg1 ;
-(struct CGPoint )_entryPointInNormalizedFrame:(struct CGRect )arg0 forHeading:(NSUInteger)arg1 ;
-(struct CGPoint )_movementPointInNormalizedFrame:(struct CGRect )arg0 ;
-(struct CGRect )_castingFrameForFocusedNormalizedFrame:(struct CGRect )arg0 heading:(NSUInteger)arg1 ;
-(struct CGRect )castingFrameForFocusedItem:(id)arg0 heading:(NSUInteger)arg1 inCoordinateSpace:(id)arg2 ;
-(void)_createFocusMovementIndicator;
-(void)_destroyFocusMovementIndicator;
-(void)_positionFocusMovementIndicators;
-(void)_startRememberingEntryPoint;
-(void)_stopRememberingEntryPoint;
-(void)_updateFocusItemFromNormalizedFrame:(struct CGRect )arg0 toNormalizedFrame:(struct CGRect )arg1 withHeading:(NSUInteger)arg2 ;
-(void)_updateFocusMovementIndicatorDisplay;
-(void)focusEffectsController:(id)arg0 updateMovementDirection:(struct CGVector )arg1 ;
-(void)forgetEntryPoint;
-(void)teardown;
-(void)updateFocusCastingWithContext:(id)arg0 ;


@end


#endif