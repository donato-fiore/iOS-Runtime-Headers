// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PFBATCHFAULTINGARRAY_H
#define _PFBATCHFAULTINGARRAY_H

@class NSArray, NSString;
@protocol PFObjectIDCollection;


#import "_PFArray.h"
#import "NSManagedObjectContext.h"
#import "NSCachingFetchRequest.h"

@interface _PFBatchFaultingArray : NSArray <PFObjectIDCollection>

 {
    int _cd_rc;
    unsigned int _count;
    _PFArray *_array;
    *unsigned int _entryFlags;
    NSManagedObjectContext *_moc;
    NSCachingFetchRequest *_request;
    unsigned int _batchSize;
    *unsigned int _LRUBatches;
    _PFBatchFaultingArrayFlags _flags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)accessInstanceVariablesDirectly;
+(Class)classForKeyedUnarchiver;
+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(void)initialize;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(BOOL)isEqualToArray:(id)arg0 ;
-(Class)classForCoder;
-(NSUInteger)count;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)indexOfManagedObjectForObjectID:(id)arg0 ;
-(NSUInteger)indexOfObject:(id)arg0 ;
-(NSUInteger)indexOfObject:(id)arg0 inRange:(struct _NSRange )arg1 ;
-(NSUInteger)indexOfObjectAtIndexes:(id)arg0 options:(NSUInteger)arg1 passingTest:(id)arg2 ;
-(NSUInteger)indexOfObjectIdenticalTo:(id)arg0 ;
-(NSUInteger)indexOfObjectIdenticalTo:(id)arg0 inRange:(struct _NSRange )arg1 ;
-(NSUInteger)indexOfObjectWithOptions:(NSUInteger)arg0 passingTest:(id)arg1 ;
-(NSUInteger)retainCount;
-(id)arrayFromObjectIDs;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)filteredArrayUsingPredicate:(id)arg0 ;
-(id)indexesOfObjectsAtIndexes:(id)arg0 options:(NSUInteger)arg1 passingTest:(id)arg2 ;
-(id)indexesOfObjectsWithOptions:(NSUInteger)arg0 passingTest:(id)arg1 ;
-(id)initWithPFArray:(id)arg0 andRequest:(id)arg1 andContext:(id)arg2 ;
-(id)managedObjectIDAtIndex:(NSUInteger)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)newArrayFromObjectIDs;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(id)objectAtIndexedSubscript:(NSUInteger)arg0 ;
-(id)objectsAtIndexes:(id)arg0 ;
-(id)retain;
-(id)sortedArrayUsingComparator:(id)arg0 ;
-(id)sortedArrayUsingDescriptors:(id)arg0 ;
-(id)sortedArrayUsingFunction:(*unk)arg0 context:(*void)arg1 ;
-(id)sortedArrayUsingFunction:(*unk)arg0 context:(*void)arg1 hint:(id)arg2 ;
-(id)sortedArrayUsingSelector:(SEL)arg0 ;
-(id)sortedArrayWithOptions:(NSUInteger)arg0 usingComparator:(id)arg1 ;
-(id)subarrayWithRange:(struct _NSRange )arg0 ;
-(id)valueForKey:(id)arg0 ;
-(id)valueForKeyPath:(id)arg0 ;
-(void)dealloc;
-(void)enumerateObjectsAtIndexes:(id)arg0 options:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(void)enumerateObjectsWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)getObjects:(*id)arg0 ;
-(void)getObjects:(*id)arg0 range:(struct _NSRange )arg1 ;
-(void)release;


@end


#endif