// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUCAMERAPLAYERPLACEHOLDERCONTENTVIEWCONTROLLER_H
#define HUCAMERAPLAYERPLACEHOLDERCONTENTVIEWCONTROLLER_H

@class UIViewController, NSString, HMCameraClip, UIImageView, HFCameraPlaybackEngine;
@protocol HFCameraPlaybackEngineObserver;



@interface HUCameraPlayerPlaceholderContentViewController : UIViewController <HFCameraPlaybackEngineObserver>



@property (nonatomic) BOOL cameraPlayerHasContentToShow; // ivar: _cameraPlayerHasContentToShow
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMCameraClip *lastRequestedClip; // ivar: _lastRequestedClip
@property (retain, nonatomic) UIImageView *placeholderImageView; // ivar: _placeholderImageView
@property (weak, nonatomic) HFCameraPlaybackEngine *playbackEngine; // ivar: _playbackEngine
@property (readonly) Class superclass;


-(BOOL)_shouldHidePlaceholderContentForCurrentAccessMode;
-(BOOL)_shouldShowDefaultPlaceholderContent;
-(BOOL)_shouldShowPlaceholderContentForUserScrubbing;
-(BOOL)shouldShowPlaceholderContent;
-(id)initWithPlaybackEngine:(id)arg0 ;
-(void)hu_reloadData;
-(void)playbackEngine:(id)arg0 didUpdatePlaybackError:(id)arg1 ;
-(void)playbackEngine:(id)arg0 didUpdatePlaybackPosition:(id)arg1 ;
-(void)playbackEngine:(id)arg0 didUpdateTimeControlStatus:(NSUInteger)arg1 ;
-(void)updatePlaceholderContent;
-(void)updatePlaceholderImage:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif