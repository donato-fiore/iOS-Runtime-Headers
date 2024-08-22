// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRSHAREDSETTINGS_H
#define MRSHAREDSETTINGS_H


#import <Foundation/Foundation.h>


@interface MRSharedSettings : NSObject

@property (readonly, nonatomic) BOOL canHostMultiplayerStream;
@property (readonly, nonatomic) CGFloat lockScreenAPLRatio;
@property (readonly, nonatomic) CGFloat lockScreenAPLTarget;
@property (readonly, nonatomic, getter=isMultiplayerAware) BOOL multiplayerAware;
@property (readonly, nonatomic, getter=isMultiplayerHost) BOOL multiplayerHost;
@property (readonly, nonatomic) CGFloat quickControlsInactiveTimeout;
@property (readonly, nonatomic) BOOL supportHistorySorting;
@property (readonly, nonatomic) BOOL supportLockScreenBackground;
@property (readonly, nonatomic) BOOL supportNanoStandalone;
@property (readonly, nonatomic) BOOL supportNowPlayingSessionDataSource;
@property (readonly, nonatomic) BOOL supportProximitySorting;
@property (readonly, nonatomic) BOOL supportSessionBasedLockScreenPlatter;
@property (readonly, nonatomic) BOOL supportSessionBasedUI;
@property (readonly, nonatomic) BOOL supportShowMore;


+(id)currentSettings;


@end


#endif