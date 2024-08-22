// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRCMINHEAP_H
#define BRCMINHEAP_H

@class NSMapTable;
@protocol NSFastEnumeration;

#import <Foundation/Foundation.h>


@interface BRCMinHeap : NSObject <NSFastEnumeration>

 {
    *id _array;
    NSUInteger _size;
    id *_comparator;
    NSUInteger _mutation;
    NSMapTable *_objects;
}


@property (readonly, nonatomic) NSUInteger count; // ivar: _count


-(BOOL)check;
-(BOOL)containsObject:(id)arg0 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)description;
-(id)firstObject;
-(id)init;
-(id)initWithComparator:(id)arg0 ;
-(void)_moveDown:(id)arg0 index:(NSUInteger)arg1 ;
-(void)_moveUp:(id)arg0 index:(NSUInteger)arg1 ;
-(void)_moveUpOrDown:(id)arg0 index:(NSUInteger)arg1 ;
-(void)_shrink;
-(void)addObject:(id)arg0 ;
-(void)dealloc;
-(void)firstObjectWeightChanged;
-(void)objectWeightChanged:(id)arg0 ;
-(void)removeAllObjects;
-(void)removeFirstObject;
-(void)removeObject:(id)arg0 ;


@end


#endif