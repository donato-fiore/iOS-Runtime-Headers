// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICLOCATIONCONTEXT_H
#define ICLOCATIONCONTEXT_H

@class CLLocationManager, NSString, CLGeocoder;
@protocol CLLocationManagerDelegate;

#import <Foundation/Foundation.h>


@interface ICLocationContext : NSObject <CLLocationManagerDelegate>

 {
    CLLocationManager *_locationManager;
}


@property (readonly, nonatomic) BOOL canGetLocation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CLGeocoder *geocoder; // ivar: _geocoder
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CLLocationManager *locationManager;
@property (nonatomic) BOOL requestedAuthorization; // ivar: _requestedAuthorization
@property (readonly) Class superclass;


+(id)sharedContext;
-(void)locationManager:(id)arg0 didChangeAuthorizationStatus:(int)arg1 ;
-(void)lookupPlaceAtLatitude:(CGFloat)arg0 longitude:(CGFloat)arg1 handler:(id)arg2 ;
-(void)requestAuthorizationIfNeeded;


@end


#endif