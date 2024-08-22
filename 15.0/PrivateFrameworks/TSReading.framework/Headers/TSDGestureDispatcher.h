// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDGESTUREDISPATCHER_H
#define TSDGESTUREDISPATCHER_H

@class NSMutableArray, TSUNoCopyDictionary, NSString;
@protocol TSDGestureDelegate;

#import <Foundation/Foundation.h>

#import "TSDInteractiveCanvasController.h"

@interface TSDGestureDispatcher : NSObject <TSDGestureDelegate>

 {
    NSMutableArray *_simultaneitySets;
    TSUNoCopyDictionary *_priorityMap;
    BOOL _runningTargetHandleGesture;
    NSMutableArray *_gesturesInFlight;
    NSMutableArray *_targetsInFlight;
    BOOL _gestureDidFire;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) TSDInteractiveCanvasController *interactiveCanvasController; // ivar: _interactiveCanvasController
@property (readonly) Class superclass;


-(BOOL)gestureActionShouldBegin:(id)arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)handleGesture:(id)arg0 withTarget:(id)arg1 ;
-(id)initWithInteractiveCanvasController:(id)arg0 ;
-(id)p_getGestureTarget:(id)arg0 ;
-(void)allowSimultaneousRecognitionByRecognizers:(id)arg0 ;
-(void)dealloc;
-(void)didReset:(id)arg0 ;
-(void)gestureRemovedFromView:(id)arg0 ;
-(void)handleGesture:(id)arg0 ;
-(void)p_gestureNoLongerInFlight:(id)arg0 ;
-(void)prioritizeRecognizer:(id)arg0 overRecognizer:(id)arg1 ;
-(void)teardown;


@end


#endif