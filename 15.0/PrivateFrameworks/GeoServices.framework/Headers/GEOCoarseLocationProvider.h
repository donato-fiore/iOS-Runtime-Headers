// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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
-(void)_fetchBasicCoarseEquivalentForLocation:(id)arg0 fallbackIsPermanent:(BOOL)arg1 callbackQueue:(id)arg2 callback:(id)arg3 ;
-(void)_fetchRepresentativePointFromData:(id)arg0 tileKey:(struct _GEOTileKey *)arg1 location:(id)arg2 callbackQueue:(id)arg3 callback:(id)arg4 ;
-(void)fetchCoarseEquivalentForLocation:(id)arg0 callbackQueue:(id)arg1 callback:(id)arg2 ;


@end


#endif