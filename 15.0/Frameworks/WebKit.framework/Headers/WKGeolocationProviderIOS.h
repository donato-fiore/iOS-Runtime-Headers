// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WKGEOLOCATIONPROVIDERIOS_H
#define WKGEOLOCATIONPROVIDERIOS_H


#import <Foundation/Foundation.h>


@interface WKGeolocationProviderIOS : NSObject {
    RefPtr<WebKit::WebGeolocationManagerProxy, WTF::RawPtrTraits<WebKit::WebGeolocationManagerProxy>, WTF::DefaultRefDerefTraits<WebKit::WebGeolocationManagerProxy>> _geolocationManager;
    RetainPtr<id<_WKGeolocationCoreLocationProvider>> _coreLocationProvider;
    BOOL _isWebCoreGeolocationActive;
    RefPtr<WebKit::WebGeolocationPosition, WTF::RawPtrTraits<WebKit::WebGeolocationPosition>, WTF::DefaultRefDerefTraits<WebKit::WebGeolocationPosition>> _lastActivePosition;
    Deque<GeolocationRequestData, 0> _requestsWaitingForCoreLocationAuthorization;
}




-(id)init;
-(id)initWithProcessPool:(*void)arg0 ;
-(void)_setEnableHighAccuracy:(BOOL)arg0 ;
-(void)_startUpdating;
-(void)_stopUpdating;
-(void)decidePolicyForGeolocationRequestFromOrigin:(*void)arg0 completionHandler:(*void)arg1 view:(id)arg2 ;
-(void)errorOccurred:(id)arg0 ;
-(void)geolocationAuthorizationDenied;
-(void)geolocationAuthorizationGranted;
-(void)positionChanged:(id)arg0 ;
-(void)resetGeolocation;


@end


#endif