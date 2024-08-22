// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUANNOUNCEMENTPLAYBACKVIEW_H
#define HUANNOUNCEMENTPLAYBACKVIEW_H

@class UIView, NSDictionary, NSURL, HFAudioPlayer, NSMutableArray, CNAvatarView, NSLayoutConstraint, UIImageView;


#import "HUIconView.h"

@interface HUAnnouncementPlaybackView : UIView

@property (retain, nonatomic) NSDictionary *announcementInfo; // ivar: _announcementInfo
@property (retain, nonatomic) NSURL *announcementURL; // ivar: _announcementURL
@property (retain, nonatomic) HFAudioPlayer *audioPlayer; // ivar: _audioPlayer
@property (retain, nonatomic) NSMutableArray *audioWaveLayers; // ivar: _audioWaveLayers
@property (retain, nonatomic) CNAvatarView *avatarView; // ivar: _avatarView
@property (retain, nonatomic) NSLayoutConstraint *centerXConstraint; // ivar: _centerXConstraint
@property (retain, nonatomic) NSLayoutConstraint *centerYConstraint; // ivar: _centerYConstraint
@property (nonatomic) NSUInteger currentWaveLayerIndex; // ivar: _currentWaveLayerIndex
@property (nonatomic) BOOL fullyPlayed; // ivar: _fullyPlayed
@property (retain, nonatomic) UIImageView *genericAvatarView; // ivar: _genericAvatarView
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint; // ivar: _heightConstraint
@property (retain, nonatomic) HUIconView *iconView; // ivar: _iconView
@property (nonatomic) BOOL isSiriEndpointAccessory; // ivar: _isSiriEndpointAccessory
@property (nonatomic) CGFloat playbackFractionComplete; // ivar: _playbackFractionComplete
@property (nonatomic) int productType; // ivar: _productType
@property (retain, nonatomic) NSLayoutConstraint *widthConstraint; // ivar: _widthConstraint


-(BOOL)_isProductTypeHomePod;
-(id)_imageOrViewForServiceType:(id)arg0 ;
-(id)_requiredKeyDescriptors;
-(id)description;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_animateLayerWaveAtIndex:(NSUInteger)arg0 forAveragePower:(CGFloat)arg1 ;
-(void)_configureAnnounceSender:(id)arg0 ;
-(void)_generateRippleForAveragePower:(CGFloat)arg0 ;
-(void)_setupAudioWaveLayers;
-(void)_updateIconViewForServiceType:(id)arg0 ;
-(void)didUpdateAveragePower:(CGFloat)arg0 ;
-(void)pausePlaybackAnimation;
-(void)playbackStopped;
-(void)resumePlaybackAnimation;
-(void)updateConstraints;


@end


#endif