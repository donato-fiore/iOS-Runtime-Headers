// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MPCVIDEOVIEWCONTROLLERMEDIAFOUNDATIONIMPLEMENTATION_H
#define _MPCVIDEOVIEWCONTROLLERMEDIAFOUNDATIONIMPLEMENTATION_H

@class UIViewController, NSString, AVPlayerViewController;
@protocol AVPlayerViewControllerDelegate, MPCPlaybackEngineEventObserving, MPCVideoOutput, MPCVideoOutputDelegate;


#import "MPCPlaybackEngine.h"

@interface _MPCVideoViewControllerMediaFoundationImplementation : UIViewController <AVPlayerViewControllerDelegate, MPCPlaybackEngineEventObserving, MPCVideoOutput>

 {
    int _videoDebugToken;
    NSUInteger _stateHandle;
}


@property (nonatomic) BOOL allowsPictureInPicturePlayback;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) AVPlayerViewController *internalController; // ivar: _internalController
@property (readonly, nonatomic, getter=isPictureInPictureActive) BOOL pictureInPictureActive;
@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine; // ivar: _playbackEngine
@property (readonly, nonatomic) UIViewController *playerViewController;
@property (readonly, nonatomic) CGSize presentationSize;
@property (readonly, nonatomic, getter=isReadyForDisplay) BOOL readyForDisplay;
@property (nonatomic) BOOL showsPlaybackControls;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGRect videoBounds;
@property (copy, nonatomic) NSString *videoGravity;
@property (weak, nonatomic) NSObject<MPCVideoOutputDelegate> *videoOutputDelegate; // ivar: _videoOutputDelegate


+(id)keyPathsForValuesAffectingAllowsPictureInPicturePlayback;
+(id)keyPathsForValuesAffectingIsPictureInPictureActive;
+(id)keyPathsForValuesAffectingIsReadyForDisplay;
+(id)keyPathsForValuesAffectingPresentationSize;
+(id)keyPathsForValuesAffectingShowsPlaybackControls;
+(id)keyPathsForValuesAffectingVideoBounds;
+(id)keyPathsForValuesAffectingVideoGravity;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)_stateDictionary;
-(id)initWithPlaybackEngine:(id)arg0 ;
-(void)_updateViewControllerHierarchyForPlaybackEngine:(id)arg0 ;
-(void)dealloc;
-(void)engine:(id)arg0 willChangeToItem:(id)arg1 fromItem:(id)arg2 ;
-(void)engineDidResetMediaServices:(id)arg0 ;
-(void)enterFullScreenWithCompletion:(id)arg0 ;
-(void)exitFullScreenWithCompletion:(id)arg0 ;
-(void)forwardInvocation:(id)arg0 ;
-(void)showFullScreenPresentationFromView:(id)arg0 completion:(id)arg1 ;
-(void)stopPictureInPicture;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif