// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFPERSITEPREFERENCESVENDOR_H
#define _SFPERSITEPREFERENCESVENDOR_H

@class NSMutableDictionary, WBSAutomaticReaderActivationManager, WBSLockdownModePreferenceManager;

#import <Foundation/Foundation.h>

#import "_SFAppInfoOverlayPreferenceManager.h"
#import "_SFContentBlockersPreferenceManager.h"
#import "_SFPageZoomPreferenceManager.h"
#import "_SFRequestDesktopSitePreferenceManager.h"
#import "_SFGeolocationPermissionManager.h"
#import "_SFUserMediaPermissionController.h"

@interface _SFPerSitePreferencesVendor : NSObject {
    NSMutableDictionary *_preferenceToManager;
}


@property (readonly, nonatomic) _SFAppInfoOverlayPreferenceManager *appInfoOverlayPreferenceManager; // ivar: _appInfoOverlayPreferenceManager
@property (readonly, nonatomic) WBSAutomaticReaderActivationManager *automaticReaderActivationManager; // ivar: _automaticReaderPreferenceManager
@property (readonly, nonatomic) _SFContentBlockersPreferenceManager *contentBlockersPreferenceManager; // ivar: _contentBlockersPreferenceManager
@property (readonly, nonatomic) WBSLockdownModePreferenceManager *lockdownModePreferenceManager; // ivar: _lockdownModePreferenceManager
@property (readonly, nonatomic) _SFPageZoomPreferenceManager *pageZoomPreferenceManager; // ivar: _pageZoomPreferenceManager
@property (readonly, nonatomic) _SFRequestDesktopSitePreferenceManager *requestDesktopSitePreferenceManager; // ivar: _requestDesktopSitePreferenceManager
@property (readonly, nonatomic) _SFGeolocationPermissionManager *sharedGeolocationPermissionManager;
@property (readonly, nonatomic) _SFUserMediaPermissionController *sharedUserMediaPermissionController;


-(id)managerForPreference:(id)arg0 ;
-(void)dealloc;


@end


#endif