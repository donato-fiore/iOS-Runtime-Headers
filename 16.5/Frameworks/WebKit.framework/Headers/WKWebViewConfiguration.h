// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WKWEBVIEWCONFIGURATION_H
#define WKWEBVIEWCONFIGURATION_H

@class NSArray, NSSet, NSString;
@protocol NSSecureCoding, NSCopying, _UIClickInteractionDriving;

#import <Foundation/Foundation.h>

#import "WKWebView.h"
#import "_WKApplicationManifest.h"
#import "WKWebViewContentProviderRegistry.h"
#import "_WKWebExtensionController.h"
#import "_WKVisitedLinkStore.h"
#import "WKWebsiteDataStore.h"
#import "WKWebpagePreferences.h"
#import "WKPreferences.h"
#import "WKProcessPool.h"
#import "WKUserContentController.h"

@interface WKWebViewConfiguration : NSObject <NSSecureCoding, NSCopying>

 {
    RefPtr<API::PageConfiguration, WTF::RawPtrTraits<API::PageConfiguration>, WTF::DefaultRefDerefTraits<API::PageConfiguration>> _pageConfiguration;
    LazyInitialized<WTF::RetainPtr<WKProcessPool>> _processPool;
    LazyInitialized<WTF::RetainPtr<WKPreferences>> _preferences;
    LazyInitialized<WTF::RetainPtr<WKUserContentController>> _userContentController;
    RetainPtr<_WKWebExtensionController> _webExtensionController;
    WeakObjCPtr<_WKWebExtensionController> _weakWebExtensionController;
    LazyInitialized<WTF::RetainPtr<_WKVisitedLinkStore>> _visitedLinkStore;
    LazyInitialized<WTF::RetainPtr<WKWebsiteDataStore>> _websiteDataStore;
    LazyInitialized<WTF::RetainPtr<WKWebpagePreferences>> _defaultWebpagePreferences;
    WeakObjCPtr<WKWebView> _relatedWebView;
    WeakObjCPtr<WKWebView> _webViewToCloneSessionStorageFrom;
    WeakObjCPtr<WKWebView> _alternateWebViewForNavigationGestures;
    RetainPtr<NSString> _groupIdentifier;
    optional<WTF::RetainPtr<NSString>> _applicationNameForUserAgent;
    CGFloat _incrementalRenderingSuppressionTimeout;
    BOOL _respectsImageOrientation;
    BOOL _allowsJavaScriptMarkup;
    BOOL _convertsPositionStyleOnCopy;
    BOOL _allowsMetaRefresh;
    BOOL _allowUniversalAccessFromFileURLs;
    BOOL _allowTopNavigationToDataURLs;
    LazyInitialized<WTF::RetainPtr<WKWebViewContentProviderRegistry>> _contentProviderRegistry;
    BOOL _inlineMediaPlaybackRequiresPlaysInlineAttribute;
    BOOL _allowsInlineMediaPlaybackAfterFullscreen;
    NSUInteger _dragLiftDelay;
    BOOL _textInteractionGesturesEnabled;
    BOOL _longPressActionsEnabled;
    BOOL _systemPreviewEnabled;
    BOOL _shouldDecidePolicyBeforeLoadingQuickLookPreview;
    BOOL _invisibleAutoplayNotPermitted;
    BOOL _mediaDataLoadsAutomatically;
    BOOL _attachmentElementEnabled;
    Class _attachmentFileWrapperClass;
    BOOL _mainContentUserGestureOverrideEnabled;
    BOOL _waitsForPaintAfterViewDidMoveToWindow;
    BOOL _controlledByAutomation;
    BOOL _applePayEnabled;
    BOOL _needsStorageAccessFromFileURLsQuirk;
    BOOL _legacyEncryptedMediaAPIEnabled;
    BOOL _allowMediaContentTypesRequiringHardwareSupportAsFallback;
    BOOL _colorFilterEnabled;
    BOOL _incompleteImageBorderEnabled;
    BOOL _shouldDeferAsynchronousScriptsUntilAfterDocumentLoad;
    BOOL _drawsBackground;
    BOOL _undoManagerAPIEnabled;
    BOOL _appHighlightsEnabled;
    CGFloat _sampledPageTopColorMaxDifference;
    CGFloat _sampledPageTopColorMinHeight;
    RetainPtr<NSString> _mediaContentTypesRequiringHardwareSupport;
    RetainPtr<NSArray<NSString *>> _additionalSupportedImageTypes;
}


@property (copy, nonatomic, setter=_setAdditionalSupportedImageTypes:) NSArray *_additionalSupportedImageTypes;
@property (nonatomic, setter=_setAllowMediaContentTypesRequiringHardwareSupportAsFallback:) BOOL _allowMediaContentTypesRequiringHardwareSupportAsFallback;
@property (nonatomic, setter=_setAllowTopNavigationToDataURLs:) BOOL _allowTopNavigationToDataURLs;
@property (nonatomic, setter=_setAllowUniversalAccessFromFileURLs:) BOOL _allowUniversalAccessFromFileURLs;
@property (copy, nonatomic, setter=_setAllowedNetworkHosts:) NSSet *_allowedNetworkHosts;
@property (nonatomic, setter=_setAllowsInlineMediaPlaybackAfterFullscreen:) BOOL _allowsInlineMediaPlaybackAfterFullscreen;
@property (nonatomic, setter=_setAllowsJavaScriptMarkup:) BOOL _allowsJavaScriptMarkup;
@property (nonatomic, setter=_setAllowsMetaRefresh:) BOOL _allowsMetaRefresh;
@property (weak, nonatomic, setter=_setAlternateWebViewForNavigationGestures:) WKWebView *_alternateWebViewForNavigationGestures;
@property (nonatomic, setter=_setAlwaysRunsAtForegroundPriority:) BOOL _alwaysRunsAtForegroundPriority;
@property (nonatomic, setter=_setAppHighlightsEnabled:) BOOL _appHighlightsEnabled;
@property (nonatomic, setter=_setAppInitiatedOverrideValueForTesting:) NSUInteger _appInitiatedOverrideValueForTesting;
@property (nonatomic, setter=_setApplePayEnabled:) BOOL _applePayEnabled;
@property (nonatomic, setter=_setApplicationManifest:) _WKApplicationManifest *_applicationManifest;
@property (readonly, nonatomic) NSString *_applicationNameForDesktopUserAgent;
@property (nonatomic, setter=_setAttachmentElementEnabled:) BOOL _attachmentElementEnabled;
@property (nonatomic, setter=_setAttachmentFileWrapperClass:) Class _attachmentFileWrapperClass;
@property (nonatomic, setter=_setAttributedBundleIdentifier:) NSString *_attributedBundleIdentifier;
@property (nonatomic, setter=_setCanShowWhileLocked:) BOOL _canShowWhileLocked;
@property (nonatomic, setter=_setClickInteractionDriverForTesting:) NSObject<_UIClickInteractionDriving> *_clickInteractionDriverForTesting;
@property (nonatomic, setter=_setClientNavigationsRunAtForegroundPriority:) BOOL _clientNavigationsRunAtForegroundPriority;
@property (nonatomic, setter=_setColorFilterEnabled:) BOOL _colorFilterEnabled;
@property (nonatomic, setter=_setContentProviderRegistry:) WKWebViewContentProviderRegistry *_contentProviderRegistry;
@property (nonatomic, setter=_setContentSecurityPolicyModeForExtension:) NSUInteger _contentSecurityPolicyModeForExtension;
@property (nonatomic, getter=_isControlledByAutomation, setter=_setControlledByAutomation:) BOOL _controlledByAutomation;
@property (nonatomic, setter=_setConvertsPositionStyleOnCopy:) BOOL _convertsPositionStyleOnCopy;
@property (copy, nonatomic, setter=_setCORSDisablingPatterns:) NSArray *_corsDisablingPatterns;
@property (nonatomic, setter=_setCrossOriginAccessControlCheckEnabled:) BOOL _crossOriginAccessControlCheckEnabled;
@property (nonatomic, setter=_setDeferrableUserScriptsShouldWaitUntilNotification:) BOOL _deferrableUserScriptsShouldWaitUntilNotification;
@property (nonatomic, setter=_setDragLiftDelay:) NSUInteger _dragLiftDelay;
@property (nonatomic, setter=_setDrawsBackground:) BOOL _drawsBackground;
@property (copy, nonatomic, setter=_setGroupIdentifier:) NSString *_groupIdentifier;
@property (nonatomic, setter=_setIgnoresAppBoundDomains:) BOOL _ignoresAppBoundDomains;
@property (nonatomic, setter=_setIncompleteImageBorderEnabled:) BOOL _incompleteImageBorderEnabled;
@property (nonatomic, setter=_setIncrementalRenderingSuppressionTimeout:) CGFloat _incrementalRenderingSuppressionTimeout;
@property (nonatomic, setter=_setInitialCapitalizationEnabled:) BOOL _initialCapitalizationEnabled;
@property (nonatomic, setter=_setInlineMediaPlaybackRequiresPlaysInlineAttribute:) BOOL _inlineMediaPlaybackRequiresPlaysInlineAttribute;
@property (nonatomic, setter=_setInvisibleAutoplayNotPermitted:) BOOL _invisibleAutoplayNotPermitted;
@property (nonatomic, setter=_setLegacyEncryptedMediaAPIEnabled:) BOOL _legacyEncryptedMediaAPIEnabled;
@property (nonatomic, setter=_setLoadsFromNetwork:) BOOL _loadsFromNetwork;
@property (nonatomic, setter=_setLoadsSubresources:) BOOL _loadsSubresources;
@property (nonatomic, setter=_setLongPressActionsEnabled:) BOOL _longPressActionsEnabled;
@property (nonatomic, setter=_setMainContentUserGestureOverrideEnabled:) BOOL _mainContentUserGestureOverrideEnabled;
@property (copy, nonatomic, setter=_setMaskedURLSchemes:) NSSet *_maskedURLSchemes;
@property (nonatomic, setter=_setMediaCaptureEnabled:) BOOL _mediaCaptureEnabled;
@property (nonatomic, setter=_setMediaContentTypesRequiringHardwareSupport:) NSString *_mediaContentTypesRequiringHardwareSupport;
@property (nonatomic, setter=_setMediaDataLoadsAutomatically:) BOOL _mediaDataLoadsAutomatically;
@property (nonatomic, setter=_setNeedsStorageAccessFromFileURLsQuirk:) BOOL _needsStorageAccessFromFileURLsQuirk;
@property (nonatomic, setter=_setOverrideContentSecurityPolicy:) NSString *_overrideContentSecurityPolicy;
@property (nonatomic, setter=_setPrintsBackgrounds:) BOOL _printsBackgrounds;
@property (nonatomic, setter=_setProcessDisplayName:) NSString *_processDisplayName;
@property (weak, nonatomic, setter=_setRelatedWebView:) WKWebView *_relatedWebView;
@property (nonatomic, setter=_setRequiresUserActionForAudioPlayback:) BOOL _requiresUserActionForAudioPlayback;
@property (nonatomic, setter=_setRequiresUserActionForVideoPlayback:) BOOL _requiresUserActionForVideoPlayback;
@property (nonatomic, setter=_setRespectsImageOrientation:) BOOL _respectsImageOrientation;
@property (nonatomic, setter=_setSampledPageTopColorMaxDifference:) CGFloat _sampledPageTopColorMaxDifference;
@property (nonatomic, setter=_setSampledPageTopColorMinHeight:) CGFloat _sampledPageTopColorMinHeight;
@property (nonatomic, setter=_setShouldDecidePolicyBeforeLoadingQuickLookPreview:) BOOL _shouldDecidePolicyBeforeLoadingQuickLookPreview;
@property (nonatomic, setter=_setShouldDeferAsynchronousScriptsUntilAfterDocumentLoad:) BOOL _shouldDeferAsynchronousScriptsUntilAfterDocumentLoad;
@property (nonatomic, setter=_setShouldRelaxThirdPartyCookieBlocking:) BOOL _shouldRelaxThirdPartyCookieBlocking;
@property (readonly, nonatomic) _WKWebExtensionController *_strongWebExtensionController;
@property (nonatomic, setter=_setSystemPreviewEnabled:) BOOL _systemPreviewEnabled;
@property (nonatomic, setter=_setTextInteractionGesturesEnabled:) BOOL _textInteractionGesturesEnabled;
@property (nonatomic, setter=_setUndoManagerAPIEnabled:) BOOL _undoManagerAPIEnabled;
@property (retain, nonatomic, setter=_setVisitedLinkStore:) _WKVisitedLinkStore *_visitedLinkStore;
@property (nonatomic, setter=_setWaitsForPaintAfterViewDidMoveToWindow:) BOOL _waitsForPaintAfterViewDidMoveToWindow;
@property (weak, nonatomic, setter=_setWeakWebExtensionController:) _WKWebExtensionController *_weakWebExtensionController;
@property (retain, nonatomic, setter=_setWebExtensionController:) _WKWebExtensionController *_webExtensionController;
@property (weak, nonatomic, setter=_setWebViewToCloneSessionStorageFrom:) WKWebView *_webViewToCloneSessionStorageFrom;
@property (readonly, nonatomic) WKWebsiteDataStore *_websiteDataStoreIfExists;
@property (nonatomic) BOOL allowsAirPlayForMediaPlayback; // ivar: _allowsAirPlayForMediaPlayback
@property (nonatomic) BOOL allowsInlineMediaPlayback; // ivar: _allowsInlineMediaPlayback
@property (nonatomic) BOOL allowsPictureInPictureMediaPlayback; // ivar: _allowsPictureInPictureMediaPlayback
@property (copy, nonatomic) NSString *applicationNameForUserAgent;
@property (nonatomic) NSUInteger dataDetectorTypes; // ivar: _dataDetectorTypes
@property (copy, nonatomic) WKWebpagePreferences *defaultWebpagePreferences;
@property (nonatomic) BOOL ignoresViewportScaleLimits; // ivar: _ignoresViewportScaleLimits
@property (nonatomic) BOOL limitsNavigationsToAppBoundDomains;
@property (nonatomic) BOOL mediaPlaybackAllowsAirPlay;
@property (nonatomic) BOOL mediaPlaybackRequiresUserAction;
@property (nonatomic) NSUInteger mediaTypesRequiringUserActionForPlayback; // ivar: _mediaTypesRequiringUserActionForPlayback
@property (retain, nonatomic) WKPreferences *preferences;
@property (retain, nonatomic) WKProcessPool *processPool;
@property (nonatomic) BOOL requiresUserActionForMediaPlayback;
@property (nonatomic) NSInteger selectionGranularity; // ivar: _selectionGranularity
@property (nonatomic) BOOL suppressesIncrementalRendering; // ivar: _suppressesIncrementalRendering
@property (nonatomic) BOOL upgradeKnownHostsToHTTPS;
@property (retain, nonatomic) WKUserContentController *userContentController;
@property (retain, nonatomic) WKWebsiteDataStore *websiteDataStore;


+(BOOL)supportsSecureCoding;
-(id)_visitedLinkProvider;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)urlSchemeHandlerForURLScheme:(id)arg0 ;
-(struct Ref<API::PageConfiguration, WTF::RawPtrTraits<API::PageConfiguration>> )copyPageConfiguration;
-(void)_setVisitedLinkProvider:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setURLSchemeHandler:(id)arg0 forURLScheme:(id)arg1 ;


@end


#endif