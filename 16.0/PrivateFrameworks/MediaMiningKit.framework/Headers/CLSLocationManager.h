// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSLOCATIONMANAGER_H
#define CLSLOCATIONMANAGER_H

@class NSMutableArray, CLLocationManager, NSUUID, NSString;
@protocol CLLocationManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CLSLocationManager : NSObject <CLLocationManagerDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSUInteger _minimumDelayReached;
    BOOL _isBrowsing;
    NSMutableArray *_pendingBlocks;
    CLLocationManager *_locationManager;
    BOOL _isUpdatingLocation;
    NSUUID *_shutdownUUID;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat desiredAccuracy; // ivar: _desiredAccuracy
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)defaultManager;
-(id)currentLocation;
-(id)init;
-(void)_dispatchProximityPendingBlocks:(BOOL)arg0 ;
-(void)dealloc;
-(void)locationManager:(id)arg0 didChangeAuthorizationStatus:(int)arg1 ;
-(void)locationManager:(id)arg0 didFailWithError:(id)arg1 ;
-(void)locationManager:(id)arg0 didUpdateLocations:(id)arg1 ;
-(void)locationResult:(id)arg0 ;


@end


#endif