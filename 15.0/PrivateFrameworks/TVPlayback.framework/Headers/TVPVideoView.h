// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TVPVIDEOVIEW_H
#define TVPVIDEOVIEW_H

@class UIView, UILabel, UIImageView;
@protocol TVPAVFPlayback;


#import "TVPPlayerLayerView.h"

@interface TVPVideoView : UIView

@property (readonly, nonatomic) UILabel *debugLabel; // ivar: _debugLabel
@property (nonatomic) BOOL isPrimarySubtitleDisplayer; // ivar: _isPrimarySubtitleDisplayer
@property (retain, nonatomic) NSObject<TVPAVFPlayback> *player; // ivar: _player
@property (retain, nonatomic) TVPPlayerLayerView *playerLayerView; // ivar: _playerLayerView
@property (nonatomic, getter=isReadyForDisplay) BOOL readyForDisplay; // ivar: _readyForDisplay
@property (retain, nonatomic) UIImageView *stillImageView; // ivar: _stillImageView
@property (nonatomic) NSInteger videoGravity; // ivar: _videoGravity


+(id)preservedVideoViewsForPlayer:(id)arg0 identifier:(id)arg1 ;
+(void)_playerStateDidChange:(id)arg0 ;
+(void)_purgePreservedVideoViewsForPlayer:(id)arg0 ;
+(void)initialize;
+(void)preserveVideoViewForReuse:(id)arg0 identifier:(id)arg1 ;
-(id)AVPlayer;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_playerStillImageDidChange:(id)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setAVPlayer:(id)arg0 ;


@end


#endif