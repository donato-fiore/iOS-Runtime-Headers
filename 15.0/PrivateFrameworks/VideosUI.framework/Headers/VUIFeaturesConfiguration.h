// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIFEATURESCONFIGURATION_H
#define VUIFEATURESCONFIGURATION_H


#import <Foundation/Foundation.h>

#import "VUIAutoPlayConfig.h"
#import "VUIDownloadConfig.h"
#import "VUIInAppMessagesConfig.h"
#import "VUILiveLinkConfig.h"
#import "VUINowPlayingConfig.h"
#import "VUIPostPlayConfig.h"
#import "VUISyndicationConfig.h"

@interface VUIFeaturesConfiguration : NSObject

@property (readonly, nonatomic) VUIAutoPlayConfig *autoPlayConfig; // ivar: _autoPlayConfig
@property (readonly, nonatomic) VUIDownloadConfig *downloadConfig; // ivar: _downloadConfig
@property (readonly, nonatomic) VUIInAppMessagesConfig *inAppMessagesConfig; // ivar: _inAppMessagesConfig
@property (readonly, nonatomic) VUILiveLinkConfig *liveLinkConfig; // ivar: _liveLinkConfig
@property (readonly, nonatomic) VUINowPlayingConfig *nowPlayingConfig; // ivar: _nowPlayingConfig
@property (readonly, nonatomic) VUIPostPlayConfig *postPlayConfig; // ivar: _postPlayConfig
@property (readonly, nonatomic) VUISyndicationConfig *syndicationConfig; // ivar: _syndicationConfig


+(id)sharedInstance;
-(id)init;
-(void)updateWithDictionary:(id)arg0 ;


@end


#endif