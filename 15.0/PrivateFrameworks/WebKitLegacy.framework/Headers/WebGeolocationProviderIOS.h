// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WEBGEOLOCATIONPROVIDERIOS_H
#define WEBGEOLOCATIONPROVIDERIOS_H

@class NSString;
@protocol WebGeolocationProvider;

#import <Foundation/Foundation.h>


@interface WebGeolocationProviderIOS : NSObject <WebGeolocationProvider>

 {
    RetainPtr<WebGeolocationCoreLocationProvider> _coreLocationProvider;
    RetainPtr<_WebCoreLocationUpdateThreadingProxy> _coreLocationUpdateListenerProxy;
    BOOL _enableHighAccuracy;
    BOOL _isSuspended;
    BOOL _shouldResetOnResume;
    HashMap<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener>>, WTF::DefaultHash<WTF::RetainPtr<WebView>>, WTF::HashTraits<WTF::RetainPtr<WebView>>, WTF::HashTraits<WTF::RetainPtr<id<WebGeolocationProviderInitializationListener>>>, WTF::HashTableTraits> _webViewsWaitingForCoreLocationAuthorization;
    HashSet<WebView *, WTF::DefaultHash<WebView *>, WTF::HashTraits<WebView *>, WTF::HashTableTraits> _pendingInitialPositionWebView;
    HashSet<WebView *, WTF::DefaultHash<WebView *>, WTF::HashTraits<WebView *>, WTF::HashTableTraits> _registeredWebViews;
    HashSet<WebView *, WTF::DefaultHash<WebView *>, WTF::HashTraits<WebView *>, WTF::HashTableTraits> _trackedWebViews;
    RetainPtr<NSTimer> _sendLastPositionAsynchronouslyTimer;
    RetainPtr<WebGeolocationPosition> _lastPosition;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedGeolocationProvider;
-(id)lastPosition;
-(void)_handlePendingInitialPosition:(id)arg0 ;
-(void)dealloc;
-(void)errorOccurred:(id)arg0 ;
-(void)geolocationAuthorizationDenied;
-(void)geolocationAuthorizationGranted;
-(void)initializeGeolocationForWebView:(id)arg0 listener:(id)arg1 ;
-(void)positionChanged:(id)arg0 ;
-(void)registerWebView:(id)arg0 ;
-(void)resetGeolocation;
-(void)resume;
-(void)setEnableHighAccuracy:(BOOL)arg0 ;
-(void)stopTrackingWebView:(id)arg0 ;
-(void)suspend;
-(void)unregisterWebView:(id)arg0 ;


@end


#endif