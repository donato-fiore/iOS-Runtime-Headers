// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSKEYVALUESLOWMUTABLEORDEREDSET_H
#define NSKEYVALUESLOWMUTABLEORDEREDSET_H



#import "NSKeyValueMutableOrderedSet.h"
#import "NSKeyValueGetter.h"
#import "NSKeyValueSetter.h"

@interface NSKeyValueSlowMutableOrderedSet : NSKeyValueMutableOrderedSet {
    NSKeyValueGetter *_valueGetter;
    NSKeyValueSetter *_valueSetter;
    BOOL _treatNilValuesLikeEmptyOrderedSets;
    char _padding;
}




-(NSUInteger)count;
-(NSUInteger)indexOfObject:(id)arg0 ;
-(id)_createNonNilMutableOrderedSetValueWithSelector:(SEL)arg0 ;
-(id)_nonNilOrderedSetValueWithSelector:(SEL)arg0 ;
-(id)_proxyInitWithContainer:(id)arg0 getter:(id)arg1 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(id)objectsAtIndexes:(id)arg0 ;
-(void)_proxyNonGCFinalize;
-(void)_raiseNilValueExceptionWithSelector:(SEL)arg0 ;
-(void)getObjects:(*id)arg0 range:(struct _NSRange )arg1 ;
-(void)insertObject:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)insertObjects:(id)arg0 atIndexes:(id)arg1 ;
-(void)removeObjectAtIndex:(NSUInteger)arg0 ;
-(void)removeObjectsAtIndexes:(id)arg0 ;
-(void)replaceObjectAtIndex:(NSUInteger)arg0 withObject:(id)arg1 ;
-(void)replaceObjectsAtIndexes:(id)arg0 withObjects:(id)arg1 ;


@end


#endif