// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPSLOCATIONPROVIDER_H
#define CPSLOCATIONPROVIDER_H

@class CLLocationManager, NSString;
@protocol CLLocationManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CPSPromise.h"

@interface CPSLocationProvider : NSObject <CLLocationManagerDelegate>

 {
    CLLocationManager *_locationManager;
    CPSPromise *_locationPromise;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _locationEnabled;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)locationServiceEnabled;
+(id)sharedProvider;
+(void)setLocationServiceEnabled:(BOOL)arg0 ;
-(id)init;
-(void)confirmCurrentLocationInRegion:(id)arg0 completion:(id)arg1 ;
-(void)getCurrentLocationWithCompletion:(id)arg0 ;
-(void)locationManager:(id)arg0 didFailWithError:(id)arg1 ;
-(void)locationManager:(id)arg0 didUpdateLocations:(id)arg1 ;
-(void)locationManagerDidChangeAuthorization:(id)arg0 ;


@end


#endif