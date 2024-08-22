// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAFENCEMANAGER_H
#define SAFENCEMANAGER_H

@class NSHashTable, NSMutableDictionary;
@protocol SAFenceManagerServiceProtocol, SAFenceManagerRequestProtocol;

#import <Foundation/Foundation.h>


@interface SAFenceManager : NSObject <SAFenceManagerServiceProtocol, SAFenceManagerRequestProtocol>



@property (retain, nonatomic) NSHashTable *clients; // ivar: _clients
@property (retain) NSMutableDictionary *deviceUUIDsBySafeLocation; // ivar: _deviceUUIDsBySafeLocation
@property (retain, nonatomic) NSMutableDictionary *deviceUUIDsByUnsafeRegionIdentifier; // ivar: _deviceUUIDsByUnsafeRegionIdentifier
@property (retain, nonatomic) NSMutableDictionary *regionsByRegionIdentifier; // ivar: _regionsByRegionIdentifier
@property (retain, nonatomic) NSMutableDictionary *safeLocationsByRegionIdentifier; // ivar: _safeLocationsByRegionIdentifier
@property (retain, nonatomic) NSMutableDictionary *statesByRegionIdentifier; // ivar: _statesByRegionIdentifier


-(BOOL)isSafeLocation:(id)arg0 ;
-(BOOL)startMonitorSafeLocation:(id)arg0 forDevice:(id)arg1 ;
-(BOOL)startMonitorUnsafeLocationExit:(id)arg0 forDevice:(id)arg1 ;
-(BOOL)stopMonitorSafeLocation:(id)arg0 forDevice:(id)arg1 ;
-(BOOL)stopMonitorUnsafeLocationExit:(id)arg0 forDevice:(id)arg1 ;
-(NSUInteger)getSafeLocationCount;
-(NSUInteger)getUnsafeLocationCount;
-(id)getRegionForSafeLocation:(id)arg0 ;
-(id)init;
-(void)addClient:(id)arg0 ;
-(void)handleFenceEvent:(NSUInteger)arg0 forRegion:(id)arg1 ;
-(void)ingestTAEvent:(id)arg0 ;
-(void)notifyState:(NSUInteger)arg0 forSafeLocationRegion:(id)arg1 ;
-(void)notifyState:(NSUInteger)arg0 forUnsafeLocationRegion:(id)arg1 ;
-(void)removeClient:(id)arg0 ;
-(void)removeLocationsForDeviceUuid:(id)arg0 ;


@end


#endif