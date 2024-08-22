// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC7COREODI17ODILOCATIONHELPER_H
#define _TTC7COREODI17ODILOCATIONHELPER_H

@protocol CLLocationManagerDelegate;

#import <Foundation/Foundation.h>


@interface _TtC7CoreODI17ODILocationHelper : NSObject <CLLocationManagerDelegate>

 {
    ? _locationManager;
    ? location;
    ? serviceQueue;
    ? authorizationStatus;
    ? bundleToUse;
    ? bundleIdentifierToUse;
    ? waitingContinuations;
    ? inUseAssertion;
}




-(id)init;
-(void)dealloc;
-(void)locationManager:(id)arg0 didChangeAuthorizationStatus:(int)arg1 ;
-(void)locationManager:(id)arg0 didFailWithError:(id)arg1 ;
-(void)locationManager:(id)arg0 didUpdateLocations:(id)arg1 ;


@end


#endif