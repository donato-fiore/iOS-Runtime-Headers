// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MNVIRTUALGARAGEMANAGER_H
#define MNVIRTUALGARAGEMANAGER_H

@class GEOObserverHashTable, NSTimer, NSString, VGVehicle;
@protocol MNVirtualGarageProviderDelegate, MNVirtualGarageProvider;

#import <Foundation/Foundation.h>

#import "MNTraceRecorder.h"

@interface MNVirtualGarageManager : NSObject <MNVirtualGarageProviderDelegate>

 {
    id<MNVirtualGarageProvider> *_provider;
    BOOL _isStarted;
    GEOObserverHashTable *_observers;
    MNTraceRecorder *_traceRecorder;
    NSTimer *_timer;
}


@property (readonly, nonatomic) BOOL assumesFullCharge;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) VGVehicle *lastVehicle; // ivar: _lastVehicle
@property (readonly, nonatomic) NSString *lastVehicleName; // ivar: _lastVehicleName
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger vehiclesCount;


+(id)sharedManager;
-(BOOL)_isStandardProvider:(id)arg0 ;
-(id)_standardVirtualGarageProvider;
-(id)initPrivate;
-(void)_start;
-(void)_stop;
-(void)dealloc;
-(void)registerObserver:(id)arg0 ;
-(void)setProvider:(id)arg0 ;
-(void)setTraceRecorder:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 ;
-(void)updatedVehicleStateWithHandler:(id)arg0 ;
-(void)virtualGarageProvider:(id)arg0 didUpdateSelectedVehicle:(id)arg1 ;


@end


#endif