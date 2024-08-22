// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WKLEGACYCORELOCATIONPROVIDER_H
#define WKLEGACYCORELOCATIONPROVIDER_H

@class NSString;
@protocol _WKGeolocationCoreLocationProvider, WebGeolocationCoreLocationUpdateListener, _WKGeolocationCoreLocationListener;

#import <Foundation/Foundation.h>


@interface WKLegacyCoreLocationProvider : NSObject <_WKGeolocationCoreLocationProvider, WebGeolocationCoreLocationUpdateListener>

 {
    id<_WKGeolocationCoreLocationListener> *_listener;
    RetainPtr<WebGeolocationCoreLocationProvider> _provider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)errorOccurred:(id)arg0 ;
-(void)geolocationAuthorizationDenied;
-(void)geolocationAuthorizationGranted;
-(void)positionChanged:(*void)arg0 ;
-(void)requestGeolocationAuthorization;
-(void)resetGeolocation;
-(void)setEnableHighAccuracy:(BOOL)arg0 ;
-(void)setListener:(id)arg0 ;
-(void)start;
-(void)stop;


@end


#endif