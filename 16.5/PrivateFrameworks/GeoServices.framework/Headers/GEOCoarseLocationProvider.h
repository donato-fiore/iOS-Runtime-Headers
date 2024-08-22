// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOCOARSELOCATIONPROVIDER_H
#define GEOCOARSELOCATIONPROVIDER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "GEOLocationShifter.h"

@interface GEOCoarseLocationProvider : NSObject {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSUInteger _inFlightTileLoadsCount;
    GEOLocationShifter *_locationShifter;
}




-(BOOL)_snapNonMercatorCoordinateIfNecessary:(id)arg0 callbackQueue:(id)arg1 callback:(id)arg2 ;
-(id)init;
-(void)_fetchBasicCoarseEquivalentForLocation:(id)arg0 fallbackIsPermanent:(BOOL)arg1 addLocationNoise:(BOOL)arg2 callbackQueue:(id)arg3 callback:(id)arg4 ;
-(void)_fetchCoarseEquivalentForLocation:(id)arg0 addLocationNoise:(BOOL)arg1 callbackQueue:(id)arg2 callback:(id)arg3 ;
-(void)_fetchRepresentativePointFromData:(id)arg0 tileKey:(struct _GEOTileKey *)arg1 location:(id)arg2 addLocationNoise:(BOOL)arg3 callbackQueue:(id)arg4 callback:(id)arg5 ;
-(void)fetchCoarseEquivalentForLocation:(id)arg0 callbackQueue:(id)arg1 callback:(id)arg2 ;
-(void)fetchConsistentCoarseEquivalentForLocation:(id)arg0 callbackQueue:(id)arg1 callback:(id)arg2 ;


@end


#endif