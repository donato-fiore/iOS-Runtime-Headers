// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIFEATURESCONFIGURATION_H
#define VUIFEATURESCONFIGURATION_H


#import <Foundation/Foundation.h>

#import "VUIAutoPlayConfig.h"
#import "VUIDownloadConfig.h"
#import "VUIDropOnTabConfig.h"
#import "VUIInAppMessagesConfig.h"
#import "VUILiveLinkConfig.h"
#import "VUINowPlayingConfig.h"
#import "VUIPlaybackUpNextConfig.h"
#import "VUISyndicationConfig.h"
#import "VUIUpNextConfig.h"

@interface VUIFeaturesConfiguration : NSObject

@property (readonly, nonatomic) VUIAutoPlayConfig *autoPlayConfig; // ivar: _autoPlayConfig
@property (readonly, nonatomic) VUIDownloadConfig *downloadConfig; // ivar: _downloadConfig
@property (readonly, nonatomic) VUIDropOnTabConfig *dropOnTabConfig; // ivar: _dropOnTabConfig
@property (readonly, nonatomic) VUIInAppMessagesConfig *inAppMessagesConfig; // ivar: _inAppMessagesConfig
@property (readonly, nonatomic) VUILiveLinkConfig *liveLinkConfig; // ivar: _liveLinkConfig
@property (readonly, nonatomic) VUINowPlayingConfig *nowPlayingConfig; // ivar: _nowPlayingConfig
@property (readonly, nonatomic) VUIPlaybackUpNextConfig *playbackUpNextConfig; // ivar: _playbackUpNextConfig
@property (readonly, nonatomic) VUISyndicationConfig *syndicationConfig; // ivar: _syndicationConfig
@property (readonly, nonatomic) VUIUpNextConfig *upNextConfig; // ivar: _upNextConfig


+(id)numberValueForKey:(id)arg0 ;
+(id)sharedInstance;
+(id)stringValueForKey:(id)arg0 ;
-(id)init;
-(void)parseUpNextConfig:(id)arg0 ;
-(void)updateWithDictionary:(id)arg0 ;


@end


#endif