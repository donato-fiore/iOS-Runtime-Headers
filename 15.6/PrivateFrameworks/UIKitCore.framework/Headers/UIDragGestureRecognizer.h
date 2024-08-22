// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIDRAGGESTURERECOGNIZER_H
#define UIDRAGGESTURERECOGNIZER_H

@protocol UIDragGestureRecognizerDelegate;


#import "UIGestureRecognizer.h"
#import "UIDragEvent.h"
#import "_UIDropSessionImpl.h"
#import "_UIInternalDraggingSessionDestination.h"

@interface UIDragGestureRecognizer : UIGestureRecognizer

@property (weak, nonatomic) NSObject<UIDragGestureRecognizerDelegate> *delegate;
@property (readonly, weak, nonatomic, getter=_dragEvent) UIDragEvent *dragEvent; // ivar: _dragEvent
@property (readonly, nonatomic) _UIDropSessionImpl *dropSession;
@property (readonly, nonatomic) _UIInternalDraggingSessionDestination *sessionDestination;


-(BOOL)_shouldReceivePress:(id)arg0 ;
-(BOOL)_shouldReceiveTouch:(id)arg0 forEvent:(id)arg1 recognizerView:(id)arg2 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg0 ;
-(BOOL)canPreventGestureRecognizer:(id)arg0 ;
-(BOOL)shouldReceiveEvent:(id)arg0 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(struct CGPoint )locationInView:(id)arg0 ;


@end


#endif