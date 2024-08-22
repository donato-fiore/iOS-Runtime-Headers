// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MNTIMEBALLMOCKLOCATIONPROVIDER_H
#define MNTIMEBALLMOCKLOCATIONPROVIDER_H

@class NSLock, NSMutableArray, CLLocationManager, CLLocation, NSString;
@protocol MNTimeballLocationProvider, OS_dispatch_queue, OS_dispatch_source, CLLocationManagerDelegate;

#import <Foundation/Foundation.h>


@interface MNTimeballMockLocationProvider : NSObject <MNTimeballLocationProvider>

 {
    BOOL _deliveringUpdates;
    NSLock *_objectLock;
    NSMutableArray *_queuedObjects;
    NSMutableArray *_delayIntervals;
    CLLocationManager *_lm;
    CLLocation *_location;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CLLocationManagerDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat desiredAccuracy; // ivar: desiredAccuracy
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) CLLocation *location; // ivar: location
@property (readonly) Class superclass;


-(id)initWithDelegate:(id)arg0 queue:(id)arg1 ;
-(id)initWithEffectiveBundle:(id)arg0 delegate:(id)arg1 onQueue:(id)arg2 ;
-(id)initWithEffectiveBundleIdentifier:(id)arg0 delegate:(id)arg1 onQueue:(id)arg2 ;
-(void)_deliverNextObject;
-(void)_processNextObject;
-(void)_setupTimer;
-(void)clearLocationsAndErrors;
-(void)deliverError:(id)arg0 afterDelay:(CGFloat)arg1 ;
-(void)deliverLocation:(id)arg0 afterDelay:(CGFloat)arg1 ;
-(void)startUpdatingLocation;
-(void)stopUpdatingLocation;


@end


#endif