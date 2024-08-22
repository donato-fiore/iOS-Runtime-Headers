// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKEVENTCREATIONGESTURECONTROLLER_H
#define EKEVENTCREATIONGESTURECONTROLLER_H

@class UIView, UILongPressGestureRecognizer, EKEvent, NSString;
@protocol UIGestureRecognizerDelegate, EKEventCreationGestureControllerDelegate;

#import <Foundation/Foundation.h>

#import "EKDayOccurrenceView.h"

@interface EKEventCreationGestureController : NSObject <UIGestureRecognizerDelegate>

 {
    NSObject<EKEventCreationGestureControllerDelegate> *_gestureDelegate;
    UIView *_targetView;
    UILongPressGestureRecognizer *_gestureRecognizer;
    EKEvent *_newEvent;
    UIView *_containerView;
    EKDayOccurrenceView *_eventPreview;
    CGPoint _originPoint;
    int _state;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)currentlyCreatingEvent;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(id)_snapDate:(id)arg0 toInterval:(CGFloat)arg1 ;
-(id)initWithView:(id)arg0 delegate:(id)arg1 ;
-(void)_adjustPreviewFrame;
-(void)_cleanUp;
-(void)_gestureBegan;
-(void)_gestureCanceled;
-(void)_gestureChangedEnoughToCreateEvent;
-(void)_gestureCompleted;
-(void)_gestureUpdated;
-(void)dealloc;
-(void)handleGesture:(id)arg0 ;
-(void)invalidate;


@end


#endif