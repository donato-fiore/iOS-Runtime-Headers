// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXBACKBOARDSERVER_H
#define AXBACKBOARDSERVER_H

@class NSMutableArray;


#import "AXServer.h"

@interface AXBackBoardServer : AXServer {
    BOOL _overrideGestureRecognition;
    NSMutableArray *_eventListeners;
    NSMutableArray *_zoomAttributeListeners;
}


@property (nonatomic) BOOL inCheckerBoardMode;
@property (nonatomic) BOOL inPreboardMode;
@property (nonatomic) BOOL invertColorsEnabled;


+(id)server;
-(BOOL)_shouldDispatchLocally;
-(BOOL)adaptationEnabled;
-(BOOL)blueLightStatusEnabled;
-(BOOL)brightnessFiltersEnabled;
-(BOOL)isGuidedAccessActive;
-(BOOL)isGuidedAccessInWorkspace;
-(BOOL)isGuidedAccessSelfLockedToApp:(id)arg0 ;
-(BOOL)isGuidedAccessUnmanagedSelfLocked;
-(BOOL)isRestrictedForAAC;
-(BOOL)loadGAXBundleForUnmanagedASAM;
-(BOOL)supportsAccessibilityDisplayFilters;
-(BOOL)supportsAdaptation;
-(BOOL)tripleClickHomeButtonPress;
-(NSUInteger)currentGuidedAccessModeAndSessionApp:(*id)arg0 ;
-(NSUInteger)guidedAccessAvailability;
-(id)_serviceName;
-(id)_springboardParametersForGuidedAccessAvailability;
-(id)accessibilityPreferenceAsMobile:(id)arg0 ;
-(id)backboardServiceInstance;
-(id)guidedAccessEffectiveAppBundleIdentifier;
-(id)guidedAccessIgnoredRegions;
-(id)init;
-(id)performGuidedAccessAutomationCommand:(id)arg0 error:(*id)arg1 ;
-(int)accessibilityAssistiveTouchPID;
-(int)accessibilityFullKeyboardAccessDaemonPID;
-(int)accessibilityLiveCaptionsPID;
-(int)accessibilityUIServicePID;
-(int)hearingAidServerPID;
-(struct AXBColorFilterDescription )colorFilterFromLastUpdate;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 fromContextId:(unsigned int)arg1 ;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 fromContextId:(unsigned int)arg1 displayId:(unsigned int)arg2 ;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 toContextId:(unsigned int)arg1 ;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 toContextId:(unsigned int)arg1 displayId:(unsigned int)arg2 ;
-(struct CGRect )convertFrame:(struct CGRect )arg0 fromContextId:(unsigned int)arg1 ;
-(struct CGRect )convertFrame:(struct CGRect )arg0 fromContextId:(unsigned int)arg1 displayId:(unsigned int)arg2 ;
-(struct CGRect )convertFrame:(struct CGRect )arg0 fromContextId:(unsigned int)arg1 toContextId:(unsigned int)arg2 ;
-(struct CGRect )convertFrame:(struct CGRect )arg0 fromContextId:(unsigned int)arg1 toContextId:(unsigned int)arg2 displayId:(unsigned int)arg3 ;
-(struct CGRect )convertFrame:(struct CGRect )arg0 toContextId:(unsigned int)arg1 ;
-(struct CGRect )convertFrame:(struct CGRect )arg0 toContextId:(unsigned int)arg1 displayId:(unsigned int)arg2 ;
-(struct CGRect )zoomInitialFocusRectWithQueryingContext:(unsigned int)arg0 ;
-(unsigned int)contextIdForPosition:(struct CGPoint )arg0 ;
-(unsigned int)contextIdHostingContextId:(unsigned int)arg0 ;
-(void)_sendRequestGuidedAccessSessionMessage:(id)arg0 numberOfRetryAttempts:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)adjustSystemZoom:(int)arg0 ;
-(void)dealloc;
-(void)disableBrightnessFilters;
-(void)guidedAccessEffectiveAppBundleIdentifier:(id)arg0 ;
-(void)homeClickSwallowedForGuidedAccess;
-(void)jetsamThirdPartyApps;
-(void)postEvent:(id)arg0 afterNamedTap:(id)arg1 includeTaps:(id)arg2 ;
-(void)postEvent:(id)arg0 systemEvent:(BOOL)arg1 ;
-(void)registerAccessibilityUIServicePID:(int)arg0 ;
-(void)registerAssistiveTouchPID:(int)arg0 ;
-(void)registerFullKeyboardAccessDaemonPID:(int)arg0 ;
-(void)registerGestureConflictWithZoom:(id)arg0 ;
-(void)registerHearingAidServerPID:(int)arg0 ;
-(void)registerLiveCaptionsPID:(int)arg0 ;
-(void)registerSiriViewServicePID:(int)arg0 ;
-(void)requestGuidedAccessSessionEndWithCompletion:(id)arg0 ;
-(void)requestGuidedAccessSessionStartWithConfigurationDictionary:(id)arg0 completion:(id)arg1 ;
-(void)resetAccessibilityFeatures;
-(void)restoreCachedBrightnessFilters;
-(void)sessionIsLoginSessionWithResult:(id)arg0 ;
-(void)setAccessibilityPreferenceAsMobile:(id)arg0 value:(id)arg1 notification:(id)arg2 ;
-(void)setCapsLockLightOn:(BOOL)arg0 ;
-(void)setClarityUIAdminPasscode:(id)arg0 ;
-(void)setDeviceOrientation:(NSInteger)arg0 ;
-(void)setHearingAidControlIsVisible:(BOOL)arg0 ;
-(void)setIsSpeakScreenHighlightVisible:(BOOL)arg0 ;
-(void)setLockScreenDimTimerEnabled:(BOOL)arg0 ;
-(void)setSessionIsLoginSession:(BOOL)arg0 ;
-(void)setSwitchControlHasScreenSwitch:(BOOL)arg0 ;
-(void)setSwitchControlRendersDeviceUnusable:(BOOL)arg0 ;
-(void)setZoomInitialFocusRect:(struct CGRect )arg0 fromContext:(unsigned int)arg1 ;
-(void)toggleGuidedAccess;
-(void)userEventOccurred;
-(void)validateClarityUIAdminPasscode:(id)arg0 completion:(id)arg1 ;


@end


#endif