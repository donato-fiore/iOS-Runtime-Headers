// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVNEWSWIDGETPLAYERBEHAVIORCONTEXT_H
#define AVNEWSWIDGETPLAYERBEHAVIORCONTEXT_H

@class UIView, AVPlayer, NSString;
@protocol AVPlaybackContentTransitioningViewDelegate, AVPlayerViewControllerBehaviorContext, AVBehaviorContextInternal, AVBehaviorContext;

#import <Foundation/Foundation.h>

#import "AVNewsWidgetPlayerBehavior.h"
#import "AVPlaybackContentTransitioningView.h"
#import "AVPlayerViewController.h"

@interface AVNewsWidgetPlayerBehaviorContext : NSObject <AVPlaybackContentTransitioningViewDelegate, AVPlayerViewControllerBehaviorContext, AVBehaviorContextInternal, AVBehaviorContext>



@property (readonly, nonatomic) NSInteger activeContentTransitionType;
@property (weak, nonatomic) AVNewsWidgetPlayerBehavior *behavior; // ivar: _behavior
@property (readonly, nonatomic, getter=isContentTransitionInteractive) BOOL contentTransitionInteractive;
@property (retain, nonatomic) AVPlaybackContentTransitioningView *contentTransitionView; // ivar: _contentTransitionView
@property (readonly, nonatomic) UIView *contentTransitioningOverlayView;
@property (retain, nonatomic) AVPlayer *contentTransitioningPlayer; // ivar: _contentTransitioningPlayer
@property (retain, nonatomic) UIView *customContentTransitioningInfoPanel; // ivar: _customContentTransitioningInfoPanel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) AVPlayerViewController *playerViewController; // ivar: _playerViewController
@property (nonatomic, getter=isStartNextContentTransitionButtonEnabled) BOOL startNextContentTransitionButtonEnabled; // ivar: _startNextContentTransitionButtonEnabled
@property (nonatomic, getter=isStartPreviousContentTransitionButtonEnabled) BOOL startPreviousContentTransitionButtonEnabled; // ivar: _startPreviousContentTransitionButtonEnabled
@property (readonly) Class superclass;


-(BOOL)contentTransitioningView:(id)arg0 shouldBeginTransitionWithDirection:(NSInteger)arg1 ;
-(BOOL)contentTransitioningViewShouldBeginDragging:(id)arg0 locationInView:(struct CGPoint )arg1 ;
-(NSInteger)_transitionDirectionForContentTransitionType:(NSInteger)arg0 ;
-(NSInteger)contentTransitionTypeForTransitionDirection:(NSInteger)arg0 ;
-(id)contentTransitioningPlayerContentViewForTransition:(id)arg0 ;
-(id)initWithAVKitOwner:(id)arg0 ;
-(id)makePlaybackContentContainerWithFrame:(struct CGRect )arg0 activeContentView:(id)arg1 ;
-(void)contentTransitioningViewDidChangeTransitionStatus:(id)arg0 oldState:(NSInteger)arg1 oldTransitionDirection:(NSInteger)arg2 oldProgress:(CGFloat)arg3 ;
-(void)didAddBehavior:(id)arg0 ;
-(void)didRemoveBehavior:(id)arg0 ;
-(void)setVideoGravityForTransitioningContent:(id)arg0 ;
-(void)startContentTransition:(NSInteger)arg0 ;
-(void)updateStartLeftRightContentTransitionButtonsEnabled;
-(void)viewDidLoad;
-(void)willAddBehavior:(id)arg0 ;
-(void)willRemoveBehavior:(id)arg0 ;


@end


#endif