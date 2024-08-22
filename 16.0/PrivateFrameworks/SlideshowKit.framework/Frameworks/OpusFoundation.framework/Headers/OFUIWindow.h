// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OFUIWINDOW_H
#define OFUIWINDOW_H

@class UIWindow, NSMutableDictionary, NSString;
@protocol UIGestureRecognizerDelegate;


#import "OFUIWindowDraggingAutoscroll.h"
#import "OFUIWindowDraggingGestureRecognizer.h"
#import "OFUIWindowDraggingSession.h"

@interface OFUIWindow : UIWindow <UIGestureRecognizerDelegate>

 {
    NSMutableDictionary *_eventsTracking;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) OFUIWindowDraggingAutoscroll *draggingAutoscroll; // ivar: _draggingAutoscroll
@property (retain, nonatomic) OFUIWindowDraggingGestureRecognizer *draggingGestureRecognizer; // ivar: _draggingGestureRecognizer
@property (retain, nonatomic) OFUIWindowDraggingSession *draggingSession; // ivar: _draggingSession
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL showTouches; // ivar: _showTouches
@property (readonly) Class superclass;


-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)isDragging;
-(id)beginDraggingItems:(id)arg0 position:(struct CGPoint )arg1 source:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)cancelDragging;
-(void)commonInit;
-(void)dealloc;
-(void)handleDragging:(id)arg0 ;
-(void)sendEvent:(id)arg0 ;


@end


#endif