// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WKPREFERENCES_H
#define WKPREFERENCES_H

@class NSString;
@protocol WKObject, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WKPreferences : NSObject <WKObject, NSCopying, NSSecureCoding>

 {
    ObjectStorage<WebKit::WebPreferences> _preferences;
}


@property (nonatomic, setter=_setAcceleratedCompositingEnabled:) BOOL _acceleratedCompositingEnabled;
@property (nonatomic, setter=_setAcceleratedDrawingEnabled:) BOOL _acceleratedDrawingEnabled;
@property (nonatomic, setter=_setAccessibilityIsolatedTreeEnabled:) BOOL _accessibilityIsolatedTreeEnabled;
@property (nonatomic, setter=_setAllowFileAccessFromFileURLs:) BOOL _allowFileAccessFromFileURLs;
@property (nonatomic, setter=_setAllowsPictureInPictureMediaPlayback:) BOOL _allowsPictureInPictureMediaPlayback;
@property (nonatomic, setter=_setAnimatedImageAsyncDecodingEnabled:) BOOL _animatedImageAsyncDecodingEnabled;
@property (readonly) *Object _apiObject;
@property (nonatomic, setter=_setApplePayCapabilityDisclosureAllowed:) BOOL _applePayCapabilityDisclosureAllowed;
@property (nonatomic, setter=_setAVFoundationEnabled:) BOOL _avFoundationEnabled;
@property (nonatomic, setter=_setColorFilterEnabled:) BOOL _colorFilterEnabled;
@property (nonatomic, setter=_setCompositingBordersVisible:) BOOL _compositingBordersVisible;
@property (nonatomic, setter=_setCompositingRepaintCountersVisible:) BOOL _compositingRepaintCountersVisible;
@property (nonatomic, setter=_setContentChangeObserverEnabled:) BOOL _contentChangeObserverEnabled;
@property (nonatomic, setter=_setDefaultFixedPitchFontSize:) NSUInteger _defaultFixedPitchFontSize;
@property (nonatomic, setter=_setDefaultFontSize:) NSUInteger _defaultFontSize;
@property (nonatomic, setter=_setDeveloperExtrasEnabled:) BOOL _developerExtrasEnabled;
@property (nonatomic, setter=_setDeviceOrientationEventEnabled:) BOOL _deviceOrientationEventEnabled;
@property (nonatomic, setter=_setDiagnosticLoggingEnabled:) BOOL _diagnosticLoggingEnabled;
@property (nonatomic, setter=_setDisplayListDrawingEnabled:) BOOL _displayListDrawingEnabled;
@property (nonatomic, setter=_setDOMPasteAllowed:) BOOL _domPasteAllowed;
@property (nonatomic, setter=_setEditableLinkBehavior:) NSInteger _editableLinkBehavior;
@property (nonatomic, setter=_setEnumeratingAllNetworkInterfacesEnabled:) BOOL _enumeratingAllNetworkInterfacesEnabled;
@property (nonatomic, getter=_isExtensibleSSOEnabled, setter=_setExtensibleSSOEnabled:) BOOL _extensibleSSOEnabled;
@property (copy, nonatomic, setter=_setFixedPitchFontFamily:) NSString *_fixedPitchFontFamily;
@property (nonatomic, setter=_setFullScreenEnabled:) BOOL _fullScreenEnabled;
@property (nonatomic, setter=_setHiddenPageDOMTimerThrottlingAutoIncreases:) BOOL _hiddenPageDOMTimerThrottlingAutoIncreases;
@property (nonatomic, setter=_setHiddenPageDOMTimerThrottlingEnabled:) BOOL _hiddenPageDOMTimerThrottlingEnabled;
@property (nonatomic, setter=_setICECandidateFilteringEnabled:) BOOL _iceCandidateFilteringEnabled;
@property (nonatomic, setter=_setInactiveMediaCaptureSteamRepromptIntervalInMinutes:) CGFloat _inactiveMediaCaptureSteamRepromptIntervalInMinutes;
@property (nonatomic, setter=_setInterruptAudioOnPageVisibilityChangeEnabled:) BOOL _interruptAudioOnPageVisibilityChangeEnabled;
@property (nonatomic, setter=_setItpDebugModeEnabled:) BOOL _itpDebugModeEnabled;
@property (nonatomic, setter=_setJavaScriptCanAccessClipboard:) BOOL _javaScriptCanAccessClipboard;
@property (nonatomic, setter=_setJavaScriptRuntimeFlags:) NSUInteger _javaScriptRuntimeFlags;
@property (nonatomic, setter=_setLargeImageAsyncDecodingEnabled:) BOOL _largeImageAsyncDecodingEnabled;
@property (nonatomic, setter=_setLegacyLineLayoutVisualCoverageEnabled:) BOOL _legacyLineLayoutVisualCoverageEnabled;
@property (nonatomic, setter=_setLoadsImagesAutomatically:) BOOL _loadsImagesAutomatically;
@property (nonatomic, setter=_setLogsPageMessagesToSystemConsoleEnabled:) BOOL _logsPageMessagesToSystemConsoleEnabled;
@property (nonatomic, setter=_setLowPowerVideoAudioBufferSizeEnabled:) BOOL _lowPowerVideoAudioBufferSizeEnabled;
@property (nonatomic, setter=_setMediaCaptureRequiresSecureConnection:) BOOL _mediaCaptureRequiresSecureConnection;
@property (nonatomic, setter=_setMediaDevicesEnabled:) BOOL _mediaDevicesEnabled;
@property (nonatomic, setter=_setMediaSessionEnabled:) BOOL _mediaSessionEnabled;
@property (nonatomic, setter=_setMediaSourceEnabled:) BOOL _mediaSourceEnabled;
@property (nonatomic, setter=_setMockCaptureDevicesEnabled:) BOOL _mockCaptureDevicesEnabled;
@property (nonatomic, setter=_setMockCaptureDevicesPromptEnabled:) BOOL _mockCaptureDevicesPromptEnabled;
@property (nonatomic, setter=_setNeedsInAppBrowserPrivacyQuirks:) BOOL _needsInAppBrowserPrivacyQuirks;
@property (nonatomic, setter=_setNeedsSiteSpecificQuirks:) BOOL _needsSiteSpecificQuirks;
@property (nonatomic, setter=_setOfflineApplicationCacheIsEnabled:) BOOL _offlineApplicationCacheIsEnabled;
@property (nonatomic, setter=_setPageVisibilityBasedProcessSuppressionEnabled:) BOOL _pageVisibilityBasedProcessSuppressionEnabled;
@property (nonatomic, setter=_setPeerConnectionEnabled:) BOOL _peerConnectionEnabled;
@property (nonatomic, setter=_setPitchCorrectionAlgorithm:) NSInteger _pitchCorrectionAlgorithm;
@property (nonatomic, setter=_setPrivateClickMeasurementEnabled:) BOOL _privateClickMeasurementEnabled;
@property (nonatomic, setter=_setPunchOutWhiteBackgroundsInDarkMode:) BOOL _punchOutWhiteBackgroundsInDarkMode;
@property (nonatomic, setter=_setRemotePlaybackEnabled:) BOOL _remotePlaybackEnabled;
@property (nonatomic, setter=_setRequestAnimationFrameEnabled:) BOOL _requestAnimationFrameEnabled;
@property (nonatomic, setter=_setRequiresPageVisibilityToPlayAudio:) BOOL _requiresPageVisibilityToPlayAudio;
@property (nonatomic, setter=_setResourceUsageOverlayVisible:) BOOL _resourceUsageOverlayVisible;
@property (nonatomic, getter=_isSafeBrowsingEnabled, setter=_setSafeBrowsingEnabled:) BOOL _safeBrowsingEnabled;
@property (nonatomic, setter=_setScreenCaptureEnabled:) BOOL _screenCaptureEnabled;
@property (nonatomic, setter=_setSecureContextChecksEnabled:) BOOL _secureContextChecksEnabled;
@property (nonatomic, setter=_setServiceWorkerEntitlementDisabledForTesting:) BOOL _serviceWorkerEntitlementDisabledForTesting;
@property (nonatomic, setter=_setShouldAllowDesignSystemUIFonts:) BOOL _shouldAllowDesignSystemUIFonts;
@property (nonatomic, setter=_setShouldAllowUserInstalledFonts:) BOOL _shouldAllowUserInstalledFonts;
@property (nonatomic, setter=_setShouldEnableTextAutosizingBoost:) BOOL _shouldEnableTextAutosizingBoost;
@property (nonatomic, setter=_setShouldIgnoreMetaViewport:) BOOL _shouldIgnoreMetaViewport;
@property (nonatomic, setter=_setShouldSuppressKeyboardInputDuringProvisionalNavigation:) BOOL _shouldSuppressKeyboardInputDuringProvisionalNavigation;
@property (nonatomic, setter=_setSimpleLineLayoutEnabled:) BOOL _simpleLineLayoutEnabled;
@property (nonatomic, setter=_setSpeechRecognitionEnabled:) BOOL _speechRecognitionEnabled;
@property (nonatomic, getter=_isStandalone, setter=_setStandalone:) BOOL _standalone;
@property (nonatomic, setter=_setStorageBlockingPolicy:) NSInteger _storageBlockingPolicy;
@property (nonatomic, setter=_setSubpixelAntialiasedLayerTextEnabled:) BOOL _subpixelAntialiasedLayerTextEnabled;
@property (nonatomic, setter=_setTelephoneNumberDetectionIsEnabled:) BOOL _telephoneNumberDetectionIsEnabled;
@property (nonatomic, setter=_setTextAutosizingEnabled:) BOOL _textAutosizingEnabled;
@property (nonatomic, setter=_setTiledScrollingIndicatorVisible:) BOOL _tiledScrollingIndicatorVisible;
@property (nonatomic, setter=_setVideoQualityIncludesDisplayCompositingEnabled:) BOOL _videoQualityIncludesDisplayCompositingEnabled;
@property (nonatomic, setter=_setVisibleDebugOverlayRegions:) NSUInteger _visibleDebugOverlayRegions;
@property (nonatomic, setter=_setWebAudioEnabled:) BOOL _webAudioEnabled;
@property (nonatomic, setter=_setWebRTCLegacyAPIEnabled:) BOOL _webRTCLegacyAPIEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isFraudulentWebsiteWarningEnabled) BOOL fraudulentWebsiteWarningEnabled;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL javaScriptCanOpenWindowsAutomatically;
@property (nonatomic) BOOL javaScriptEnabled;
@property (nonatomic) CGFloat minimumFontSize;
@property (readonly) Class superclass;
@property (nonatomic, getter=isTextInteractionEnabled) BOOL textInteractionEnabled;


+(BOOL)supportsSecureCoding;
+(id)_experimentalFeatures;
+(id)_internalDebugFeatures;
-(BOOL)_isEnabledForExperimentalFeature:(id)arg0 ;
-(BOOL)_isEnabledForFeature:(id)arg0 ;
-(BOOL)_isEnabledForInternalDebugFeature:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_setEnabled:(BOOL)arg0 forExperimentalFeature:(id)arg1 ;
-(void)_setEnabled:(BOOL)arg0 forFeature:(id)arg1 ;
-(void)_setEnabled:(BOOL)arg0 forInternalDebugFeature:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif