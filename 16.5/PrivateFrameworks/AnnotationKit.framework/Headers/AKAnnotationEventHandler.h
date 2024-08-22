// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKANNOTATIONEVENTHANDLER_H
#define AKANNOTATIONEVENTHANDLER_H


#import <Foundation/Foundation.h>

#import "AKAnnotation.h"
#import "AKPageController.h"

@interface AKAnnotationEventHandler : NSObject

@property (retain) AKAnnotation *annotation; // ivar: _annotation
@property BOOL draggingHorizontalOnly; // ivar: _draggingHorizontalOnly
@property BOOL draggingVerticalOnly; // ivar: _draggingVerticalOnly
@property CGPoint initialCenter; // ivar: _initialCenter
@property CGPoint initialDraggedPoint; // ivar: _initialDraggedPoint
@property CGPoint initialOtherPoint; // ivar: _initialOtherPoint
@property NSUInteger initiallyDraggedArea; // ivar: _initiallyDraggedArea
@property CGPoint lastPositionInModel; // ivar: _lastPositionInModel
@property CGPoint lastPositionInWindow; // ivar: _lastPositionInWindow
@property (weak) AKPageController *pageController; // ivar: _pageController
@property BOOL touchModifiersEnabled; // ivar: _touchModifiersEnabled


+(BOOL)allowsDragging;
+(BOOL)allowsDraggingOfAnnotation:(id)arg0 ;
+(Class)_handlerClassForPlatformForAnnotation:(id)arg0 ;
+(id)newAnnotationEventHandlerForCurrentPlatformForAnnotation:(id)arg0 withPageController:(id)arg1 ;
+(struct CGRect )annotationRectangleForDraggingBounds:(struct CGRect )arg0 forAnnotation:(id)arg1 onPageController:(id)arg2 withOriginalCenter:(struct CGPoint )arg3 ;
-(BOOL)alwaysLockAspectRatio;
-(BOOL)canLockAspectRatio;
-(BOOL)continueDraggableAreaEventTrackingLoopWithEvent:(id)arg0 orRecognizer:(id)arg1 ;
-(BOOL)enterDraggableAreaEventTrackingLoopWithEvent:(id)arg0 orRecognizer:(id)arg1 ;
-(BOOL)handleDownEvent:(id)arg0 orRecognizer:(id)arg1 ;
-(BOOL)lockAspectRatioByDefault;
-(CGFloat)naturalAspectRatioForAnnotation;
-(id)_initWithAnnotation:(id)arg0 andPageController:(id)arg1 ;
-(struct CGPoint )modelPointFromPointInWindow:(struct CGPoint )arg0 ;
-(struct CGPoint )windowPointFromEvent:(id)arg0 orRecognizer:(id)arg1 ;
-(struct CGSize )naturalSizeForAnnotation;
-(void)getInitialDraggedPoint:(struct CGPoint *)arg0 otherPoint:(struct CGPoint *)arg1 center:(struct CGPoint *)arg2 forEvent:(id)arg3 orRecognizer:(id)arg4 ;
-(void)setupDraggingConstraints;
-(void)updateModelWithCurrentPoint:(struct CGPoint )arg0 options:(NSUInteger)arg1 ;


@end


#endif