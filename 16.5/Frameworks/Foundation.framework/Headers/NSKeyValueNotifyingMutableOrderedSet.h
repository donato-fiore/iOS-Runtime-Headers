// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSKEYVALUENOTIFYINGMUTABLEORDEREDSET_H
#define NSKEYVALUENOTIFYINGMUTABLEORDEREDSET_H

@class NSMutableOrderedSet;


#import "NSKeyValueMutableOrderedSet.h"

@interface NSKeyValueNotifyingMutableOrderedSet : NSKeyValueMutableOrderedSet {
    NSMutableOrderedSet *_mutableOrderedSet;
}




+(id)_proxyShare;
-(NSUInteger)count;
-(NSUInteger)indexOfObject:(id)arg0 ;
-(id)_proxyInitWithContainer:(id)arg0 getter:(id)arg1 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(id)objectsAtIndexes:(id)arg0 ;
-(void)_proxyNonGCFinalize;
-(void)getObjects:(*id)arg0 range:(struct _NSRange )arg1 ;
-(void)insertObject:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)insertObjects:(id)arg0 atIndexes:(id)arg1 ;
-(void)removeObjectAtIndex:(NSUInteger)arg0 ;
-(void)removeObjectsAtIndexes:(id)arg0 ;
-(void)replaceObjectAtIndex:(NSUInteger)arg0 withObject:(id)arg1 ;
-(void)replaceObjectsAtIndexes:(id)arg0 withObjects:(id)arg1 ;


@end


#endif