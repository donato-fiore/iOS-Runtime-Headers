// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WKWEBPAGEPREFERENCES_H
#define WKWEBPAGEPREFERENCES_H

@class NSString;
@protocol WKObject;

#import <Foundation/Foundation.h>


@interface WKWebpagePreferences : NSObject <WKObject>

 {
    ObjectStorage<API::WebsitePolicies> _websitePolicies;
    unique_ptr<WebKit::WebPagePreferencesLockdownModeObserver, std::default_delete<WebKit::WebPagePreferencesLockdownModeObserver>> _lockdownModeObserver;
}


@property (readonly) *Object _apiObject;
@property (nonatomic) BOOL allowsContentJavaScript;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isLockdownModeEnabled) BOOL lockdownModeEnabled;
@property (nonatomic) NSInteger preferredContentMode;
@property (readonly) Class superclass;


+(id)defaultPreferences;
-(BOOL)_allowPrivacyProxy;
-(BOOL)_allowSiteSpecificQuirksToOverrideCompatibilityMode;
-(BOOL)_captivePortalModeEnabled;
-(BOOL)_contentBlockersEnabled;
-(BOOL)_networkConnectionIntegrityEnabled;
-(NSInteger)_autoplayPolicy;
-(NSUInteger)_allowedAutoplayQuirks;
-(NSUInteger)_colorSchemePreference;
-(NSUInteger)_deviceOrientationAndMotionAccessPolicy;
-(NSUInteger)_modalContainerObservationPolicy;
-(NSUInteger)_mouseEventPolicy;
-(NSUInteger)_networkConnectionIntegrityPolicy;
-(NSUInteger)_popUpPolicy;
-(id)_activeContentRuleListActionPatterns;
-(id)_applicationNameForUserAgentWithModernCompatibility;
-(id)_customHeaderFields;
-(id)_customNavigatorPlatform;
-(id)_customUserAgent;
-(id)_customUserAgentAsSiteSpecificQuirks;
-(id)_userContentController;
-(id)_websiteDataStore;
-(id)init;
-(void)_setActiveContentRuleListActionPatterns:(id)arg0 ;
-(void)_setAllowPrivacyProxy:(BOOL)arg0 ;
-(void)_setAllowSiteSpecificQuirksToOverrideCompatibilityMode:(BOOL)arg0 ;
-(void)_setAllowedAutoplayQuirks:(NSUInteger)arg0 ;
-(void)_setApplicationNameForUserAgentWithModernCompatibility:(id)arg0 ;
-(void)_setAutoplayPolicy:(NSInteger)arg0 ;
-(void)_setCaptivePortalModeEnabled:(BOOL)arg0 ;
-(void)_setColorSchemePreference:(NSUInteger)arg0 ;
-(void)_setContentBlockersEnabled:(BOOL)arg0 ;
-(void)_setCustomHeaderFields:(id)arg0 ;
-(void)_setCustomNavigatorPlatform:(id)arg0 ;
-(void)_setCustomUserAgent:(id)arg0 ;
-(void)_setCustomUserAgentAsSiteSpecificQuirks:(id)arg0 ;
-(void)_setDeviceOrientationAndMotionAccessPolicy:(NSUInteger)arg0 ;
-(void)_setModalContainerObservationPolicy:(NSUInteger)arg0 ;
-(void)_setMouseEventPolicy:(NSUInteger)arg0 ;
-(void)_setNetworkConnectionIntegrityEnabled:(BOOL)arg0 ;
-(void)_setNetworkConnectionIntegrityPolicy:(NSUInteger)arg0 ;
-(void)_setPopUpPolicy:(NSUInteger)arg0 ;
-(void)_setUserContentController:(id)arg0 ;
-(void)_setWebsiteDataStore:(id)arg0 ;
-(void)dealloc;


@end


#endif