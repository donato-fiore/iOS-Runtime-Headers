// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKLOOKAROUNDGESTURECONTROLLER_H
#define MKLOOKAROUNDGESTURECONTROLLER_H

@class UITapGestureRecognizer, UIPanGestureRecognizer, UIPinchGestureRecognizer, NSDate, VKCompoundAnimation, NSString;
@protocol UIGestureRecognizerDelegate, MKLookAroundGestureControllerDelegate;

#import <Foundation/Foundation.h>

#import "MKLookAroundView.h"

@interface MKLookAroundGestureController : NSObject <UIGestureRecognizerDelegate>

 {
    NSInteger _userInteractionCount;
    UITapGestureRecognizer *_singleNavigateGestureRecognizer;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UIPinchGestureRecognizer *_zoomGestureRecognizer;
    NSDate *_singleTapTime;
    VKCompoundAnimation *_panDecelerationAnimationGroup;
    NSInteger _lastZoomDirection;
    CGFloat _startZoomScale;
    CGFloat _lastZoomScale;
    BOOL _readyToReplayTap;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MKLookAroundGestureControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) MKLookAroundView *lookAroundView; // ivar: _lookAroundView
@property (nonatomic) BOOL navigatingEnabled; // ivar: _navigatingEnabled
@property (nonatomic) BOOL panningEnabled; // ivar: _panningEnabled
@property (readonly) Class superclass;
@property (nonatomic) BOOL zoomingEnabled; // ivar: _zoomingEnabled


-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(id)initWithLookAroundView:(id)arg0 ;
-(void)_handlePan:(id)arg0 ;
-(void)_handleSingleNavigate:(id)arg0 ;
-(void)_handleZoom:(id)arg0 ;
-(void)_moveBackToReplayTap;


@end


#endif