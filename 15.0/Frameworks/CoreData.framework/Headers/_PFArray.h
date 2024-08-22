// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PFARRAY_H
#define _PFARRAY_H

@class NSArray, NSString;
@protocol NSCopying, NSMutableCopying, PFObjectIDCollection;


#import "_PFWeakReference.h"

@interface _PFArray : NSArray <NSCopying, NSMutableCopying, PFObjectIDCollection>

 {
    int _cd_rc;
    unsigned int _count;
    *id _array;
    _PFWeakReference *_weakContext;
    _PFArrayFlags _flags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)accessInstanceVariablesDirectly;
+(Class)classForKeyedUnarchiver;
+(void)initialize;
-(*id)_objectsPointer;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(Class)classForCoder;
-(NSUInteger)count;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)indexOfManagedObjectForObjectID:(id)arg0 ;
-(NSUInteger)indexOfObject:(id)arg0 ;
-(NSUInteger)indexOfObject:(id)arg0 inRange:(struct _NSRange )arg1 ;
-(NSUInteger)indexOfObjectIdenticalTo:(id)arg0 ;
-(NSUInteger)indexOfObjectIdenticalTo:(id)arg0 inRange:(struct _NSRange )arg1 ;
-(NSUInteger)retainCount;
-(id)arrayFromObjectIDs;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithObjects:(*id)arg0 count:(NSUInteger)arg1 ;
-(id)initWithObjects:(*id)arg0 count:(unsigned int)arg1 andFlags:(unsigned int)arg2 ;
-(id)initWithObjects:(*id)arg0 count:(unsigned int)arg1 andFlags:(unsigned int)arg2 andContext:(id)arg3 ;
-(id)managedObjectIDAtIndex:(NSUInteger)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)newArrayFromObjectIDs;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(id)retain;
-(id)subarrayWithRange:(struct _NSRange )arg0 ;
-(void)dealloc;
-(void)getObjects:(*id)arg0 ;
-(void)getObjects:(*id)arg0 range:(struct _NSRange )arg1 ;
-(void)release;


@end


#endif