// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLKPLAYABLEUTILITIES_H
#define WLKPLAYABLEUTILITIES_H


#import <Foundation/Foundation.h>


@interface WLKPlayableUtilities : NSObject



+(BOOL)_openITunesPlayableWatchListAppAvailable:(id)arg0 forContentType:(NSUInteger)arg1 canonicalID:(id)arg2 showCanonicalID:(id)arg3 seasonCanonicalID:(id)arg4 ;
+(BOOL)_openITunesPlayableWatchListAppUnavailable:(id)arg0 forContentType:(NSUInteger)arg1 canonicalID:(id)arg2 showCanonicalID:(id)arg3 seasonCanonicalID:(id)arg4 ;
+(BOOL)_openNonITunesPlayableWatchListAppAvailable:(id)arg0 forContentType:(NSUInteger)arg1 canonicalID:(id)arg2 showCanonicalID:(id)arg3 seasonCanonicalID:(id)arg4 ;
+(BOOL)_openNonITunesPlayableWatchListAppUnavailable:(id)arg0 forContentType:(NSUInteger)arg1 canonicalID:(id)arg2 showCanonicalID:(id)arg3 seasonCanonicalID:(id)arg4 ;
+(BOOL)_openPunchoutURL:(id)arg0 isPlaybackURL:(BOOL)arg1 ;
+(BOOL)_playNonITunesPlayableUsingAssociatedApp:(id)arg0 ;
+(BOOL)openPlayable:(id)arg0 forContentType:(NSUInteger)arg1 canonicalID:(id)arg2 ;
+(BOOL)openPlayable:(id)arg0 forContentType:(NSUInteger)arg1 canonicalID:(id)arg2 showCanonicalID:(id)arg3 ;
+(BOOL)openPlayable:(id)arg0 forContentType:(NSUInteger)arg1 canonicalID:(id)arg2 showCanonicalID:(id)arg3 seasonCanonicalID:(id)arg4 ;
+(id)_defaultOpenPunchoutURLWithPlayable:(id)arg0 ;
+(id)_defaultPlayPunchoutURLWithPlayable:(id)arg0 ;
+(id)_defaultPunchoutURLWithPlayable:(id)arg0 URLKey:(id)arg1 ;
+(id)_defaultPunchoutURLWithPlayable:(id)arg0 isPlaybackURL:(*BOOL)arg1 ;
+(id)_punchoutURLForDirectPlayback:(id)arg0 ignoreExtras:(BOOL)arg1 ;
+(id)_watchListAppOpenPunchoutURLWithITunesPlayable:(id)arg0 forContentType:(NSUInteger)arg1 canonicalID:(id)arg2 showCanonicalID:(id)arg3 seasonCanonicalID:(id)arg4 ;
+(id)_watchListAppPunchoutURLWithPlayable:(id)arg0 forContentType:(NSUInteger)arg1 canonicalID:(id)arg2 showCanonicalID:(id)arg3 seasonCanonicalID:(id)arg4 allowPlayAction:(BOOL)arg5 isPlaybackURL:(*BOOL)arg6 ;


@end


#endif