// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKONESHOTLOCATIONFETCHER_H
#define NPKONESHOTLOCATIONFETCHER_H

@class NSString, CLInUseAssertion, CLLocationManager;
@protocol CLLocationManagerDelegate, OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NPKOneShotLocationFetcher : NSObject <CLLocationManagerDelegate>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CLInUseAssertion *inUseAssertion; // ivar: _inUseAssertion
@property (retain, nonatomic) NSObject<OS_dispatch_source> *locationFixTimeout; // ivar: _locationFixTimeout
@property (retain, nonatomic) CLLocationManager *locationManager; // ivar: _locationManager
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *locationManagerQueue; // ivar: _locationManagerQueue
@property (readonly) Class superclass;


-(id)init;
-(void)_finishLocationFixWithLocation:(id)arg0 ;
-(void)dealloc;
-(void)fetchLocationWithCompletion:(id)arg0 ;
-(void)locationManager:(id)arg0 didFailWithError:(id)arg1 ;
-(void)locationManager:(id)arg0 didUpdateLocations:(id)arg1 ;


@end


#endif