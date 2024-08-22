// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFNAVIGATIONUTILITIESMANAGER_H
#define _SFNAVIGATIONUTILITIESMANAGER_H

@class NSNumber;

#import <Foundation/Foundation.h>

#import "_SFPerSitePreferencesVendor.h"
#import "_SFReloadOptionsController.h"

@interface _SFNavigationUtilitiesManager : NSObject {
    _SFPerSitePreferencesVendor *_preferencesVendor;
    NSNumber *_cachedPlayingPauseQuirkEnabled;
    NSNumber *_cachedPerDocumentAutoplayBehaviorQuirkEnabled;
}


@property (nonatomic) NSInteger persona; // ivar: _persona
@property (weak, nonatomic) _SFReloadOptionsController *reloadOptionsController; // ivar: _reloadOptionsController


+(id)_sharedUserAgentQuirksManager;
-(BOOL)_shouldOverrideUserAgentSettingForFacebookAuthURL:(id)arg0 ;
-(id)initWithPerSitePreferencesVendor:(id)arg0 ;
-(void)_applyAutoplayQuirksToWebsitePolicies:(id)arg0 desktopSiteSetting:(NSInteger)arg1 ;
-(void)websitePoliciesForURL:(id)arg0 isForMainFrameNavigation:(BOOL)arg1 navigationType:(NSInteger)arg2 completionHandler:(id)arg3 ;


@end


#endif