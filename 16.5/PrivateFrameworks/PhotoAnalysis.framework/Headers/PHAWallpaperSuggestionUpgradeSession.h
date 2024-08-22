// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHAWALLPAPERSUGGESTIONUPGRADESESSION_H
#define PHAWALLPAPERSUGGESTIONUPGRADESESSION_H

@class PRSService, VCPMediaAnalysisService, NSMutableSet;
@protocol OS_os_log, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PHAWallpaperSuggestionUpgradeSession : NSObject {
    PRSService *_posterService;
    VCPMediaAnalysisService *_mediaAnalysisService;
    NSObject<OS_os_log> *_loggingConnection;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_upgradeSessions;
}




-(BOOL)beginUpgradeSessionAtURL:(id)arg0 ;
-(BOOL)endUpgradeSessionAtURL:(id)arg0 ;
-(id)init;
-(id)upgradeSessionURLForPosterConfiguration:(id)arg0 ;
-(void)fetchPosterConfigurationWithAssetDirectory:(id)arg0 completion:(id)arg1 ;
-(void)refreshPosterConfiguration:(id)arg0 withSessionURL:(id)arg1 completion:(id)arg2 ;
-(void)upgradePosterConfiguration:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)upgradePosterConfiguration:(id)arg0 withSessionURL:(id)arg1 localIdentifier:(id)arg2 options:(id)arg3 completion:(id)arg4 ;
-(void)upgradePosterConfiguration:(id)arg0 withSessionURL:(id)arg1 options:(id)arg2 completion:(id)arg3 ;
-(void)upgradePosterConfigurationWithAssetDirectory:(id)arg0 options:(id)arg1 completion:(id)arg2 ;


@end


#endif