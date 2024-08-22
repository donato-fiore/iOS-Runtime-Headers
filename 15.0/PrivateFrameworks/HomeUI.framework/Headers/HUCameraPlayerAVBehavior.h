// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUCAMERAPLAYERAVBEHAVIOR_H
#define HUCAMERAPLAYERAVBEHAVIOR_H

@class AVHomeIPCameraBehavior, NSString;
@protocol HFCameraClipScrubbing, HUCameraPlayerAVBehaviorDelegate;



@interface HUCameraPlayerAVBehavior : AVHomeIPCameraBehavior <HFCameraClipScrubbing>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUCameraPlayerAVBehaviorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(void)beginScrubbing;
-(void)endScrubbingWithTargetTime:(CGFloat)arg0 ;
-(void)pictureInPictureActionButtonTapped;
-(void)playbackControlsDidChangePlayerVolume:(float)arg0 ;
-(void)playbackControlsDidToggleMuted:(BOOL)arg0 ;
-(void)playbackControlsDidUpdateVisibilityOfLoadingIndicator:(BOOL)arg0 ;
-(void)scrubToTime:(CGFloat)arg0 ;


@end


#endif