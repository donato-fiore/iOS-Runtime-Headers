// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WEBVIEWPRIVATE_H
#define WEBVIEWPRIVATE_H

@class NSURL;
@protocol WebFormDelegate, WebCaretChangeListener, WebGeolocationProvider, WebDeviceOrientationProvider, WebNotificationProvider;

#import <Foundation/Foundation.h>


@interface WebViewPrivate : NSObject {
    *Page page;
    RefPtr<WebViewGroup, WTF::RawPtrTraits<WebViewGroup>, WTF::DefaultRefDerefTraits<WebViewGroup>> group;
    id *UIDelegate;
    RetainPtr<id> UIDelegateForwarder;
    id *resourceProgressDelegate;
    id *downloadDelegate;
    id *policyDelegate;
    RetainPtr<id> policyDelegateForwarder;
    id *frameLoadDelegate;
    RetainPtr<id> frameLoadDelegateForwarder;
    id<WebFormDelegate> *formDelegate;
    id *editingDelegate;
    RetainPtr<id> editingDelegateForwarder;
    id *scriptDebugDelegate;
    id *historyDelegate;
    RetainPtr<id> resourceProgressDelegateForwarder;
    RetainPtr<id> formDelegateForwarder;
    RetainPtr<WebInspector> inspector;
    RetainPtr<WebNodeHighlight> currentNodeHighlight;
    RefPtr<WebCore::ValidationBubble, WTF::RawPtrTraits<WebCore::ValidationBubble>, WTF::DefaultRefDerefTraits<WebCore::ValidationBubble>> formValidationBubble;
    BOOL shouldMaintainInactiveSelection;
    BOOL allowsUndo;
    float zoomMultiplier;
    BOOL zoomsTextOnly;
    RetainPtr<NSString> applicationNameForUserAgent;
    String userAgent;
    BOOL userAgentOverridden;
    RetainPtr<WebPreferences> preferences;
    NSURL *userStyleSheetLocation;
    RetainPtr<WAKWindow> hostWindow;
    int programmaticFocusCount;
    WebResourceDelegateImplementationCache resourceLoadDelegateImplementations;
    WebFrameLoadDelegateImplementationCache frameLoadDelegateImplementations;
    WebScriptDebugDelegateImplementationCache scriptDebugDelegateImplementations;
    WebHistoryDelegateImplementationCache historyDelegateImplementations;
    BOOL closed;
    BOOL closing;
    NSUInteger deviceOrientation;
    BOOL shouldCloseWithWindow;
    BOOL mainFrameDocumentReady;
    BOOL drawsBackground;
    BOOL tabKeyCyclesThroughElementsChanged;
    BOOL becomingFirstResponder;
    BOOL becomingFirstResponderFromOutside;
    BOOL usesPageCache;
    RetainPtr<CGColor *> backgroundColor;
    RetainPtr<NSString> mediaStyle;
    BOOL hasSpellCheckerDocumentTag;
    NSInteger spellCheckerDocumentTag;
    BOOL isStopping;
    id *UIKitDelegate;
    RetainPtr<id> UIKitDelegateForwarder;
    id *WebMailDelegate;
    BOOL allowsMessaging;
    RetainPtr<NSMutableSet> _caretChangeListeners;
    id<WebCaretChangeListener> *_caretChangeListener;
    CGSize fixedLayoutSize;
    BOOL mainViewIsScrollingOrZooming;
    int didDrawTiles;
    Lock pendingFixedPositionLayoutRectMutex;
    CGRect pendingFixedPositionLayoutRect;
    RetainPtr<WebUITextIndicatorData> textIndicatorData;
    RetainPtr<WebUITextIndicatorData> dataOperationTextIndicator;
    CGRect dragPreviewFrameInRootViewCoordinates;
    NSUInteger dragSourceAction;
    RetainPtr<NSURL> draggedLinkURL;
    RetainPtr<NSString> draggedLinkTitle;
    HashMap<unsigned long, WTF::RetainPtr<id>, WTF::DefaultHash<unsigned long>, WTF::HashTraits<unsigned long>, WTF::HashTraits<WTF::RetainPtr<id>>, WTF::HashTableTraits> identifierMap;
    BOOL _keyboardUIModeAccessed;
    int _keyboardUIMode;
    BOOL shouldUpdateWhileOffscreen;
    BOOL needsOneShotDrawingSynchronization;
    BOOL postsAcceleratedCompositingNotifications;
    RefPtr<LayerFlushController, WTF::RawPtrTraits<LayerFlushController>, WTF::DefaultRefDerefTraits<LayerFlushController>> layerFlushController;
    CGSize lastLayoutSize;
    RetainPtr<WebVideoFullscreenController> fullscreenController;
    Vector<WTF::RetainPtr<WebVideoFullscreenController>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> fullscreenControllersExiting;
    RetainPtr<WebFullScreenController> newFullscreenController;
    RetainPtr<WebIndicateLayer> indicateLayer;
    id<WebGeolocationProvider> *_geolocationProvider;
    id<WebDeviceOrientationProvider> *m_deviceOrientationProvider;
    id<WebNotificationProvider> *_notificationProvider;
    BOOL interactiveFormValidationEnabled;
    int validationMessageTimerMagnification;
    float customDeviceScaleFactor;
    RetainPtr<WebFixedPositionContent> _fixedPositionContent;
    unique_ptr<WebCore::AlternativeTextUIController, std::default_delete<WebCore::AlternativeTextUIController>> m_alternativeTextUIController;
    RetainPtr<NSData> sourceApplicationAuditData;
    BOOL _didPerformFirstNavigation;
}




+(void)initialize;
-(id)init;
-(void)dealloc;


@end


#endif