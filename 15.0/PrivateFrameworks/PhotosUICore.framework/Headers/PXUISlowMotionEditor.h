// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXUISLOWMOTIONEDITOR_H
#define PXUISLOWMOTIONEDITOR_H

@class NSString, UIImpactFeedbackGenerator, UIPanGestureRecognizer, UITapGestureRecognizer;
@protocol UIGestureRecognizerDelegate;


#import "PXSlowMotionEditor.h"

@interface PXUISlowMotionEditor : PXSlowMotionEditor <UIGestureRecognizerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImpactFeedbackGenerator *impactGenerator; // ivar: _impactGenerator
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture; // ivar: _panGesture
@property (readonly) Class superclass;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture; // ivar: _tapGesture


+(id)createSnappingControllerWithSnappingTarget:(CGFloat)arg0 ;
+(id)handleImage;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(id)init;
-(void)_PXUISlowMotionEditor_commonInit;
-(void)_handleBeginPanGesture:(id)arg0 ;
-(void)_handleChangePanGesture:(id)arg0 ;
-(void)_handleEndPanGesture:(id)arg0 ;
-(void)_handlePan:(id)arg0 ;
-(void)_handleTap:(id)arg0 ;
-(void)impactOccured;
-(void)prepareForImpact;


@end


#endif