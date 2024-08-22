// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVSCRUBBINGGESTUREPLATFORMADAPTER_IOS_H
#define AVSCRUBBINGGESTUREPLATFORMADAPTER_IOS_H

@class UIView, NSString;
@protocol UIGestureRecognizerDelegate;


#import "AVScrubbingGesturePlatformAdapter.h"
#import "AVScrubbingPanGestureRecognizer.h"
#import "AVTouchGestureRecognizer.h"
#import "AVScrubbingGesturePlatformConfiguration.h"

@interface AVScrubbingGesturePlatformAdapter_iOS : AVScrubbingGesturePlatformAdapter <UIGestureRecognizerDelegate>

 {
    UIView *_view;
    AVScrubbingPanGestureRecognizer *_panGestureRecognizer;
    AVTouchGestureRecognizer *_touchGestureRecognizer;
    float _timelineVelocity;
    NSInteger _gestureActiveCount;
    AVScrubbingGesturePlatformConfiguration *_gestureConfiguration;
    float _coordinateVelocityConstant;
    float _coordinateVelocityScale;
    float _deviceCoordinateVelocityScaleFactor;
    BOOL _gestureEnabled;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)gestureActive;
-(BOOL)gestureEnabled;
-(BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(float)timelineVelocity;
-(id)initWithView:(id)arg0 ;
-(void)_panGestureAction:(id)arg0 ;
-(void)_touchGestureAction:(id)arg0 ;
-(void)setGestureEnabled:(BOOL)arg0 ;


@end


#endif