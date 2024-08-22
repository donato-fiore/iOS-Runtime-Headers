// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOTRANSITVEHICLEUPDATEREQUESTER_H
#define GEOTRANSITVEHICLEUPDATEREQUESTER_H

@class NSMutableSet, NSTimer, NSHashTable;
@protocol GEOMapServiceTicket;

#import <Foundation/Foundation.h>


@interface GEOTransitVehicleUpdateRequester : NSObject {
    os_unfair_lock_s _updatersLock;
    os_unfair_lock_s _processedTripIdsLock;
    os_unfair_lock_s _inflightTripIdsLock;
    NSMutableSet *_inflightTripIds;
    id<GEOMapServiceTicket> *_ticket;
    NSTimer *_updateTimer;
    CGFloat _requestInterval;
    NSUInteger _maxRetries;
    NSUInteger _numRetries;
}


@property (readonly, nonatomic) NSMutableSet *processedTripIds; // ivar: _processedTripIds
@property (readonly, nonatomic) NSHashTable *updaters; // ivar: _updaters


+(id)sharedInstance;
-(id)_tripIdsForUpdaters:(id)arg0 filteredTripIDs:(*BOOL)arg1 ;
-(id)initPrivate;
-(void)_cancelRequestIfNeeded;
-(void)_cancelUpdateTimer;
-(void)_handleMapItems:(id)arg0 error:(id)arg1 forTripIDs:(id)arg2 ;
-(void)_processTripIds;
-(void)_purgeAllObjects;
-(void)_removeTripIdsIfApplicable:(id)arg0 ;
-(void)_scheduleUpdateTimerWithInterval:(CGFloat)arg0 ;
-(void)_sendRequestForTripIds:(id)arg0 ;
-(void)mockProcessedIds:(id)arg0 ;
-(void)registerVehicleUpdater:(id)arg0 ;
-(void)unregisterVehicleUpdater:(id)arg0 ;


@end


#endif