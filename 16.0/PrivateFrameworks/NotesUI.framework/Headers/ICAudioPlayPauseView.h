// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICAUDIOPLAYPAUSEVIEW_H
#define ICAUDIOPLAYPAUSEVIEW_H

@class UIView, AVAsset, ICAttachment, CALayer;


#import "ICNoteEditorIconImageView.h"

@interface ICAudioPlayPauseView : UIView

@property (readonly, nonatomic) AVAsset *audio;
@property (retain, nonatomic) ICAttachment *audioAttachment; // ivar: _audioAttachment
@property (retain, nonatomic) CALayer *backgroundLayer; // ivar: _backgroundLayer
@property (readonly, nonatomic) BOOL isPlaying;
@property (retain, nonatomic) ICNoteEditorIconImageView *pauseView; // ivar: _pauseView
@property (retain, nonatomic) ICNoteEditorIconImageView *playView; // ivar: _playView


-(BOOL)isAccessibilityElement;
-(id)accessibilityLabel;
-(id)addSubImageViewForImage:(id)arg0 ;
-(id)foregroundStrokeColor;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)audioPlaybackPauseNotification:(id)arg0 ;
-(void)audioPlaybackPlayNotification:(id)arg0 ;
-(void)audioPlaybackStopNotification:(id)arg0 ;
-(void)audioPlaybackTimeChangedNotification:(id)arg0 ;
-(void)createBackgroundLayer;
-(void)createPlayPauseViews;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)didPlayToEndNotification:(id)arg0 ;
-(void)pause;
-(void)play;
-(void)setImageNamed:(id)arg0 onLayer:(id)arg1 adjustLayerSize:(BOOL)arg2 ;
-(void)sharedInit;
-(void)showPaused;
-(void)showPlaying;
-(void)showPressed:(BOOL)arg0 ;
-(void)showStopped;
-(void)tapGesture:(id)arg0 ;
-(void)tintColorDidChange;
-(void)togglePlayPause;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)updateTime:(CGFloat)arg0 duration:(CGFloat)arg1 ;


@end


#endif