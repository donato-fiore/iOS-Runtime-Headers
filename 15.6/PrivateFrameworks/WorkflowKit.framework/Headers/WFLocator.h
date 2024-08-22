// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFLOCATOR_H
#define WFLOCATOR_H

@class CLLocation, NSString, CLInUseAssertion, CLLocationManager;
@protocol CLLocationManagerDelegate;

#import <Foundation/Foundation.h>


@interface WFLocator : NSObject <CLLocationManagerDelegate>



@property (retain, nonatomic) CLLocation *bestEffortLocation; // ivar: _bestEffortLocation
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CLInUseAssertion *inUseAssertion; // ivar: _inUseAssertion
@property (retain, nonatomic) CLLocationManager *locationManager; // ivar: _locationManager
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timeout; // ivar: _timeout


+(void)determineLocationWithWorkflowEnvironment:(NSInteger)arg0 completion:(id)arg1 ;
+(void)determineLocationWithWorkflowEnvironment:(NSInteger)arg0 desiredAccuracy:(CGFloat)arg1 completion:(id)arg2 ;
+(void)determineLocationWithWorkflowEnvironment:(NSInteger)arg0 desiredAccuracy:(CGFloat)arg1 timeout:(CGFloat)arg2 completion:(id)arg3 ;
-(BOOL)useRequestLocation;
-(id)initWithWorkflowEnvironment:(NSInteger)arg0 ;
-(void)dealloc;
-(void)finishUpdatingLocation;
-(void)locationManager:(id)arg0 didFailWithError:(id)arg1 ;
-(void)locationManager:(id)arg0 didUpdateLocations:(id)arg1 ;
-(void)requestLocation;
-(void)start;
-(void)startUpdatingLocation;


@end


#endif