// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUCAMERAPLAYERLIVECONTENTVIEWCONTROLLER_H
#define HUCAMERAPLAYERLIVECONTENTVIEWCONTROLLER_H

@class UIViewController, NSString, HFCameraPlaybackEngine;
@protocol HFCameraPlaybackEngineObserver;


#import "HUCameraView.h"
#import "HUCameraMicrophoneControl.h"

@interface HUCameraPlayerLiveContentViewController : UIViewController <HFCameraPlaybackEngineObserver>



@property (retain, nonatomic) HUCameraView *cameraView; // ivar: _cameraView
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HUCameraMicrophoneControl *microphoneControl; // ivar: _microphoneControl
@property (readonly, nonatomic) HFCameraPlaybackEngine *playbackEngine; // ivar: _playbackEngine
@property (readonly) Class superclass;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithPlaybackEngine:(id)arg0 ;
-(void)_updateCameraCornerRadius;
-(void)playbackEngine:(id)arg0 didUpdateLiveCameraSource:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif