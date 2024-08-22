// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MNTIMEBALLLOCATIONMANAGER_H
#define MNTIMEBALLLOCATIONMANAGER_H

@class CLInUseAssertion, CLLocationManager, GEOLocationShifter, NSMutableArray, NSString, CLLocation;
@protocol CLLocationManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MNTimeballLocationManager : NSObject <CLLocationManagerDelegate>

 {
    NSObject<OS_dispatch_queue> *_isolationQueue;
    CLInUseAssertion *_inUseAssertion;
    CLLocationManager *_locationProvider;
    GEOLocationShifter *_locationShifter;
    NSMutableArray *_requests;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CLLocation *lastLocation;
@property (readonly) Class superclass;


+(void)setLocationProviderClass:(Class)arg0 ;
-(id)init;
-(id)locationProvider;
-(void)_addRequest:(id)arg0 ;
-(void)_processError:(id)arg0 ;
-(void)_processLocation:(id)arg0 ;
-(void)_processPendingRequests;
-(void)_removeRequest:(id)arg0 ;
-(void)_requestTimedOut:(id)arg0 ;
-(void)_setupLocationProvider;
-(void)dealloc;
-(void)getLocationWithAccuracy:(CGFloat)arg0 maxAttempts:(NSUInteger)arg1 timeoutInterval:(CGFloat)arg2 completion:(id)arg3 ;
-(void)locationManager:(id)arg0 didFailWithError:(id)arg1 ;
-(void)locationManager:(id)arg0 didUpdateLocations:(id)arg1 ;


@end


#endif