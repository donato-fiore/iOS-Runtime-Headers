// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUQUICKCONTROLSLIDERGESTURETRANSFORMER_H
#define HUQUICKCONTROLSLIDERGESTURETRANSFORMER_H

@class UIGestureRecognizer;
@protocol HUQuickControlSliderGestureTransformerDelegate;

#import <Foundation/Foundation.h>

#import "HUQuickControlPanningContext.h"

@interface HUQuickControlSliderGestureTransformer : NSObject

@property (nonatomic) CGFloat accumulatedDragDistance; // ivar: _accumulatedDragDistance
@property (readonly, nonatomic) HUQuickControlPanningContext *context; // ivar: _context
@property (nonatomic) CGFloat currentSliderValue; // ivar: _currentSliderValue
@property (weak, nonatomic) NSObject<HUQuickControlSliderGestureTransformerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIGestureRecognizer *gestureRecognizer; // ivar: _gestureRecognizer
@property (nonatomic) BOOL hasRecognizedSignificantSliderValueChange; // ivar: _hasRecognizedSignificantSliderValueChange
@property (nonatomic) BOOL ignoreTouches; // ivar: _ignoreTouches
@property (nonatomic) CGPoint lastTouchLocation; // ivar: _lastTouchLocation
@property (nonatomic) CGFloat referenceSliderValue; // ivar: _referenceSliderValue
@property (nonatomic) CGPoint referenceTouchLocation; // ivar: _referenceTouchLocation


-(BOOL)_shouldIgnoreAllGestures;
-(CGFloat)_rawSliderValueForLocation:(struct CGPoint )arg0 ;
-(id)initWithGestureRecognizer:(id)arg0 context:(id)arg1 ;
-(void)_handleGesturePan:(id)arg0 ;
-(void)_handleSliderValuePan:(struct CGPoint )arg0 ;
-(void)dealloc;


@end


#endif