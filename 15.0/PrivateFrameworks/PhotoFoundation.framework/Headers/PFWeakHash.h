// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFWEAKHASH_H
#define PFWEAKHASH_H

@class NSPointerArray;
@protocol PFWeakHashDelegate;


#import "PFWeakContainer.h"

@interface PFWeakHash : PFWeakContainer {
    _opaque_pthread_mutex_t _serializer;
    BOOL _objectHashing;
    uint8_t _serializedThread;
    *id _objects;
    NSUInteger _capacity;
    NSPointerArray *_payload;
    NSUInteger _payloadPurgeCounter;
    *NSUInteger _inUse;
    NSUInteger _count;
    NSInteger _nilledWeakCount;
}


@property (weak) NSObject<PFWeakHashDelegate> *delegate; // ivar: _delegate


+(void)initialize;
-(BOOL)_onSerializedThread;
-(BOOL)_removeAllObjects;
-(BOOL)_shouldGrow;
-(BOOL)_shouldShrink;
-(BOOL)containsObject:(id)arg0 ;
-(BOOL)removeObject:(id)arg0 ;
-(NSUInteger)_addObject:(id)arg0 ;
-(NSUInteger)_bucketForObject:(id)arg0 foundInHash:(*BOOL)arg1 ;
-(NSUInteger)capacity;
-(NSUInteger)countByVerifyingWeakObjects;
-(NSUInteger)countEstimate;
-(id)allObjects;
-(id)init;
-(id)initWithObjectHashing;
-(id)initWithPointerHashing;
-(id)member:(id)arg0 ;
-(id)payloadForObject:(id)arg0 ;
-(void)_doEnumeration:(id)arg0 ;
-(void)_dumpBuckets;
-(void)_processNilledWeakReferences;
-(void)_purgeOrphanedPayloads;
-(void)_rehashWithNewCapacity:(NSUInteger)arg0 ;
-(void)_resize;
-(void)_serialize:(id)arg0 ;
-(void)_setPayload:(id)arg0 inBucket:(NSUInteger)arg1 ;
-(void)addObject:(id)arg0 ;
-(void)addObject:(id)arg0 withPayload:(id)arg1 ;
-(void)dealloc;
-(void)enumerateObjectsAndPayloadsWithBlock:(id)arg0 ;
-(void)enumerateObjectsWithBlock:(id)arg0 ;
-(void)postDelegateBecameEmptyNotice;
-(void)removeAllObjects;
-(void)setPayload:(id)arg0 forObject:(id)arg1 ;
-(void)weakReferenceBecameNil;


@end


#endif