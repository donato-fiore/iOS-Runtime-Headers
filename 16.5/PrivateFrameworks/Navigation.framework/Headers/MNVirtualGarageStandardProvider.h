// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MNVIRTUALGARAGESTANDARDPROVIDER_H
#define MNVIRTUALGARAGESTANDARDPROVIDER_H

@class NSTimer, VGVirtualGarage, geo_isolater, NSString;
@protocol VGVirtualGarageObserver, MNVirtualGarageProvider, OS_dispatch_queue, MNVirtualGarageProviderDelegate;

#import <Foundation/Foundation.h>


@interface MNVirtualGarageStandardProvider : NSObject <VGVirtualGarageObserver, MNVirtualGarageProvider>

 {
    BOOL _isStarted;
    NSObject<OS_dispatch_queue> *_updateQueue;
    NSTimer *_forceUpdateTimer;
    CGFloat _forcePeriodicUpdateInterval;
    VGVirtualGarage *_garage;
    geo_isolater *_garageIsolater;
}


@property (readonly, nonatomic) BOOL assumesFullCharge;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger vehiclesCount;
@property (weak, nonatomic) NSObject<MNVirtualGarageProviderDelegate> *virtualGarageDelegate; // ivar: _delegate


-(id)init;
-(void)_forceVirtualGarageSyncWithHandler:(id)arg0 ;
-(void)_sendVirtualGarageUpdateForSelectedVehicle:(id)arg0 ;
-(void)_setVirtualGarage:(id)arg0 ;
-(void)dealloc;
-(void)startVirtualGarageUpdates;
-(void)stopVirtualGarageUpdates;
-(void)updatedVehicleStateWithHandler:(id)arg0 ;
-(void)virtualGarageDidUpdate:(id)arg0 ;


@end


#endif