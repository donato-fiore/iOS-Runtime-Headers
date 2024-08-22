// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVMUSICAPPBEHAVIORCONTEXT_H
#define AVMUSICAPPBEHAVIORCONTEXT_H

@class NSString, NSNumber;
@protocol AVBehaviorContextInternal, AVPlayerViewControllerBehaviorContext, AVMetricsCollectionBehaviorContext, AVBehaviorContext;

#import <Foundation/Foundation.h>

#import "AVMusicAppBehavior.h"
#import "AVObservationController.h"
#import "AVPlayerController.h"
#import "AVPlayerViewController.h"

@interface AVMusicAppBehaviorContext : NSObject <AVBehaviorContextInternal, AVPlayerViewControllerBehaviorContext, AVMetricsCollectionBehaviorContext, AVBehaviorContext>



@property (weak, nonatomic) AVMusicAppBehavior *behavior; // ivar: _behavior
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) AVObservationController *observationController; // ivar: _observationController
@property (retain, nonatomic) AVPlayerController *playerController; // ivar: _playerController
@property (readonly, weak, nonatomic) AVPlayerViewController *playerViewController; // ivar: _playerViewController
@property (nonatomic, getter=isScrubbing) BOOL scrubbing; // ivar: _scrubbing
@property (retain, nonatomic) NSNumber *seekTargetTime; // ivar: _seekTargetTime
@property (nonatomic) BOOL showsSkipItemButtons; // ivar: _showsSkipItemButtons
@property (nonatomic, getter=isSkipToNextItemButtonEnabled) BOOL skipToNextItemButtonEnabled; // ivar: _skipToNextItemButtonEnabled
@property (nonatomic, getter=isSkipToPreviousItemButtonEnabled) BOOL skipToPreviousItemButtonEnabled; // ivar: _skipToPreviousItemButtonEnabled
@property (readonly) Class superclass;


-(id)initWithAVKitOwner:(id)arg0 ;
-(void)_updatePlaybackControlsInclusion;
-(void)_updateSkipItemButtonsEnabled;
-(void)dealloc;
-(void)didAddBehavior:(id)arg0 ;
-(void)didRemoveBehavior:(id)arg0 ;
-(void)playerViewController:(id)arg0 didCollectMetricsEvent:(NSInteger)arg1 ;
-(void)viewDidLoad;
-(void)willAddBehavior:(id)arg0 ;
-(void)willRemoveBehavior:(id)arg0 ;


@end


#endif