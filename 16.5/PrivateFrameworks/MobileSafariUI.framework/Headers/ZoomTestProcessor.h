// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ZOOMTESTPROCESSOR_H
#define ZOOMTESTPROCESSOR_H

@class CADisplayLink;


#import "ContentInteractionTestRunner.h"

@interface ZoomTestProcessor : ContentInteractionTestRunner

@property (nonatomic) BOOL didFirstZoomStep; // ivar: _didFirstZoomStep
@property (retain, nonatomic) CADisplayLink *displayLink; // ivar: _displayLink
@property (nonatomic) int iterationsRemaining; // ivar: _iterationsRemaining
@property (nonatomic) int stepsPerZoom; // ivar: _stepsPerZoom
@property (nonatomic) NSInteger testState; // ivar: _testState
@property (nonatomic) BOOL zoomingIn; // ivar: _zoomingIn


-(BOOL)performActionForPage:(id)arg0 ;
-(BOOL)startPageAction:(id)arg0 ;
-(BOOL)updateWithNewScale;
-(id)initWithTestName:(id)arg0 browserController:(id)arg1 ;
-(void)startZoomingTest;
-(void)zoomTestStep;


@end


#endif