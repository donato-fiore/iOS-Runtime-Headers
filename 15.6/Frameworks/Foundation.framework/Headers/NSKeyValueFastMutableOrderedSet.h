// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSKEYVALUEFASTMUTABLEORDEREDSET_H
#define NSKEYVALUEFASTMUTABLEORDEREDSET_H



#import "NSKeyValueMutableOrderedSet.h"
#import "NSKeyValueMutatingOrderedSetMethodSet.h"

@interface NSKeyValueFastMutableOrderedSet : NSKeyValueMutableOrderedSet {
    NSKeyValueMutatingOrderedSetMethodSet *_mutatingMethods;
}




-(id)_proxyInitWithContainer:(id)arg0 getter:(id)arg1 ;
-(void)_proxyNonGCFinalize;
-(void)insertObject:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)insertObjects:(id)arg0 atIndexes:(id)arg1 ;
-(void)removeObjectAtIndex:(NSUInteger)arg0 ;
-(void)removeObjectsAtIndexes:(id)arg0 ;
-(void)replaceObjectAtIndex:(NSUInteger)arg0 withObject:(id)arg1 ;
-(void)replaceObjectsAtIndexes:(id)arg0 withObjects:(id)arg1 ;


@end


#endif