// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFRELOADOPTIONSCONTROLLER_H
#define _SFRELOADOPTIONSCONTROLLER_H

@class NSDictionary, NSNumber, NSMutableDictionary, NSMutableSet, WKWebView, NSString;
@protocol _SFRequestDesktopSitePerSitePreferenceObserver;

#import <Foundation/Foundation.h>

#import "_SFRequestDesktopSitePreferenceManager.h"
#import "_SFInjectedJavaScriptController.h"

@interface _SFReloadOptionsController : NSObject <_SFRequestDesktopSitePerSitePreferenceObserver>

 {
    _SFRequestDesktopSitePreferenceManager *_perSitePreferenceManager;
    NSDictionary *_perSitePreferenceValues;
    NSNumber *_requestDesktopSiteDefaultValue;
    NSMutableDictionary *_domainToUserAgentPolicyMap;
    NSMutableSet *_domainsOverridenAsMobile;
    WKWebView *_webView;
}


@property (readonly, nonatomic) _SFInjectedJavaScriptController *activityJSController; // ivar: _activityJSController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger effectiveContentMode; // ivar: _effectiveContentMode
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL loadedUsingDesktopUserAgent;
@property (readonly) Class superclass;
@property (nonatomic) BOOL tryUsingMobileIfPossible; // ivar: _tryUsingMobileIfPossible


-(BOOL)_updateSettingSource:(NSUInteger)arg0 domain:(id)arg1 ;
-(id)customNavigatorPlatformForSetting:(NSInteger)arg0 ;
-(id)customUserAgentForSetting:(NSInteger)arg0 ;
-(id)init;
-(id)initWithWebView:(id)arg0 activityJSController:(id)arg1 perSitePreferenceManager:(id)arg2 ;
-(void)_loadPerSitePreferences;
-(void)_overrideSettingIfNeeded:(NSInteger)arg0 source:(NSUInteger)arg1 domain:(id)arg2 completion:(id)arg3 ;
-(void)customUserAgentSettingForMainFrameURL:(id)arg0 withTimeout:(CGFloat)arg1 completionHandler:(id)arg2 ;
-(void)didMarkURLAsNeedingDesktopUserAgent:(id)arg0 ;
-(void)didMarkURLAsNeedingStandardUserAgent:(id)arg0 ;
-(void)didSetRequestDesktopSiteDefaultValue:(NSInteger)arg0 ;
-(void)didSetRequestDesktopSitePerSitePreferencesValues:(id)arg0 ;
-(void)didUpdateRequestDesktopSiteDefaultValue:(NSInteger)arg0 ;
-(void)didUpdateRequestDesktopSitePerSitePreference:(id)arg0 ;
-(void)invalidate;
-(void)logCompletedPageloadToDifferentialPrivacy:(id)arg0 ;
-(void)requestDesktopSite;
-(void)requestDesktopSiteWithURL:(id)arg0 ;
-(void)requestStandardSite;


@end


#endif