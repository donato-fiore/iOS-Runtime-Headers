// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVZOOMINGBEHAVIORCONTEXT_H
#define AVZOOMINGBEHAVIORCONTEXT_H

@class NSString, UITapGestureRecognizer;
@protocol AVPlayerViewControllerBehaviorContext, AVBehaviorContextInternal, UIGestureRecognizerDelegate, AVBehaviorContext;

#import <Foundation/Foundation.h>

#import "AVPlaybackContentContainerView.h"
#import "AVZoomingBehavior.h"
#import "AVPlaybackContentZoomingView.h"
#import "AVObservationController.h"
#import "AVPlayerViewController.h"

@interface AVZoomingBehaviorContext : NSObject <AVPlayerViewControllerBehaviorContext, AVBehaviorContextInternal, UIGestureRecognizerDelegate, AVBehaviorContext>



@property (readonly, nonatomic) AVPlaybackContentContainerView *activeContentView;
@property (weak, nonatomic) AVZoomingBehavior *behavior; // ivar: _behavior
@property (nonatomic) CGSize contentAspectRatio; // ivar: _contentAspectRatio
@property (retain, nonatomic) AVPlaybackContentZoomingView *contentZoomingView; // ivar: _contentZoomingView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UITapGestureRecognizer *doubleTapGestureRecognizer; // ivar: _doubleTapGestureRecognizer
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) AVObservationController *observationController; // ivar: _observationController
@property (readonly, weak, nonatomic) AVPlayerViewController *playerViewController; // ivar: _playerViewController
@property (readonly) Class superclass;
@property (nonatomic, getter=isZoomingEnabled) BOOL zoomingEnabled; // ivar: _zoomingEnabled


-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(id)initWithAVKitOwner:(id)arg0 ;
-(id)makePlaybackContentContainerWithFrame:(struct CGRect )arg0 activeContentView:(id)arg1 ;
-(void)_handleDoubleTapGestureRecognizer:(id)arg0 ;
-(void)_updateZoomingView;
-(void)dealloc;
-(void)didAddBehavior:(id)arg0 ;
-(void)didRemoveBehavior:(id)arg0 ;
-(void)viewDidLoad;
-(void)willAddBehavior:(id)arg0 ;
-(void)willRemoveBehavior:(id)arg0 ;


@end


#endif