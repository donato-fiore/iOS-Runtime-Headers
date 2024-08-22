// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAINTERAPPAUDIOTRANSPORTVIEW_H
#define CAINTERAPPAUDIOTRANSPORTVIEW_H

@class UIView, UILabel, UIColor, NSTimer, UIFont;


#import "CAUITransportButton.h"

@interface CAInterAppAudioTransportView : UIView {
    CAUITransportButton *rewindButton;
    CAUITransportButton *playPauseButton;
    CAUITransportButton *recordButton;
    UILabel *currentTimeLabel;
    UIColor *pauseButtonColor;
    UIColor *playButtonColor;
    *OpaqueAudioComponentInstance outputUnit;
    *HostCallbackInfo callBackInfo;
    NSTimer *pollingPlayerTimer;
    BOOL enabled;
    BOOL inForeground;
    CGFloat _playTime;
}


@property (readonly, nonatomic, getter=isConnected) BOOL connected; // ivar: _connected
@property (retain, nonatomic) UIFont *currentTimeLabelFont; // ivar: _currentTimeLabelFont
@property (getter=isEnabled) BOOL enabled;
@property (retain, nonatomic) UIColor *labelColor;
@property (retain, nonatomic) UIColor *pauseButtonColor;
@property (retain, nonatomic) UIColor *playButtonColor;
@property (readonly, nonatomic, getter=isPlaying) BOOL playing; // ivar: _playing
@property (retain, nonatomic) UIColor *recordButtonColor;
@property (readonly, nonatomic, getter=isRecording) BOOL recording; // ivar: _recording
@property (retain, nonatomic) UIColor *rewindButtonColor;


-(BOOL)canPlay;
-(BOOL)canRecord;
-(BOOL)canRewind;
-(BOOL)isHostConnected;
-(id)getPlayTimeString;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)appHasGoneForeground;
-(void)appHasGoneInBackground;
-(void)audioUnitPropertyChangedListener:(*void)arg0 unit:(struct OpaqueAudioComponentInstance *)arg1 propID:(unsigned int)arg2 scope:(unsigned int)arg3 element:(unsigned int)arg4 ;
-(void)dealloc;
-(void)getHostCallbackInfo;
-(void)initialize;
-(void)layoutSubviews;
-(void)pollHost;
-(void)rewindAction:(id)arg0 ;
-(void)sendStateToRemoteHost:(unsigned int)arg0 ;
-(void)setOutputAudioUnit:(struct OpaqueAudioComponentInstance *)arg0 ;
-(void)startPollingPlayer;
-(void)stopPollingPlayer;
-(void)togglePlayback:(id)arg0 ;
-(void)toggleRecording:(id)arg0 ;
-(void)updateStatefromTransportCallBack;
-(void)updateTransportControls;


@end


#endif