// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARGEOTRACKINGLOCATIONREQUESTHANDLER_H
#define ARGEOTRACKINGLOCATIONREQUESTHANDLER_H

@class CLLocationManager, NSCondition, NSString;
@protocol CLLocationManagerDelegate;

#import <Foundation/Foundation.h>


@interface ARGeoTrackingLocationRequestHandler : NSObject <CLLocationManagerDelegate>

 {
    CLLocationManager *_locationManager;
    NSCondition *_authorizationCondition;
    int _authorizationStatus;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *locationCompletionHandler; // ivar: _locationCompletionHandler
@property (readonly) Class superclass;


-(id)init;
-(int)waitForAuthorizationStatus;
-(void)locationManager:(id)arg0 didFailWithError:(id)arg1 ;
-(void)locationManager:(id)arg0 didUpdateLocations:(id)arg1 ;
-(void)locationManagerDidChangeAuthorization:(id)arg0 ;
-(void)requestLocationWithCompletionHandler:(id)arg0 ;
-(void)setLocationManager:(id)arg0 ;


@end


#endif