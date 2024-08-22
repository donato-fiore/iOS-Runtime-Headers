// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHOMEGRABBERREVEALGESTURESMANAGER_H
#define SBHOMEGRABBERREVEALGESTURESMANAGER_H

@class UITapGestureRecognizer, UIScreenEdgePanGestureRecognizer, NSHashTable, NSString;
@protocol UIGestureRecognizerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SBHomeGrabberRevealGesturesManager : NSObject <UIGestureRecognizerDelegate>

 {
    UITapGestureRecognizer *_bounceTapRecognizer;
    UITapGestureRecognizer *_revealTapRecognizer;
    UITapGestureRecognizer *_revealDoubleTapRecognizer;
    UIScreenEdgePanGestureRecognizer *_revealEdgePanRecognizer;
    NSObject<OS_dispatch_queue> *_registrationQueue;
    NSHashTable *_registeredGrabbers;
    BOOL _gestureEnabled;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerContainsPointerEvent:(id)arg0 ;
-(id)init;
-(void)_edgePanChanged:(id)arg0 ;
-(void)_tapRecognized:(id)arg0 ;
-(void)registerGrabber:(id)arg0 ;
-(void)unregisterGrabber:(id)arg0 ;


@end


#endif