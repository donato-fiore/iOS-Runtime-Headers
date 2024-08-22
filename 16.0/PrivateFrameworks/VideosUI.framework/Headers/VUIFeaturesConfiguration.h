// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIFEATURESCONFIGURATION_H
#define VUIFEATURESCONFIGURATION_H


#import <Foundation/Foundation.h>

#import "VUIAccountConfig.h"
#import "VUIAutoPlayConfig.h"
#import "VUICanonicalConfig.h"
#import "VUIContextMenuConfig.h"
#import "VUIDownloadConfig.h"
#import "VUIDropOnTabConfig.h"
#import "VUIInAppMessagesConfig.h"
#import "VUILiveLinkConfig.h"
#import "VUIMediaShowcasingConfig.h"
#import "VUINowPlayingConfig.h"
#import "VUIPlaybackUpNextConfig.h"
#import "VUISyndicationConfig.h"
#import "VUIUpNextConfig.h"

@interface VUIFeaturesConfiguration : NSObject

@property (readonly, nonatomic) VUIAccountConfig *accountConfig; // ivar: _accountConfig
@property (readonly, nonatomic) VUIAutoPlayConfig *autoPlayConfig; // ivar: _autoPlayConfig
@property (readonly, nonatomic) VUICanonicalConfig *canonicalConfig; // ivar: _canonicalConfig
@property (readonly, nonatomic) VUIContextMenuConfig *contextMenuConfig; // ivar: _contextMenuConfig
@property (readonly, nonatomic) VUIDownloadConfig *downloadConfig; // ivar: _downloadConfig
@property (readonly, nonatomic) VUIDropOnTabConfig *dropOnTabConfig; // ivar: _dropOnTabConfig
@property (readonly, nonatomic) VUIInAppMessagesConfig *inAppMessagesConfig; // ivar: _inAppMessagesConfig
@property (readonly, nonatomic) VUILiveLinkConfig *liveLinkConfig; // ivar: _liveLinkConfig
@property (readonly, nonatomic) VUIMediaShowcasingConfig *mediaShowcaseConfig; // ivar: _mediaShowcaseConfig
@property (readonly, nonatomic) VUINowPlayingConfig *nowPlayingConfig; // ivar: _nowPlayingConfig
@property (readonly, nonatomic) VUIPlaybackUpNextConfig *playbackUpNextConfig; // ivar: _playbackUpNextConfig
@property (readonly, nonatomic) VUISyndicationConfig *syndicationConfig; // ivar: _syndicationConfig
@property (readonly, nonatomic) VUIUpNextConfig *upNextConfig; // ivar: _upNextConfig


+(BOOL)boolValueForKey:(id)arg0 fromDictionary:(id)arg1 defaultValue:(BOOL)arg2 ;
+(id)defaultsNumberValueForKey:(id)arg0 ;
+(id)defaultsStringValueForKey:(id)arg0 ;
+(id)numberValueForKey:(id)arg0 fromDictionary:(id)arg1 ;
+(id)sharedInstance;
-(id)init;
-(void)_populateAccountConfig:(id)arg0 ;
-(void)_populateCanonicalConfig:(id)arg0 ;
-(void)_populateMediaShowcaseConfig:(id)arg0 ;
-(void)_updateTVSettingsIfNeeded:(BOOL)arg0 ;
-(void)parseUpNextConfig:(id)arg0 ;
-(void)updateWithDictionary:(id)arg0 ;


@end


#endif