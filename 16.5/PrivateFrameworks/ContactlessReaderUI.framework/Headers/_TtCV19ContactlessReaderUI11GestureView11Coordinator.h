// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTCV19CONTACTLESSREADERUI11GESTUREVIEW11COORDINATOR_H
#define _TTCV19CONTACTLESSREADERUI11GESTUREVIEW11COORDINATOR_H

@protocol UIGestureRecognizerDelegate;

#import <Foundation/Foundation.h>


@interface _TtCV19ContactlessReaderUI11GestureView11Coordinator : NSObject <UIGestureRecognizerDelegate>

 {
    ? parent;
}




-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(id)init;
-(void)handleDoubleTap2FingersWithSender:(id)arg0 ;
-(void)handleDoubleTap3FingersWithSender:(id)arg0 ;
-(void)handleDoubleTapWithSender:(id)arg0 ;
-(void)handleLongPressWithSender:(id)arg0 ;
-(void)handlePanWithSender:(id)arg0 ;
-(void)handleSwipe2FingersWithSender:(id)arg0 ;
-(void)handleSwipeWithSender:(id)arg0 ;
-(void)handleTap3FingersWithSender:(id)arg0 ;
-(void)handleTapWithSender:(id)arg0 ;
-(void)handleVeryLongPressWithSender:(id)arg0 ;


@end


#endif