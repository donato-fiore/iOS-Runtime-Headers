// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PFMUTABLEPROXYARRAY_H
#define _PFMUTABLEPROXYARRAY_H

@class NSMutableArray, NSString;
@protocol PFObjectIDCollection;


#import "_PFArray.h"

@interface _PFMutableProxyArray : NSMutableArray <PFObjectIDCollection>

 {
    int _cd_rc;
    unsigned int _editCount;
    unsigned int _offset;
    unsigned int _limit;
    _PFArray *_originalArray;
    NSMutableArray *_updatedObjectsArray;
    *__CFArray _indicesVeneer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)classForKeyedUnarchiver;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(Class)classForCoder;
-(NSUInteger)count;
-(NSUInteger)indexOfManagedObjectForObjectID:(id)arg0 ;
-(NSUInteger)indexOfObject:(id)arg0 ;
-(NSUInteger)indexOfObject:(id)arg0 inRange:(struct _NSRange )arg1 ;
-(NSUInteger)indexOfObjectIdenticalTo:(id)arg0 ;
-(NSUInteger)indexOfObjectIdenticalTo:(id)arg0 inRange:(struct _NSRange )arg1 ;
-(NSUInteger)retainCount;
-(id)arrayFromObjectIDs;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithPFArray:(id)arg0 ;
-(id)initWithPFArray:(id)arg0 inRange:(struct _NSRange )arg1 ;
-(id)managedObjectIDAtIndex:(NSUInteger)arg0 ;
-(id)mutableCopy;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)newArrayFromObjectIDs;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(id)retain;
-(id)subarrayWithRange:(struct _NSRange )arg0 ;
-(id)valueForKey:(id)arg0 ;
-(void)addObject:(id)arg0 ;
-(void)dealloc;
-(void)getObjects:(*id)arg0 range:(struct _NSRange )arg1 ;
-(void)insertObject:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)release;
-(void)removeLastObject;
-(void)removeObjectAtIndex:(NSUInteger)arg0 ;
-(void)replaceObjectAtIndex:(NSUInteger)arg0 withObject:(id)arg1 ;


@end


#endif