// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDLOCATIONMANAGER_H
#define HDLOCATIONMANAGER_H

@class HDAssertionManager, CLLocationManager, CLInUseAssertion, HKObserverSet, NSString;
@protocol HDAssertionObserver, CLLocationManagerDelegate, HDLocationManagerUnitTestDelegate;

#import <Foundation/Foundation.h>


@interface HDLocationManager : NSObject <HDAssertionObserver, CLLocationManagerDelegate>

 {
    HDAssertionManager *_assertionManager;
    CLLocationManager *_locationManager;
    CLInUseAssertion *_inUseAssertion;
    HKObserverSet *_observers;
    id *_locationManagerConfiguration;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<HDLocationManagerUnitTestDelegate> *unitTestDelegate; // ivar: _unitTestDelegate


-(id)_mainQueue_newLocationManagerWithEffectiveBundle:(id)arg0 ;
-(id)_unitTest_locationManager;
-(id)init;
-(id)takeLocationUpdatingAssertionForOwnerIdentifier:(id)arg0 ;
-(void)_mainQueue_releaseLocationUpdatingAssertion;
-(void)_mainQueue_takeLocationUpdatingAssertion;
-(void)_mainQueue_updateLocationManager;
-(void)_unitTest_didInvalidateAssertion:(id)arg0 ;
-(void)_unitTest_didTakeAssertion:(id)arg0 ;
-(void)_unitTest_setLocationManagerConfiguration:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)assertionManager:(id)arg0 assertionInvalidated:(id)arg1 ;
-(void)dealloc;
-(void)locationManager:(id)arg0 didFailWithError:(id)arg1 ;
-(void)locationManager:(id)arg0 didUpdateLocations:(id)arg1 ;
-(void)locationManagerDidChangeAuthorization:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)requestWhenInUseAuthorization;


@end


#endif