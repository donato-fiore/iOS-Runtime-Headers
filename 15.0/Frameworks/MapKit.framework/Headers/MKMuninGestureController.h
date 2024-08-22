// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKMUNINGESTURECONTROLLER_H
#define MKMUNINGESTURECONTROLLER_H

@class UITapGestureRecognizer, UIPanGestureRecognizer, UIPinchGestureRecognizer, NSDate, VKCompoundAnimation, NSString;
@protocol UIGestureRecognizerDelegate, MKMuninGestureControllerDelegate;

#import <Foundation/Foundation.h>

#import "MKMuninView.h"

@interface MKMuninGestureController : NSObject <UIGestureRecognizerDelegate>

 {
    NSInteger _userInteractionCount;
    UITapGestureRecognizer *_singleNavigateGestureRecognizer;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    NSDate *_singleTapTime;
    VKCompoundAnimation *_panDecelerationAnimationGroup;
    NSInteger _lastZoomDirection;
    CGFloat _startZoomScale;
    CGFloat _lastZoomScale;
    BOOL _readyToReplayTap;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MKMuninGestureControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) MKMuninView *muninView; // ivar: _muninView
@property (nonatomic) BOOL navigatingEnabled; // ivar: _navigatingEnabled
@property (nonatomic) BOOL panningEnabled; // ivar: _panningEnabled
@property (nonatomic) BOOL pinchingEnabled; // ivar: _pinchingEnabled
@property (readonly) Class superclass;


-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(id)initWithMuninView:(id)arg0 ;
-(void)_handlePan:(id)arg0 ;
-(void)_handlePinch:(id)arg0 ;
-(void)_handleTap:(id)arg0 ;
-(void)_moveBackToReplayTap;


@end


#endif