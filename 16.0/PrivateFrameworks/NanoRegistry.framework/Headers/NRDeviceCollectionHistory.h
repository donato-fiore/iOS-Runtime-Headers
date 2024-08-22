// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NRDEVICECOLLECTIONHISTORY_H
#define NRDEVICECOLLECTIONHISTORY_H

@class NSMutableOrderedSet, NSMutableArray, NSMutableDictionary;
@protocol NRMutableStateParentDelegate, NSCopying, NSSecureCoding, NSFastEnumeration;

#import <Foundation/Foundation.h>

#import "NRSwitchRecordCollection.h"
#import "NRMutableDeviceCollection.h"
#import "NRPBDeviceCollectionHistory.h"

@interface NRDeviceCollectionHistory : NSObject <NRMutableStateParentDelegate, NSCopying, NSSecureCoding, NSFastEnumeration>

 {
    NSMutableOrderedSet *_observers;
    NSInteger _maxHistoryDepth;
    uint8_t _atomicDirty;
    os_unfair_lock_s _observerLock;
    os_unfair_lock_s _cacheLock;
    NSUInteger _startIndex;
    NSMutableArray *_history;
    NRSwitchRecordCollection *_switchRecords;
    NSMutableDictionary *_historyStateCache;
    NSMutableArray *_historyStateCacheMRU;
    NSMutableArray *_historyStateCacheIndex;
}


@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) NRMutableDeviceCollection *deviceCollection; // ivar: _deviceCollection
@property (readonly, nonatomic) BOOL dirty;
@property (readonly, nonatomic) NSUInteger nextIndex;
@property (readonly, nonatomic) NRPBDeviceCollectionHistory *protobuf;
@property (readonly, nonatomic) unsigned int switchIndex;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToHistory:(id)arg0 ;
-(NSUInteger)_findIndexInHistoryStateCache:(id)arg0 type:(NSUInteger)arg1 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)_mostRecentStateBefore:(id)arg0 ;
-(id)addObserverQueue:(id)arg0 withBlock:(id)arg1 ;
-(id)applyDiff:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)deviceIDAtSwitchIndex:(unsigned int)arg0 date:(*id)arg1 ;
-(id)historyEntryAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(id)objectAtIndexedSubscript:(NSUInteger)arg0 ;
-(id)switchDeviceIDFromDiff:(id)arg0 ;
-(void)_createIndex;
-(void)_truncateHistory;
-(void)_updateHistoryCachesWithIndex:(id)arg0 ;
-(void)child:(id)arg0 didApplyDiff:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidate;
-(void)notifyHistoryObserversWithEntry:(id)arg0 ;
-(void)pruneStateCacheItems:(NSUInteger)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif