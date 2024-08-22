// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCROLLPERFTESTRUNNER_H
#define SCROLLPERFTESTRUNNER_H

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;


#import "PurplePageLoadTestRunner.h"

@interface ScrollPerfTestRunner : PurplePageLoadTestRunner {
    NSObject<OS_dispatch_queue> *_eventGeneratorQueue;
    NSInteger _gestureState;
    CGFloat _gestureStartTime;
    unsigned int _scrollGestureCount;
    CGPoint _scrollOffsetAtGestureStart;
    NSInteger _scrollDirection;
    int _pageIndex;
    CGFloat _startLoadTime;
    CGFloat _endLoadTime;
    CGFloat _startScrollingTime;
    CGFloat _endScrollingTime;
    CGFloat _lastFramerateTime;
    unsigned int _lastFrameCounter;
    NSMutableArray *_framerateHistory;
    NSMutableDictionary *_outputData;
}




-(BOOL)isPageTooShortToScroll;
-(BOOL)performActionForPage:(id)arg0 ;
-(BOOL)startPageAction:(id)arg0 ;
-(id)finalStatusForPage:(id)arg0 ;
-(id)initWithTestName:(id)arg0 browserController:(id)arg1 ;
-(id)machineConfigInfo;
-(id)outputDataForPage:(id)arg0 ;
-(id)pageScrollView;
-(id)pageWebView;
-(struct CGPoint )touchPointForMoveIndex:(NSUInteger)arg0 ;
-(void)advanceGesture;
-(void)appendToFramerateHistory;
-(void)determineScrollDirection;
-(void)finishPage:(id)arg0 stats:(id)arg1 error:(id)arg2 ;
-(void)finishedTestPage:(id)arg0 ;
-(void)finishedTestRunner;
-(void)startingTestPage:(id)arg0 ;
-(void)writeOutputData;


@end


#endif