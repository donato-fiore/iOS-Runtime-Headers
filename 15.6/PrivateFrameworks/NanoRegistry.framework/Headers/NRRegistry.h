// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NRREGISTRY_H
#define NRREGISTRY_H

@class NSMutableDictionary;
@protocol NRMutableStateParentDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NRReadWriteConcurrentQueue.h"
#import "NRMutableDeviceCollection.h"
#import "NRSecureDevicePropertyStore.h"

@interface NRRegistry : NSObject <NRMutableStateParentDelegate>

 {
    NSMutableDictionary *_registryDiffObservers;
    NSMutableDictionary *_registrySecurePropertyObservers;
    os_unfair_lock_s _collectionLock;
    NRReadWriteConcurrentQueue *_readerWriterDispatch;
    BOOL _queueRunning;
    BOOL _supportsWatch;
}


@property (retain, nonatomic) NRMutableDeviceCollection *collection; // ivar: _collection
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *managementQueue; // ivar: _managementQueue
@property (retain, nonatomic) NRMutableDeviceCollection *queueCollection; // ivar: _queueCollection
@property (retain, nonatomic) NRSecureDevicePropertyStore *secureProperties; // ivar: _secureProperties


+(NSUInteger)readNotifyToken:(int)arg0 ;
+(id)_nextToken;
+(id)getReferencedSecureProperties:(id)arg0 fromDiff:(id)arg1 ;
+(id)getReferencedSecurePropertyIDsFromDiff:(id)arg0 ;
+(int)registerNotifyTokenWithName:(id)arg0 withQueue:(id)arg1 withBlock:(id)arg2 ;
+(void)fixSecurePropertiesWithCollection:(id)arg0 secureProperties:(id)arg1 insecurePropertyNames:(id)arg2 ;
-(BOOL)enqueueForReadUnlessSuspended:(id)arg0 ;
-(BOOL)supportsWatch;
-(id)addDiffObserverWithWriteBlock:(id)arg0 ;
-(id)addSecurePropertiesObserverWithReadBlock:(id)arg0 ;
-(id)init;
-(id)initWithParameters:(id)arg0 ;
-(void)_notifyDiffObserversWithDiff:(id)arg0 deviceCollection:(id)arg1 secureProperties:(id)arg2 ;
-(void)_notifyObserversSecurePropertiesAreAvailableWithCollection:(id)arg0 secureProperties:(id)arg1 ;
-(void)_startQueue;
-(void)child:(id)arg0 didApplyDiff:(id)arg1 ;
-(void)enqueueForRead:(id)arg0 ;
// -(void)enqueueForRead:(id)arg0 bypassSuspend:(unk)arg1  ;
-(void)enqueueForReadAsync:(id)arg0 ;
// -(void)enqueueForReadAsync:(id)arg0 bypassSuspend:(unk)arg1  ;
-(void)enqueueForWriteAsync:(id)arg0 ;
// -(void)enqueueForWriteAsync:(id)arg0 bypassSuspend:(unk)arg1  ;
-(void)grabRegistryWithReadBlock:(id)arg0 ;
-(void)grabRegistryWithReadBlockAsync:(id)arg0 ;
-(void)grabRegistryWithWriteBlockAsync:(id)arg0 ;
-(void)invalidate;
-(void)performUnderCollectionLock:(id)arg0 ;
-(void)removeDiffObserver:(id)arg0 ;
-(void)removeSecurePropertiesObserver:(id)arg0 ;
-(void)syncGrabRegistryWithReadBlock:(id)arg0 ;
-(void)syncGrabRegistryWithWriteBlock:(id)arg0 ;


@end


#endif