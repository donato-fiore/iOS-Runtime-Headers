// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SALOCATIONMANAGER_H
#define SALOCATIONMANAGER_H

@class NSString, CLLocationManager;
@protocol CLLocationManagerDelegate, SALocationManagerProtocol;

#import <Foundation/Foundation.h>


@interface SALocationManager : NSObject <CLLocationManagerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SALocationManagerProtocol> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CLLocationManager *locationManager; // ivar: _locationManager
@property (readonly) Class superclass;


-(id)init;
-(void)locationManager:(id)arg0 didFailWithError:(id)arg1 ;
-(void)locationManager:(id)arg0 didUpdateLocations:(id)arg1 ;
-(void)notifyLocation:(id)arg0 ;
-(void)startMonitoringLocation;
-(void)stopMonitoringLocation;


@end


#endif