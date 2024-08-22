// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CACTOUCHEVENTOBSERVER_H
#define CACTOUCHEVENTOBSERVER_H

@class AXEventProcessor, AXMutableReplayableGesture;
@protocol CACTouchEventObserverDelegate;

#import <Foundation/Foundation.h>


@interface CACTouchEventObserver : NSObject {
    AXEventProcessor *_eventProcessor;
    BOOL _areTouchesDown;
}


@property (weak, nonatomic) NSObject<CACTouchEventObserverDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) AXMutableReplayableGesture *gestureBeingRecorded; // ivar: _gestureBeingRecorded
@property (readonly, nonatomic) BOOL isRecording;
@property (nonatomic) CGFloat startTimeForGestureBeingRecorded; // ivar: _startTimeForGestureBeingRecorded


-(BOOL)_isLiftEvent:(id)arg0 ;
-(BOOL)_isTouchEvent:(id)arg0 ;
-(id)init;
-(id)stopRecordingGesture;
-(void)_didReceiveEvent:(id)arg0 ;
-(void)_recordEvent:(id)arg0 ;
-(void)beginObserving;
-(void)endObserving;
-(void)startRecordingGesture;


@end


#endif