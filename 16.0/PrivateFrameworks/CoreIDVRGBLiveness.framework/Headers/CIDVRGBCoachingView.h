// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CIDVRGBCOACHINGVIEW_H
#define CIDVRGBCOACHINGVIEW_H

@class UIView, AVPlayerViewController, AVQueuePlayer;



@interface CIDVRGBCoachingView : UIView {
    AVPlayerViewController *_playerViewController;
    AVQueuePlayer *_player;
    id *_completion;
    BOOL _loop;
    float playrate;
}




-(id)_maskingCompositionForAsset:(id)arg0 ;
-(id)_videoURLForStyle:(NSInteger)arg0 ;
-(id)initWithDuration:(id)arg0 ;
-(void)_notifyStyleFinished;
-(void)_setup:(id)arg0 ;
-(void)_videoPlaybackDidFinish:(id)arg0 ;
-(void)playWithCompletion:(id)arg0 ;
-(void)setStyle:(NSInteger)arg0 ;
-(void)setStyle:(NSInteger)arg0 loop:(BOOL)arg1 completion:(id)arg2 ;
-(void)stopWithoutCompletion;


@end


#endif