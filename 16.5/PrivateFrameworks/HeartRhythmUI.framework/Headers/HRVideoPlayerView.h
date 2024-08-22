// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HRVIDEOPLAYERVIEW_H
#define HRVIDEOPLAYERVIEW_H

@class UIView, NSArray, AVPlayerLooper, AVQueuePlayer, UIImage, UIImageView;
@protocol NSObject;



@interface HRVideoPlayerView : UIView

@property (retain, nonatomic) NSObject<NSObject> *applicationActiveNotificationStub; // ivar: _applicationActiveNotificationStub
@property (retain, nonatomic) NSObject<NSObject> *applicationInactiveNotificationStub; // ivar: _applicationInactiveNotificationStub
@property (retain, nonatomic) NSArray *items; // ivar: _items
@property (nonatomic) BOOL looping; // ivar: _looping
@property (retain, nonatomic) AVPlayerLooper *playerLooper; // ivar: _playerLooper
@property (nonatomic) BOOL preventsDisplaySleepDuringVideoPlayback;
@property (retain, nonatomic) AVQueuePlayer *queuePlayer; // ivar: _queuePlayer
@property (nonatomic) BOOL shouldBePlaying; // ivar: _shouldBePlaying
@property (retain, nonatomic) UIImage *thumbnail; // ivar: _thumbnail
@property (retain, nonatomic) UIImageView *thumbnailImageView; // ivar: _thumbnailImageView


+(Class)layerClass;
+(id)playerViewWithURL:(id)arg0 looping:(BOOL)arg1 ;
-(id)initWithItems:(id)arg0 thumbnail:(id)arg1 looping:(BOOL)arg2 ;
-(id)player;
-(void)_didReceivePlayerNotification:(id)arg0 ;
-(void)_setUpNotifications;
-(void)_setUpUI;
-(void)dealloc;
-(void)pause;
-(void)play;
-(void)setPlayer:(id)arg0 ;


@end


#endif