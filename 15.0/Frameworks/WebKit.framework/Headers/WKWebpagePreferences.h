// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WKWEBPAGEPREFERENCES_H
#define WKWEBPAGEPREFERENCES_H

@class NSString;
@protocol WKObject;

#import <Foundation/Foundation.h>


@interface WKWebpagePreferences : NSObject <WKObject>

 {
    ObjectStorage<API::WebsitePolicies> _websitePolicies;
}


@property (readonly) *Object _apiObject;
@property (nonatomic) BOOL allowsContentJavaScript;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger preferredContentMode;
@property (readonly) Class superclass;


+(id)defaultPreferences;
-(BOOL)_allowSiteSpecificQuirksToOverrideCompatibilityMode;
-(BOOL)_contentBlockersEnabled;
-(NSInteger)_autoplayPolicy;
-(NSUInteger)_allowedAutoplayQuirks;
-(NSUInteger)_deviceOrientationAndMotionAccessPolicy;
-(NSUInteger)_mouseEventPolicy;
-(NSUInteger)_popUpPolicy;
-(id)_applicationNameForUserAgentWithModernCompatibility;
-(id)_customHeaderFields;
-(id)_customNavigatorPlatform;
-(id)_customUserAgent;
-(id)_customUserAgentAsSiteSpecificQuirks;
-(id)_userContentController;
-(id)_websiteDataStore;
-(id)init;
-(void)_setAllowSiteSpecificQuirksToOverrideCompatibilityMode:(BOOL)arg0 ;
-(void)_setAllowedAutoplayQuirks:(NSUInteger)arg0 ;
-(void)_setApplicationNameForUserAgentWithModernCompatibility:(id)arg0 ;
-(void)_setAutoplayPolicy:(NSInteger)arg0 ;
-(void)_setContentBlockersEnabled:(BOOL)arg0 ;
-(void)_setCustomHeaderFields:(id)arg0 ;
-(void)_setCustomNavigatorPlatform:(id)arg0 ;
-(void)_setCustomUserAgent:(id)arg0 ;
-(void)_setCustomUserAgentAsSiteSpecificQuirks:(id)arg0 ;
-(void)_setDeviceOrientationAndMotionAccessPolicy:(NSUInteger)arg0 ;
-(void)_setMouseEventPolicy:(NSUInteger)arg0 ;
-(void)_setPopUpPolicy:(NSUInteger)arg0 ;
-(void)_setUserContentController:(id)arg0 ;
-(void)_setWebsiteDataStore:(id)arg0 ;
-(void)dealloc;


@end


#endif