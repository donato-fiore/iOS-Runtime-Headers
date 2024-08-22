// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALLOCATIONMANAGERDELEGATE_H
#define CALLOCATIONMANAGERDELEGATE_H

@class CLLocationManager, NSString, CLLocation;
@protocol CLLocationManagerDelegate;

#import <Foundation/Foundation.h>


@interface CalLocationManagerDelegate : NSObject <CLLocationManagerDelegate>

 {
    CLLocationManager *_manager;
    NSString *_currentBundleID;
}


@property (copy) id *completionBlock; // ivar: _completionBlock
@property (retain) CLLocation *currentLocation; // ivar: _currentLocation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL didFinish; // ivar: _didFinish
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithCurrentBundleID:(id)arg0 completionBlock:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)didFinishLocationLookupWithLocation:(id)arg0 error:(id)arg1 ;
-(void)locationManager:(id)arg0 didChangeAuthorizationStatus:(int)arg1 ;
-(void)locationManager:(id)arg0 didFailWithError:(id)arg1 ;
-(void)locationManager:(id)arg0 didUpdateLocations:(id)arg1 ;
-(void)timeout;


@end


#endif