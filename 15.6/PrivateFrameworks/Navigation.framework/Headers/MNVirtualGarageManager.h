// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MNVIRTUALGARAGEMANAGER_H
#define MNVIRTUALGARAGEMANAGER_H

@class GEOObserverHashTable, NSString, VGVehicle;
@protocol MNVirtualGarageProviderDelegate, MNVirtualGarageProvider;

#import <Foundation/Foundation.h>

#import "MNTraceRecorder.h"

@interface MNVirtualGarageManager : NSObject <MNVirtualGarageProviderDelegate>

 {
    id<MNVirtualGarageProvider> *_provider;
    GEOObserverHashTable *_observers;
    MNTraceRecorder *_traceRecorder;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) VGVehicle *lastVehicleState; // ivar: _lastVehicleState
@property (readonly) Class superclass;


+(id)sharedManager;
-(BOOL)_isStandardProvider:(id)arg0 ;
-(id)_standardVirtualGarageProvider;
-(id)initPrivate;
-(void)dealloc;
-(void)registerObserver:(id)arg0 ;
-(void)setProvider:(id)arg0 ;
-(void)setTraceRecorder:(id)arg0 ;
-(void)start;
-(void)stop;
-(void)unregisterObserver:(id)arg0 ;
-(void)virtualGarageProvider:(id)arg0 didUpdateSelectedVehicle:(id)arg1 ;


@end


#endif